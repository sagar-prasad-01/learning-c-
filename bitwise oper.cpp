#include <iostream>
using namespace std;

int main()
{
	
	int a=12,b=13,c,d,e;
	c=a&b;
	d=a|b;
	e=a^b;
	
	cout<<c<<endl<<d<<endl<<e<<endl;
	c=~a;
	cout<<c<<endl;
	c=<<a;
	cout<<c<<endl;
	
	return 0;
}
