#include <iostream>
using namespace std;

int fibonacciseries(int n)
{
	if(n<2)
	{
		return 1;
	}

	
return	fibonacciseries(n-2)+fibonacciseries(n-1);
}
int main()
{
	int n=3;
	cout<<fibonacciseries(n);
	
	return 0;
}
