#include <iostream>
using namespace std;

int main()
{
	int n1,n2,sum;
	cout<<"enter n1 :"<<endl;
	cin>>n1;
	cout<<"enter n2 : "<<endl;
	cin>>n2;
	int n3=n1+1;
	int i=1;
	while(i<=n2)
	{
		int temp=n3,rev=0;
		while(temp>0)
		{
			if(n1%i==0)
	{
		
		sum=sum+i;
	}	
		i++;
	}
	if(n1==sum)
	{
		cout<<"number is perfect";
	}
			
		}
		if(sum==n3)
		{
			cout<<sum<<endl;
			i+=1;
		}
	}
	

