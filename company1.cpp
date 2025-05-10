#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
cout<<"enter the value of num 1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num 2 "<<endl;
    cin>>num2;
    int num3=num1+1;
    int i=1;
    while(i<=num2){
        int temp=num3,rev=0;
        while(temp>0){
            int r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==num3){
            cout<<rev<<endl;
            i++;
        }
        num3++;
  }  

return 0;
}