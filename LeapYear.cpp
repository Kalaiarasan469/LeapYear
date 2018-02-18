#include <iostream>
using namespace std;
class LeapYear
{
int yr;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>yr;
	}
void chck()
{
	cout<<"OUTPUT"<<endl;
if(yr%4)
	{
	cout<<"no"<<endl;
	}
	else
	{
	   cout<<"yes"<<endl;}
	}
};
int main()
{
LeapYear lp;
lp.get();
lp.chck();
return 0;
}