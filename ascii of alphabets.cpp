#include <iostream>
using namespace std;

int main()
{
	string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
for(int i=0;i<s1.length();i++)
{
	int j;
	cout<<"ascii value of "<<s1[i]<<" = "<<(j=s1[i])<<endl;
}

	return 0;
}
