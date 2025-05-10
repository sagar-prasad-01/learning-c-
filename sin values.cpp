#include <iostream>
using namespace std;

int main()
{
	float dg;
	cout<<"enter degree of sin";
	cin>>dg;
	if(dg==0)
	cout<<"sin0 = 0";
	else if(dg==30)
	cout<<"sin30 = 1/2";
	else if(dg==45)
	cout<<"sin30 = 1/v2";
	else if(dg==60)
	cout<<"sin30 = v3/2";
	else if(dg==90)
	cout<<"sin30 = 1";
	else
	cout<<"invalid degree";
	
	
	
	return 0;
}
