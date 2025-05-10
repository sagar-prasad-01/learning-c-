 
#include <iostream>
using namespace std;

int main() {
    int phymarks,chemmarks,mathmarks;
    float percentage,totalmarks;
    cout<<"enter marks btw 0 to 100 of phy ,chem ,math " <<endl;
    cin>>phymarks;
    cin>>chemmarks;
    cin>>mathmarks;
    if(phymarks>=33 and chemmarks>=33 and mathmarks>=33)
    {
        cout<<"user is pass in all subject"<<endl;
    }
    else
    cout<<"user is fail"<<endl;
    if(phymarks<33)
    cout<<"user fail in phy "<< phymarks<<endl;
     if(chemmarks<33)
    cout<<"user fail in chem "<< chemmarks<<endl;
    if(mathmarks<33)
    cout<<"user fail in math "<< mathmarks<<endl;
    
    totalmarks=phymarks+chemmarks+mathmarks;
    percentage=(totalmarks/300)*100;
    cout<<"percentage of user = "<<percentage<<endl;
    if(percentage<=45 and phymarks>=33 and chemmarks>=33 and mathmarks>=33)
    {
        cout<<"user is third division";
    }
    else if(percentage<60 and phymarks>=33 and chemmarks>=33 and mathmarks>=33)
    {
        cout<<"user is second division";

    }
    else if(percentage>=60 and phymarks>=33 and chemmarks>=33 and mathmarks>=33)
    {
           cout<<"user is first division";
 
    }
 
    

    return 0;
}