#include <iostream>
using namespace std;

int main()
{
	 int i=1;
	while(i<=5)
	{
		cout<<"this is outer loop"<<endl;
		int j=1;
		while(j<=5)
		{
			cout<<"this is inner loop"<<endl;
			j++;
}
	i++;
	cout<<endl;	
	}
	
	return 0;
}
