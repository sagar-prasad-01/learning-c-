

//temperature conversion k to f.
#include <iostream>
using namespace std;

int main()
{  
   float k,f;
   cout<<"enter tem in k :";
   cin>>k;
   f=(k-273.15)*9.0/5+32;
   cout<<"new tem in fahrenheit : "<<f;
   
	return 0;
}
