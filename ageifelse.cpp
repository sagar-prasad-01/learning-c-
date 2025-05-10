#include <iostream>
using namespace std;

int main()
{
	int age;
	cin>>age;
	if(age<0)
	cout<<"invalid age";
	else if(age<=12)
	cout<<"child age";
		else if(age<=19)
	cout<<"teen  age";
		else if(age<=60)
	cout<<"young age";
		else 
	cout<<"old age";
	
	return 0;
}
