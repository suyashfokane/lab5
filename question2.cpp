#include <iostream>
using namespace std;
#define MAX 100
int max(int arr[], int n);
int min(int arr[], int n);
float mean(int arr[], int l, int n, int m);
float median(int arr[], int l, int n, float m);
int mode(int arr[], int n);
int main()
{
	int arr[MAX], n, i, j;
	cout<<"Enter the number of the elements\n";
	cin>>n;
	cout<<"Enter the elements of the array\n";
	for (i=0;i<n;i++)
	{
		cin>>arr[n];
	}
	cout<<"The maximum element:"<<max(arr, n);
	cout<<"The minimum element:"<<min(arr, n);
	cout<<"The mean is:"<<mean(arr, 0, n, 0);
	cout<<"The median is"<<median(arr, 0, n, 0);
	cout<<"The mode is"<<mode(arr, n);
	return 0;
}
int max(int arr[], int n)
{
	for(int i=0; i<n;i++)
	{
		int mi=arr[i];
		int p= i;
		for(int l=i+1;l<n;l++)
		{
			if(arr[l]<=mi)
			{
				mi= arr[l];
				p=l;
			}
		}
		arr[p]=arr[i];
		arr[i]=mi;
	}
	return arr[n-1];
}
int min(int arr[], int n)
{
		for(int i=0; i<n;i++)
	{
		int mi=arr[i];
		int p= i;
		for(int l=i+1;l<n;l++)
		{
			if(arr[l]<=mi)
			{
				mi= arr[l];
				p=l;
			}
		}
		arr[p]=arr[i];
		arr[i]=mi;
	}
	return arr[0];
}
float mean(int arr[], int l, int n, int m)
{
	if (l>n)
	{
		return m/n;
	}
	m+=arr[l]; 
	l++;
	mean(arr, l, n, m);
}
float median(int arr[], int l, int n, float m)
{
	for(int i=0; i<n;i++)
	{
		int mi=arr[i];
		int p= i;
		for(l=i+1;l<n;l++)
		{
			if(arr[l]<=mi)
			{
				mi= arr[l];
				p=l;
			}
		}
		arr[p]=arr[i];
		arr[i]=mi;
	}
if(n%2!=0)
	{
		m =arr[(n/2)];
	}
	else 
	{
		m= (arr[n/2]+arr[(n/2)-1])/2;
	}
	return m;
}
int mode(int arr[], int n)
{
	int mode =0,prev,prevmode = 0,mark = 0;
	prev = arr[0];
	for(int i = 0; i<n; i++)
	{
		if(prev == arr[i])
		{
			mode++;
		}
			if(mode > prevmode)
			{
				prevmode = mode;
				mode =1;
				mark = i-1;
			}
		prev = arr[i];	
	}
	return mark;
}
