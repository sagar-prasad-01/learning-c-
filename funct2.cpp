#include <iostream>
using namespace std;
int x=10;
void myfunction()
{
	int x=20;
	cout<<"x"<<x;
}
int main()
{
	int x=30;
	cout<<x<<endl;
	cout<<::x<<endl;
	myfunction();
		return 0;
}
