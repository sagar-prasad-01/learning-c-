#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter num";
	cin>>n;
	int sum=0;
	int r,count;
	while(n>0)
	{r=n%10;
	sum=sum*10+r;
	n=n/10;
	}
	cout<<sum<<endl;
	return 0;
}
