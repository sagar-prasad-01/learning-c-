#include <iostream>
using namespace std;

int main()
{
	cout<<"this is class of pointer";
	int *ptr; 
	int **ptr1;
	int a=10;
	ptr=&a;
	ptr1=&ptr;
	cout<<"this is a class of pointer"<<endl;
	cout<<"the vale of a"<<a<<endl;
	
	cout<<"the addres of a"<<&a<<endl;
	cout<<"the value of ptr"<<ptr<<endl;
	cout<<"the addres of ptr"<<&ptr<<endl;
	cout<<"the value of ptr1"<<ptr1<<endl;
	cout<<"the addres of ptr1"<<&ptr1<<endl;
	cout<<"the single dereferance of ptr1 "<<*ptr<<endl;
	cout<<"the double deference of ptr1"<<**ptr1<<endl;
	
	return 0;
}
