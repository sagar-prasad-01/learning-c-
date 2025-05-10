#include <iostream>
using namespace std;

void swap(int x,int y);
int main()
{
int x,y;
cout<<"enter x and y";	
cin>>x>>y;
swap(x,y);
	return 0;
}
void swap(int x,int y)
{
	int z;
	z=y;
	y=x;
	x=z;
	cout<<x<<"   "<<y;
	
	
	
	
}
