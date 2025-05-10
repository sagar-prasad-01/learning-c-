#include <iostream>
using namespace std;

int main()
{
	int s1,s2,s3,s4,s5;
	cout<<"enter subject 1 marks";
	cin>>s1;
		cout<<"enter subject 2 marks";
	cin>>s2;
		cout<<"enter subject 3 marks";
	cin>>s3;
		cout<<"enter subject 4 marks";
	cin>>s4;
		cout<<"enter subject 5 marks";
	cin>>s5;
	 float total=s1+s2+s3+s4+s5;
	 cout<<"total marks :"<<total<<endl;
	 cout<<total/5<<"%";
	return 0;
}
