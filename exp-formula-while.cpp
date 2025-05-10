#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,sum = 0, i=0, p;
    int pw;
    float ans;
   
    cout<<"Enter the value of x ";
    cin>>x;
    cout<<"Enter the value of n ";
    cin>>n;
   
    while(i<=n)
    {
        pw = pow(x,i);
        int fact = 1;
        p = i;
        while(p>0)
        {
            fact = fact * p;
            p--;
        }
       
        //cout<<pw<<"    "<<fact<<endl;
        ans += float(pw)/ float(fact);
       
       
        i++;
    }
    cout<<ans;
   

    return 0;
}
