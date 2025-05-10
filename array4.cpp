
#include <iostream>
using namespace std;

int main()
{
	int cons=0,vow=0;
	char arr[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,97,98,99,100,101,102
	,103,104,105,106,107,108,109,110,111,112,113,114; }
	for(int i=0;i<34;i++)
	{
		if(arr[i]==('a') or arr[i]==('e') or arr[i]==('i') or arr[i]==('o') or arr[i]==('u') 
		or arr[i]==65 or arr[i]==('E') or arr[i]==('I') or arr[i]==('O') or arr[i]==('u') or arr[i]=='A')
		{
			cout<<"vowel = "<<arr[i]<<endl;
			vow++;
			
		}
		else
		cout<<"consonat = "<<arr[i]<<endl;
		cons++;
	
	
	}
	cout<<"total number of vowel = "<<vow<<endl;
	cout<<"total number of consonat = "<<cons-vow<<endl;
	return 0;
}
