#include <iostream>
using namespace std;

int main()
{
	int n,first=0,second=1,next;
	cin>>n;
	cout<<first<<" "<<second<<" ";
	for(int i=2;i<n;i++)
	{
		next=first+second;
		cout<<next<<" ";
		first=second;
		second=next;
	}
	return 0;
}
