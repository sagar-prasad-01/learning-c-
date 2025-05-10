#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int rem,sum=0;
	cout<<n<<endl;
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	
    rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	 cout<<sum;
	return 0;
}
