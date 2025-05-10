#include <iostream>
using namespace std;

int main()
{
	int count=0,n,sum=0,r;
	float avg,sod,cod;
cout<<"enter num";
cin>>n;
while(n>0)
{ 
 r=n%10;
 n=n/10;
 count++;
}
while(n>0)
{ 
 r=n%10;
 n=n/10;
 sod=sod+r;
}
cout<<sod<<endl;
cout<<count;
	return 0;
}
