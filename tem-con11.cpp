
//temperature conversion f to k.
#include <iostream>
using namespace std;

int main()
{  
   float k,f;
   cout<<"enter tem in f :";
   cin>>f;
   k=(f-32)*5.0/9+273.15;
   cout<<"new tem in kelwin : "<<k;
   
	return 0;
}
