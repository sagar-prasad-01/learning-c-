#include <iostream>
using namespace std;

int main()
{
	string x;
	int vowel=0,space=0,consonant=0;
	cout<<"enter string : "<<endl;
	getline(cin,x);
	for( int i=0;i<x.length();i++)
	{
		if(x[i]=='a' or x[i]=='e' or x[i]=='i' or x[i]=='o' or x[i]=='u' or x[i]=='A' or
		 x[i]=='E' or x[i]=='I' or x[i]=='O' or x[i]=='U')
		 {
		 	vowel++;
		 }
		 else if(x[i]==' ')
		 {
		 	space++;
		 }
		 else
		 {
		 	consonant++;
		 }
	}
	
	cout<<"number of vowel in string = "<<vowel<<endl;
	cout<<"number of space in string = "<<space<<endl;
	cout<<"number of consonant in string = "<<consonant<<endl;
	return 0;
}
