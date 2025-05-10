#include <iostream>
using namespace std;

int main()
{
	int s1,s2,s3,s4,s5,t=0;
	cout<<"enter s1 marks :";
	cin>>s1;
	cout<<"enter s2 marks :";
	cin>>s2;
		cout<<"enter s3 marks :";
	cin>>s3;
	cout<<"enter s4 marks :";
	cin>>s4;
	cout<<"enter s5 marks :";
	cin>>s5;
	t=s1+s2+s3+s4+s5;
	cout<<"total marks is "<<t<<endl;
	cout<<"percentage is "<<float(t)/5<<endl;
	return 0;
}
