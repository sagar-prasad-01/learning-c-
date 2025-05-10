#include <iostream>
using namespace std;

int main()
{ int spd;
  cout<<"enter speed of vehicle";
  cin>>spd;
  if(spd>0)
  {cout<<"vehicle moving in forward direction";
  }
  else if (spd<0)
  {cout<<"vehicle moving in backward direction";
  }
  else
  {cout<<"vehicle in rest position";
  }
	return 0;
}
