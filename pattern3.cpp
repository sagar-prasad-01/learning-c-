
#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		 
		for(int j=1;j<=5;j++)
		{
			
			if( i==1 or j==1 or i==5 or j==5 or j==i or j==6-i)
			
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}
