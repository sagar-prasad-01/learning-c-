#include <iostream>
using namespace std;

int main()
{
int count=0,n,sum=0,r;
cout<<"enter num";
cin>>n;
while(n>0)
{ 
 r=n%10;
 sum=sum*10+r;
 n=n/10;
 count++;
}
cout<<count<<endl;
cout<<"revese="<<sum;
 
	return 0;
}
