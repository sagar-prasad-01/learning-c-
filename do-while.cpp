//do while loop
#include <iostream>
using namespace std;

int main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+i;
		cout<<"sum = "<<sum<<endl;
		i++;
	}
	while(i<=10);
	cout<<"sum of ten natural num ="<<sum;
	return 0;
}
