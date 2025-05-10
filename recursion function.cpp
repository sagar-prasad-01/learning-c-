#include <iostream>
using namespace std;
int printhello(int n)
{
	if(n==0)
	{
		return 1;//base condition
	}
	
	int facto=n*printhello(n-1);
	return facto;
//	printhello(n-1);//recursive 
}
int main()
{
cout<<"factorial = "<<printhello(5);
	return 0;
}
