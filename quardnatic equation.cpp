#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	float d,rf,rs;
	cout<<"enter value of a,b,c";
	cin>>a>>b>>c;
	d=(b*b)-4*(a*c);
	rf=(-b+sqrt(d))/(2*a);
	rs=(-b-sqrt(d))/(2*a);
	
	cout<<d<<endl;
	cout<<"quardnatic equation root first:"<<rf<<endl;
	cout<<"quardnatic equation root second:"<<rs ;

	return 0;
}
 