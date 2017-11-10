#include<iostream>

using namespace std;


int main()
{
	const int size = 5;
	float arr1[size], arr2[size],arr3[2*size];
	int temp,flag = 1;
	for(int i = 0; i<size; i++)
	{
		arr1[i] = 0;
	}
	for(int i = 0; i<size; i++)
	{
		arr2[i] = 0;
	}
	cout<<"\nenter array ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr1[i];
	}
	cout<<"\nenter array ";
	for(int i = 0; i<size; i++)
	{
		cin>>arr2[i];
	}
	for(int i = 0; i<2*size; i++)
	{
		if(i<size)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i-size];
		}
				
	}
	
	do
	{
		flag = 0;
		for(int i = 0; i <2*size; i++)
		{
			if(arr3[i]<arr3[i+1])
			{
				temp = arr3[i];
				arr3[i] = arr3[i+1];
				arr3[i+1] = temp;
				flag =1;
			}
		}
	}while(flag == 1);
	cout<< "maximum element"<<arr3[0];
	cout<<"\nminimum element"<<arr3[2*size-1];
	return 0;
}
