#include <iostream>
using namespace std;

int main()
{
	int n1,n2,hcf,lcm;
	cout<<"enter n1 ";
	cin>>n1;
	cout<<"enter n2 ";
	cin>>n2;
	for(int i=1;i<=n1 and i<=n2;i++)
	{
		if(n1%i==0 and n2%i==0)
		{
			 hcf=i;
		}
	}
	cout<<"hcf = "<<hcf;
	lcm=n1*n2/(hcf);
	cout<<"lcm = "<<lcm;
	
	
	return 0;
}
