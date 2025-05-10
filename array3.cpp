#include <iostream>
using namespace std;

int main()
{
	int n;  
	cout<<"enter length of array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter elements of "<<i+1<<endl ;
		cin>>arr[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
	return 0;
}
