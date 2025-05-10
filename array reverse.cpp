#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[5]={1,6,4,3,8};
	int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<size/2;i++)
{
	int temp=arr[i];
	arr[i]=arr[size-1-i];
	arr[size-1-i]=temp;
	
}
for(int i=0;i<size;i++)
{
	cout<<arr[i]<<endl;
}
	
		
	return 0;
}
