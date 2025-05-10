#include <iostream>
using namespace std;

int main()
{
	int n,i=1,rem,sum=0;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		i++;
	}
	cout<<sum;
	
	return 0;
}
