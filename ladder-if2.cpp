#include <iostream>
using namespace std;

int main()
{
	int unit,bill;
	cout<<"enter your unit :";
	cin>>unit;
    
    if (unit<100) cout<<"electric bill="<<unit*4;
    else if(unit<150) cout<<"electric bill="<<unit*5;
    else if(unit<200) cout<<"electric bill="<<unit*6;
    else if(unit>200) cout<<"electric bill="<<unit*7;
    
    
	
	return 0;
}
