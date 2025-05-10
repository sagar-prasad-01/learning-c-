#include <iostream>
using namespace std;

int main()
{
	int n=11;
	int f=0;
	int i=2;
	while(i<n/2)
	{
	  if(n%i==0)
	  {
	  	f++;
	  }
	  i++;
	}
	if(f==0)
	 {cout<<"num is prime";
	 
	 }
	 else
	 {cout<<"num is not prime";
	 }
	return 0;
}
