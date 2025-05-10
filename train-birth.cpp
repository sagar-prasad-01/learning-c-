//train birth finder by seatnumber.
#include <iostream>
using namespace std;

int main()
{
	int sn;
	cout<<"enter your seat number :"<<endl;
	cin>>sn;
	if(sn<=72 and sn>=1)
	{
	  cout<<" welcome in the indian railway ";
	  int t =sn%8;
     if(t==1 || t==4)
	{cout<<"your train berth is lowerr :";
	}
	else if(t==2 || t==5)
	{cout<<"your train berth is middle :";
	}
	else if(t==3 || t==6)
	{cout<<"your train berth is upper :";}
	else if(t==7)
	{cout<<"your train berth is sidelower :";
	}
	else
	{cout<<"your train berth is sideupper :";
	}

	  
	  
	}
	
	else
	
	{cout<<"your seat number is not valid"<<endl;
	}
	
	
	return 0;
}
