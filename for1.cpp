#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
	cout<<"outer loop"<<endl;
	  for(int j=1;j<=5;j++)
	  {
	  	cout<<"inner loop";
	  }
	cout<<endl;
	}
	return 0;
}
