#include <iostream>
using namespace std;

int main()
{
	int i=1;
	int n=1000;
	while (i<=n)
	{
		//if(i%7==0 and i%11==0 and i%31==0)
		//if(i%3==0 and i%9==0 and i%10!=0)
		if(i%7==0 and i%42==0)
		cout<<i<<endl;
		i++;
	}
	return 0;
}
