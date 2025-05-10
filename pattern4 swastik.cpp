#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		
		for(int j=1;j<=5;j++)
		{
			
			if( (i==3) or
			  (j==3) or
			  (i==1 and j>=3) or 
			  (i==5 and j<=3) or 
			  (j==1 and i<=3) or
			  (j==5 and i>=3))
			 
			   
			{
				cout<<"*";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
