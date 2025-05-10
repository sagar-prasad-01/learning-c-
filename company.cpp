//make a programe taking two input from user n1 and n2
// and when the user input the n2 find out all the palendrome number after n1 and numbers of n2.
#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"enter n1 :"<<endl;
	cin>>n1;
	cout<<"enter n2 : "<<endl;
	cin>>n2;
	int n3=n1+1;
	int i=1;
	while(i<=n2)
	{
		int temp=n3,rev=0;
		while(temp>0)
		{
			int r=temp%10;
			rev=rev*10+r;
			temp=temp/10;
			
		}
		if(rev==n3)
		{
			cout<<rev<<endl;
			i+=1;
		}
		n3+=1;
	}
	return 0;
}
