#include <iostream>
#include <algorithm>
using namespace std;

int main()
{ 
string s1="silent";
string s2="litsne";
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
if(s1==s2)
{
	cout<<" silent and listen is anagram";
}
else
cout<<"silent and listen is not anagram ";

	
	return 0;
}
