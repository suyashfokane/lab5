#include<iostream>

using namespace std;

int kthsize(float arr[], int size, int k, int ch)
{
	int prev=arr[0],i,j;
	if(ch == 1)
	{
		prev=arr[0];
		for( i = 0,  j = 0; i<size; i++)
		{
			if(prev != arr[i])
			{
				j++;
			}
			if(j == k -1)
			{
				break;
			}
			prev=arr[i];
		}
		return i;
	}
	if(ch == -1)
	{
		prev=arr[size-1];
		for( i = size-1, j = 0; i>=0; i--)
		{
			if(prev != arr[i])
			{
				j++;
			}
			if(j == k-1 )
			{
				break;
			}
			prev=arr[i];
		}
		return i;
	}
}

int main()
{
	const int size = 5;
	float arr[size], sum;
	int temp,flag =0,ind,k;
	for(int i = 0; i<size; i++)
	{
		arr[i] = 0;
	}
	cout<<"enter k ";
	cin>>k;
	cout<<"\nenter array ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr[i];
	}
	do
	{
		flag = 0;
		for(int i = 0; i <size; i++)
		{
			if(arr[i]<arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				flag =1;
			}
		}
	}while(flag == 1);
	ind = kthsize(arr,size,k,1);
	cout<<"\nkth max value"<<arr[ind];
	ind = kthsize(arr, size,k,-1);
	cout<<"\nkth min value"<<arr[ind];
	return 0;
}
