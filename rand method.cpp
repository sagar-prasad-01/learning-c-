#include <iostream>
using namespace std;

int main()
{
	int arr[6]={87,56,77,33,55,51};
	for(int i=1;i<=10;i++)
	{
		cout<<"your choice"<<i<<endl;
		int ch;
		cin>>ch;
		int j=rand()%6 ;
		if(arr[j]==ch)
		{
			cout<<"mai jeeta "<<i<<endl;
		}
		else
		{
			cout<<"mai hara "<<i<<endl;
		}
		
		
	}
	return 0;
}
