#include <iostream>
using namespace std;
 union myun
 {
 	int x=10;
 	void display()
 	{
 		cout<<"hello";
	 }
 };
int main()
{
	myun obj;
	cout<<obj.x<<endl;
	obj.display();
	return 0;
}
