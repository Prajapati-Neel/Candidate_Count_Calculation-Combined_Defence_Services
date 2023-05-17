#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	ofstream ofile;
	char ch;
	string str;
	file.open("OVERALL4.txt");
	file.seekg(0);
	int total=0,total_AFA=0,total_IMA=0,total_INA=0,total_OTA=0;
	int OTA=0,INA=0,INA_OTA=0,IMA=0,IMA_OTA=0,IMA_INA=0,IMA_INA_OTA=0,AFA=0,AFA_OTA=0,AFA_INA=0,AFA_INA_OTA=0,AFA_IMA=0,AFA_IMA_OTA=0,AFA_IMA_INA=0,AFA_IMA_INA_OTA=0;
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	str+=ch;
	}
	for(int i=0;i<str.length();i+=26)
	{
		total++;
		if(str[i+10]=='A')
		{
			total_AFA++;
		}
		if(str[i+14]=='I')
		{
			total_IMA++;
		}
		if(str[i+18]=='I')
		{
			total_INA++;
		}
		if(str[i+22]=='O')
		{
			total_OTA++;
		}
		if(str[i+10]!='A'&&str[i+14]!='I'&&str[i+18]!='I'&&str[i+22]=='O')
		{
			OTA++;
		}
		if(str[i+10]!='A'&&str[i+14]!='I'&&str[i+18]=='I'&&str[i+22]!='O')
		{
			INA++;
		}
		if(str[i+10]!='A'&&str[i+14]!='I'&&str[i+18]=='I'&&str[i+22]=='O')
		{
			INA_OTA++;
		}
		if(str[i+10]!='A'&&str[i+14]=='I'&&str[i+18]!='I'&&str[i+22]!='O')
		{
			IMA++;
		}
		if(str[i+10]!='A'&&str[i+14]=='I'&&str[i+18]!='I'&&str[i+22]=='O')
		{
			IMA_OTA++;
		}
		if(str[i+10]!='A'&&str[i+14]=='I'&&str[i+18]=='I'&&str[i+22]!='O')
		{
			IMA_INA++;
		}
		if(str[i+10]!='A'&&str[i+14]=='I'&&str[i+18]=='I'&&str[i+22]=='O')
		{
			IMA_INA_OTA++;
		}
		if(str[i+10]=='A'&&str[i+14]!='I'&&str[i+18]!='I'&&str[i+22]!='O')
		{
			AFA++;
		}
		if(str[i+10]=='A'&&str[i+14]!='I'&&str[i+18]!='I'&&str[i+22]=='O')
		{
			AFA_OTA++;
		}
		if(str[i+10]=='A'&&str[i+14]!='I'&&str[i+18]=='I'&&str[i+22]!='O')
		{
			AFA_INA++;
		}
		if(str[i+10]=='A'&&str[i+14]!='I'&&str[i+18]=='I'&&str[i+22]=='O')
		{
			AFA_INA_OTA++;
		}
		if(str[i+10]=='A'&&str[i+14]=='I'&&str[i+18]!='I'&&str[i+22]!='O')
		{
			AFA_IMA++;
		}
		if(str[i+10]=='A'&&str[i+14]=='I'&&str[i+18]!='I'&&str[i+22]=='O')
		{
			AFA_IMA_OTA++;
		}
		if(str[i+10]=='A'&&str[i+14]=='I'&&str[i+18]=='I'&&str[i+22]!='O')
		{
			AFA_IMA_INA++;
		}
		if(str[i+10]=='A'&&str[i+14]=='I'&&str[i+18]=='I'&&str[i+22]=='O')
		{
			AFA_IMA_INA_OTA++;
		}
	}
	cout<<str;
	cout<<"\nTOTAL     AFA IMA  INA  OTA\n";
	cout<<total<<"      "<<total_AFA<<" "<<total_IMA<<" "<<total_INA<<" "<<total_OTA;
	cout<<"\n"<<"OTA="<<OTA<<"\n"<<"INA="<<INA<<"\n"<<"INA_OTA="<<INA_OTA<<"\n"<<"IMA="<<IMA<<"\n"<<"IMA_OTA="<<IMA_OTA<<"\n"<<"IMA_INA="<<IMA_INA<<"\n"<<"IMA_INA_OTA="<<IMA_INA_OTA<<"\n"<<"AFA="<<AFA<<"\n"	<<"AFA_OTA="<<AFA_OTA<<"\n"<<"AFA_INA="<<AFA_INA<<"\n"<<"AFA_INA_OTA="<<AFA_INA_OTA<<"\n"<<"AFA_IMA="<<AFA_IMA<<"\n"<<"AFA_IMA_OTA="<<AFA_IMA_OTA<<"\n"<<"AFA_IMA_INA="<<AFA_IMA_INA<<"\n"<<"AFA_IMA_INA_OTA="<<AFA_IMA_INA_OTA;
	

}
