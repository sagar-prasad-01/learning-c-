#include <iostream>
using namespace std;

int myfun(int n1,int n2,int n3=0)
{
	return (n1+n2+n3);
}
int main()
{
	
	int s1=myfun(1,2);
	cout<<s1;
	return 0;
}
