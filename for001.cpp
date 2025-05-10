#include <iostream>
using namespace std;

int main()
{
	int even=0,odd;
	for(int i=0;i<=100;i++)
	{
	if(i%2==0)
	{
		even=even+i;	
		
	}
	else
	{
		odd+=i;
	}
}
 cout<<"odd"<<odd<<endl;
 cout<<"even"<<even;
	return 0;
}
