#include<iostreaftm>
#include<fstream>
using namespace std;
int main()
{
string aft="891414158";
int len=aft.length();
int num=0;
int temp=0;
for(int i=1;i<=len;i++)
{
	if(aft[len-i]=='0')
	{
		temp=0;
	}else	if(aft[len-i]=='1')
	{
		temp=1;
	}else
	if(aft[len-i]=='2')
	{
		temp=2;
	}else
	if(aft[len-i]=='3')
	{
		temp=3;
	}else
	if(aft[len-i]=='4')
	{
		temp=4;
	}else
	if(aft[len-i]=='5')
	{
		temp=5;
	}else
	if(aft[len-i]=='6')
	{
		temp=6;
	}else
	if(aft[len-i]=='7')
	{
		temp=7;
	}else
	if(aft[len-i]=='8')
	{
		temp=8;
	}else
	if(a[len-i]=='9')
	{
		temp=9;
	}
int ten=1;
if(i>1)
{
	for(int j=1;j<i;j++)
	{
		ten*=10;
	}	
}
	num+=temp*ten;
}
cout<<num;
}
