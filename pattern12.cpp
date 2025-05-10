#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=4;i++)
	{ int k=1;
		for(int j=1;j<=7;j++)
		{
			if(j>=5-i and j<=3+i)
			{
				cout<<k;
				j<4?k++:k--;
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