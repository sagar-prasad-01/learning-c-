#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter numbers"<<endl;
	cin>>a>>b>>c;
	
	if(a>b and a>c)
	cout<<"a is max";
	else if(b>a and b>c)
	cout<<"b is max";
	else
	cout<<"c is max";
	return 0;
}
