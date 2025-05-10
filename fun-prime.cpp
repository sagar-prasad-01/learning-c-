#include <iostream>
using namespace std;
int fun_prime(int n);
int main()
{
int x;
cin>>x;
fun_prime(x);

	return 0;
}
int fun_prime(int n)
 {
 	int i=1,cnt=0;
 	while(i<=n)
 	{
 		if(n%10==0)
 		{
 			cnt++;
		 }
		 i++;
 		
	 }
	 if(cnt==2)
	 {
	 	cout<<"number is prime";
	 }
	  else
	 {
	 	cout<<"number is not prime";
	 }
 }
