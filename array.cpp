#include <iostream>
using namespace std;

int main()
{
	int arr[4]={1,2,3,4}; 
	cout<<"array ="<<*arr<<endl; 
	cout<<"array ="<<*(arr+1)<<endl; 
	cout<<arr[3]<<endl; 
	int sum=0,n=4;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum of array = "<<sum;
	
	return 0;
}
