#include <iostream>
using namespace std;

int countzero(int n)
{
	int cnt=0;
	for(int i=5;i<=n;i*=5)
	{
		cnt+=n/i;
	}
	return cnt;
	
}
int main()
{
	cout<<"number of zeroes in 720! ="<<countzero(720);
	return 0;
}
