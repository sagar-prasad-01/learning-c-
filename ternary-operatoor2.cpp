#include <iostream>
using namespace std;

int main()
{
	int a=96,b=34,c=75,d=86,e;
	e=(a>b)?((a>c)?((a>d)?(a):(d)):(c)):((b>c)?((b>d)?(b):(d)):((c>d)?(c):(d)));
	cout<<"maximum value is :"<<e;
	return 0;
}