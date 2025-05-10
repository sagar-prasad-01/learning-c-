
#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		 
		for(int j=1;j<=5;j++)
		{
			
			if( j==5 or i==3 or (j==1 and i<=3) )
			
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
