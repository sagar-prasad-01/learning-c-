#include <iostream>
using namespace std;

int main()
{
	cout<<"enter length of matrix"<<endl;
	int n1;
	cin>>n1;
	int arr[n1][n1];
	int cnt=1;
	for(int i=0;i<n1;i++)
	{
		
		for(int j=0;j<n1;j++)
		{
		cout<<"enter " <<cnt <<" elements "<<endl;
		cin>>arr[i][j];
		cnt++;	
			
		}
	}
		for(int i=0;i<n1;i++)
	{
		
		for(int j=0;j<n1;j++)
		{
		cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}
