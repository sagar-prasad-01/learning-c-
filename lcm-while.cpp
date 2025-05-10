#include <iostream>
using namespace std;

int main()
{
	int a=12,b=24;
	int min=(a<b)?(a):(b);
	while(true)
	{
		if(min%a==0 and min%b==0)
		{
			break;
		}
		min++;
	}
	cout<<min;
	return 0;
}
