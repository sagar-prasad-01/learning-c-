 #include <iostream>
using namespace std;

int main()
{
	 string s;
	 cout<<"enter the string without or with space"<<endl;
	 getline(cin,s);
	 cout<<s<<endl ;
	 cout<<s.size()<<endl;
	 cout<<s.length()<<endl;
	 cout<<s[0];
	 for(int i=0;i<s.length();i++)
	 {
	 	cout<<s[i]<<endl;
	 }
	 //for of loop in string
	 for(char j:s)
	 {
	 	cout<<j<<endl;
	 }
	return 0;
}
