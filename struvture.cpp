#include <iostream>
using namespace std;

struct mystr
{
int x=5;
char y='a';
float z=3.1f; 
void display()
{
	cout<<"this is fun of struc"<<endl;
	}	
};
int main()
{
	mystr ob;
	ob.x;
	ob.display();
	
	return 0;
}
