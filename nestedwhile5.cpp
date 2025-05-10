#include <iostream>
using namespace std;

int main()
{
	int i=1;
	while(i<=4)
	{
		int j=1;
		while(j<=7)
		{
		
			if(j<=(2*i-1))
			cout<<"*";
				if(j<=(4-i))
			cout<<" ";
			j++;
		}
	
	
		cout<<endl;
		
		
		
		i++;
	}
	return 0;
}
