#include <iostream>
using namespace std;

int main()
{
	string  str1="hello sagar";
	for( char i:str1)
	{
		cout<<i<<endl;
	}
	//conginating of two or more strings
	string str2=" how";
	string str3=" are you";
	cout<<str1+str2+str3<<endl;
	cout<<(str1==str2)<<endl;
	cout<<str1.compare(str2)<<endl;
	return 0;
}
