#include <iostream>
using namespace std;

int main()
{
	char a,b,c,d;
	cout<<"enter three charcter :" ;
	cin>>a>>b>>c;
	d=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
	cout<<"bigger charcter btw three character is  :"<<d;
	return 0;
}
