#include <iostream>
using namespace std;

int main()
{
	char g,m,f;
	int age;
	cout<<"enter your gender :";
	cin>>g;
	cout<<"enter your age :";
	cin>>age;
	
	if(g==f && age>55) cout<<"pension amount ="<<1000;
	else if(g==f and age>60) cout<<"pension amout ="<<500;
	else if(g==m and age>60) cout<<"pension amout ="<<2000;
	else if(g==m and age<60) cout<<" no pension";
	else if(g==f and age<55) cout<<"no pension ";
	
	return 0;
}
