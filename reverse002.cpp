#include <iostream>
using namespace std;

int main()
{
	int rev=0,n;
	cout<<"enter num";
	cin>>n;
	int tem=n;
	while(n>0)
	{
		int rem;
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	cout<<"reverse="<<rev<<endl;
	if(rev==tem)
	{
		cout<<"num is palendrome";
	}
	
	return 0;
}
