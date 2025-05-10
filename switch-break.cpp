//switch case 
#include <iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"press 1 to check the number is prime "<<endl;
	cout<<"press 2 to reverse the number"<<endl;
	cout<<"press 3 to add the natural number upto 10"<<endl;
	cout<<"press 4 to check number is perfect or not"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				int n,rem,rev=0;
				cout<<"enter number";
				cin>>n;
				while(n>0)
				{
					rem=n%10;
					rev=rev*10+rem;
					n=n/10;
					
				}
				cout<<"reverse = "<<rev;
				break;
			}
		case 2:
			{
				int n,cnt=0,i=1;
				cout<<"enter number";
				cin>>n;
				while(i<=n)
				{
					if(n%i==0)
					{
						cnt++;
					}
		          i++;
				}
				if(cnt==2)
				{
					cout<<"number is prime ";
				}
				else
				cout<<"not prime ";
				break;
			}
		case 4:
			{
				int n,i=1,sum=0;
				cout<<"enter number";
				cin>>n;
				while(i<n)
				{
					if(n%i==0)
					{
						sum=sum+i;
					}
					i++;
				}
				if(sum==n)
				{
					cout<<"number is perfect";
				}
				
			}
		
		
	}
	return 0;
}
