//swaping of string
#include <iostream>
using namespace std;

int main()
{
	string s1="hello";
	string s2="bhopal";
	string s3=s1.append(" "+s2);
	cout<<s3;
	s3.clear();
	cout<<s2.at(1)<<endl;
	cout<<s2.back()<<endl;
	cout<<s2.front()<<endl;
	cout<<s2.substr(1,4)<<endl;
	s2.insert(1,"2");
	cout<<s2<<endl;
	s2.erase(2,3);
	cout<<s2<<endl;
	s2.pop_back();
	cout<<s2<<endl;
	s2.push_back('g');
	cout<<s2<<endl;
	s2.resize(3);
	cout<<s2<<endl;
	cout<<s2.empty();
	
	
	
//	swap(s1,s2);
	
	//string s3=s1;
	//s1=s2;
	//s2=s3;
	//cout<<s1<<endl<<s2;
	return 0;
}
