#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream file;
	char ch;
	int a=0;
	file.open("OTA.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(ch==' '||ch=='\n')
	{
		cout<<"\n";
		a++;
		continue;
		
	}
	if(file.eof()==1)
	{
		a++;
		break;
	}
	cout<<ch;
	}
	cout<<"total:-"<<a;
}

