#include <iostream>

using namespace std;

int main()
{
	string s1="silent";
	string s2="listen";

	sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
	cout<<(s1==s2);
	return 0;
}
