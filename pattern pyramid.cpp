#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"enter n1 and n2"<<endl;
	cin>>n1>>n2;
	for(int i=n1;n1!=n2;i++)
	{
		n1++;
		int cnt=0;
	for(int j=1;j<=n1;j++)
	{
		if(n1%j==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		cout<<"prime numbers btw n1 and n2 is = "<<n1<<endl;
	}
	
	
	
	}
	
	
	
	return 0;
}
