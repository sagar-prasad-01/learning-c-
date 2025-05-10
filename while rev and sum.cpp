#include <iostream>
using namespace std;

int main()
{
	int n,sum=0,rev=0,rem;
	cin>>n;
	while(n>0)
	
	{
		rem=n%10;
		rev=rev*10+rem;
		sum=sum+rem;
		n=n/10;
	}
	cout<<rev<<endl;
	cout<<sum;
	
	
	return 0;
}
