#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"enter s1"<<endl;
	getline(cin,s1);
	cout<<"enter s2"<<endl;
	getline(cin,s2);
	 sort(s1.begin(),s1.end());
	 sort(s2.begin(),s2.end());
	 
	cout<<"arranged string s1 in ascending order "<<endl<<s1;
	cout<<"arranged string  s2 in ascending order "<<endl<<s2;
	
	
	return 0;
}
