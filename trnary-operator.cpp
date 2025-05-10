#include <iostream>
using namespace std;

int main()
{
int a=10,b=12,c=14; 
int max,min;
max=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
min=(a<b)?((a<c)?a:c):((b<c)?b:c);
cout<<max<<endl;
cout<<min;
	return 0;
}
