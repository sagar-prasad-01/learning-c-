#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,cnt=0,sum=0,r;
	
	
	cout<<"enter number";
	cin>>n;
	int temp=n;

while(n>0)
{
	n=n/10;
	cnt++;
}
cout<<cnt<<endl;


n=temp;
while(temp>0)
{
	r=temp%10;
	sum=sum+pow(r,cnt);
	temp=temp/10;
}


if(sum==n)
{
	cout<<"number is armstrong"<<endl;;
}
else
{
	cout<<"number is not armstrong"<<endl;
}
	 
	return 0;
}
