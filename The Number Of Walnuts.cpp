#include <iostream>
using namespace std;
int main()
{
	int x,y,z,start;
	cin>>x>>y>>z;
	start = x*y*z;
	for(int i=1;i<=start;i++)
	{
		if(i%x==0 && i%y==0 && i%z==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
