#include <iostream>
using namespace std;

int main()
{
	int n,sum=0,i=1;
	cout<<"enter number"<<endl;
	cin>>n;
	while(i<n)
	{
	if(n%i==0)
	{
		
		sum=sum+i;
	}	
		i++;
	}
	if(n==sum)
	{
		cout<<"number is perfect";
	}
	else
	cout<<"number is not perfect";
	return 0;
}
