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
	file.open("OVERALL2.txt");
	file.seekg(0);
	while(file)
	{
	file.get(ch);
	if(file.eof()==1)
	{
		break;
	}
	str+=ch;
	}
	file.close();
	string search;
	int i;
	int last_found=0;
	string find;
	int find_num;
	int aft_num=0;
	string aft;
	int test=0;
	int first=1;
	int count=0;
	string a=str;
	file.open("INA.txt");
	while(file)
	{
		find="";
		for(i=0;i<7;i++)
		{
			file.get(ch);
			find+=ch;	
		}
		if(file.eof()!=0)
		{
			break;
		}
	    count++;
		if(test==1)
		{
			if(first==1)
			{
				a+="\n";
				first=0;
			}
			a+=find+" :         INA    \n";
		}else{
		
		if(a.find(find)!=18446744073709551615)
		{
			last_found=a.find(find);
			a.replace(last_found+18,3,"INA");
		}else
		{
			int len=find.length();
			int num=0;
			int temp=0;
			for(int i=1;i<=len;i++)
			{
				if(find[len-i]=='0')
				{
					temp=0;
				}else	if(find[len-i]=='1')
				{
					temp=1;
				}else
				if(find[len-i]=='2')
				{
					temp=2;
				}else
				if(find[len-i]=='3')
				{
					temp=3;
				}else
				if(find[len-i]=='4')
				{
					temp=4;
				}else
				if(find[len-i]=='5')
				{
					temp=5;
				}else
				if(find[len-i]=='6')
				{
					temp=6;
				}else
				if(find[len-i]=='7')
				{
					temp=7;
				}else
				if(find[len-i]=='8')
				{
					temp=8;
				}else
				if(find[len-i]=='9')
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
			find_num=num;
			
			for(i=last_found;i<a.length();i+=26)
			{
				aft=a.substr(i,7);
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
				aft_num=num;
				if(find_num<aft_num)
				{
					a.insert(i,find+" :         INA    \n");
					last_found+=26;
					break;
				}
			}
			if(find_num>aft_num&&((i<a.length())==0))
			{
				test=1;
			}
		}			
			
		}
		file.get(ch);

}
if(test==1)
{
a.erase(a.length()-1,1);
}	
cout<<a;
ofile.open("OVERALL3.txt");
for(i=0;i<a.length();i++)
{
	ofile.put(a[i]);
}

}

