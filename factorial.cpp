#include <iostream>
using namespace std;

int main()
{
	int n,fact=1;
	cout<<"enter number";
	cin>>n;
	while(n>1)
	{
		
	fact=fact+n;	
		n--;
	}
	cout<<"factorial="<<fact;
	
	return 0;
}
