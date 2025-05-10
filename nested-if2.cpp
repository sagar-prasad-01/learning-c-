#include <iostream>
using namespace std;

int main()
{
   
    char g,m;
     int age,height;
    cout<<"Enter gender ,age ,height";
    cin>>g>>age>>height;
   
    if(g==m)
    {
        cout<<"gender is male"<<endl;
        if(age>18)
        {
            cout<<"age is greater than 18"<<endl;
            if(height>5)
            {
                cout<<"finally issue driving license for this male"<<endl;
                
            }
            else
            {
                cout<<"not issued"<<endl;
            }
        }
        else
        {cout<<"age is not elligible";
		}
	}
	return 0;
}
	