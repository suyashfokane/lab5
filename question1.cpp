#include <iostream>
#define MAX 100
using namespace std;
int sum(int arr[], int l, int y, int s)
{
	if (l>=y)
	{
		return s;
	}
	s+= arr[l];
	l++;
	sum(arr,l,y, s);
}
int main()
{
	int arr[MAX], i, n, s;
	cout << "Enter size of the array:"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array:\n";
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sum of all the elements of array = "<<sum(arr, 0, n, 0);
	return 0;
}

