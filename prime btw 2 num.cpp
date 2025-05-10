#include <iostream>
using namespace std;

int main()
{ 
int n1,n2;
cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{
		int cnt=0;
		
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			
			cout<<"prime ="<<i<<endl;
		}
	}
	return 0;
}
