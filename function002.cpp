#include <iostream>
using namespace std;
 int sum(int a, int b)//parameters
{
	return a+b;
	
}
int maxof2(int a,int b)
{
	if(a>b)
	return a  ;
	else
	return  b;
}
int sumofnumbers(int n)
{
	
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
	
}
int factorialofnum(int n)
{
	int fact=1;
	for(int i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int sumofinputs(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		
	}
	return sum;
	
}


int ncr(int n,int r)
{
    int n1=	factorialofnum(n);
    int r1=	factorialofnum(r);
	int  nr=factorialofnum(n-r);
	return n1/(r1*nr);
	
}
void checkprime()
{ 
int n;
cout<<"enter number"<<endl;
cin>>n;
	
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		cout<<"number is prime"<<endl;
		
	}
	else
	{
		cout<<"number is not prime"<<endl;
	}	

}
 

int main()
{
	
	
	cout<<"sum ="<<sum(2,5)<<endl;//arguments
	cout<<"max ="<<maxof2(3,4)<<endl;//arguments
	 cout<<"sum of natural numb = "<<sumofnumbers(10)<<endl;
	cout<<"factorial of any number = "<<factorialofnum(5)<<endl;
	cout<<"sum of inputs = "<<sumofinputs(167)<<endl;
	cout<<"ncr binomial of coefficiant of n and r ="<<ncr(6,3)<<endl;
    checkprime();
	
	return 0;
	
}