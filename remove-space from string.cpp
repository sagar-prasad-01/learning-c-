#include <iostream>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"enter string here"<<endl;
	getline(cin,s1);
	cout<<"string with space"<<endl<<s1<<endl;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=' ')
		{
			s2=s2+s1[i];
		}
	}
	cout<<"string without space"<<endl<<s2;


	return 0;
}
