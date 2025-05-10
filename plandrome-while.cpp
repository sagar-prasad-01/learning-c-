#include <iostream>
using namespace std;

int main()
{
	int n=121 ,r,sum=0;
	int t=n;
	while(n>0)
	{
	 r=n%10;
	 sum=sum*10+r;
	 n=n/10;
	}
	if(t==sum)
	{cout<<"num is plandrome"<<endl;
	}
	else
	{cout<<"num is not plandrome";
	}
	cout<<sum;
	return 0;
}
