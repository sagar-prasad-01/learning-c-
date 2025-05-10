//wap for multiple inheritance
#include <iostream>
using namespace std;

class a

{
    public:
	void display()
 {
	cout<<"super class a";
 }
};
class b

{
    public:
	void show()
 {
	cout<<"super class b";
 }
};
class c:public a,public b

{
    public:
	void display1()
 {
	cout<<"sub class c";
 }
};
int main()
{

	c obj;
	obj.display();
	obj.display1();
	obj.show();

	
	return 0;
}
