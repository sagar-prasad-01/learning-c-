//comma separator operator
#include <iostream>
using namespace std;

int main()
{
	int a =(1,2,3,4);
	cout<<a<<endl;
	cout<<a++<<endl;
	int m=a++;
	cout<<m<<endl;
	cout<<m<<endl;
	cout<<a<<endl ;
	cout<<--a<<endl;
	cout<<a--<<endl;
	return 0;
}
