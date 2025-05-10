#include <iostream>
using namespace std;

int main()
{
	char a='S',b='A',c='G',d='A',e='R';
	char f='A',g='S',h='H',i='U';
	int sum1=a+b+c+d+e;
	int sum2=f+g+h+i; 
	int sum=sum1-sum2;
	sum=abs(sum);
	cout<<"diffrence of two names :"<<sum;
	return 0;
}
