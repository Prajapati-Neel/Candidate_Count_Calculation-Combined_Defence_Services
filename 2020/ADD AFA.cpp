#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream file;
	ofstream ofile;
	char ch;
	int a=0;
	file.open("AFA.txt");
	ofile.open("OVERALL1.txt",ios::ate);
	ofile.seekp(0,ios::beg);
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(ch==' '||ch=='\n')
	{
		ofile.put(' ');
		ofile.put(':');
		ofile.put(' ');
		ofile.put('A');
		ofile.put('F');
		ofile.put('A');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ima
		ofile.put(' ');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ina
		ofile.put(' ');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ota
		ofile.put(' ');
		
		ofile.put('\n');
		a++;
		continue;
		
	}
	if(file.eof()!=0)
	{
		ofile.put(' ');
		ofile.put(':');
		ofile.put(' ');
		ofile.put('A');
		ofile.put('F');
		ofile.put('A');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ima
		ofile.put(' ');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ina
		ofile.put(' ');
		
		ofile.put(' ');
		
		ofile.put(' ');
		ofile.put(' ');//ota
		ofile.put(' ');
		
		ofile.put('\n');
		a++;
		break;
	}
	ofile.put(ch);
	}
	cout<<"total:-"<<a;
}

