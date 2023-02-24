#include<iostream>
#include<cstring>
using namespace std;

class Strings
{
	private:
		char *name;
		int length;
	public:
		Strings()
		{
			length=0;
			name=new char[length+1];
		}
		~Strings()
		{
			delete name;
		}
		void get_string(char*text);
		void compare(const Strings&,const Strings&);
		void concatenate(const Strings&,const Strings&);
		void display();
};

void Strings::get_string(char*text)
{
	length=strlen(text);
	delete name;
	name=new char[length+1];
	strcpy(name,text);
}

void Strings::concatenate(const Strings &string1,const Strings &string2)
{
	length=string1.length+string2.length;
	delete name;
	name=new char[length+1];
	strcpy(name,string1.name);
	strcat(name,string2.name);
	cout<<name<<endl;
}

void Strings::compare(const Strings &string1,const Strings &string2)
{
	if(string1.length==string2.length)
		cout<<"They are same strings";
	else if(string1.length>string2.length)
		cout<<string1.name<<" greater than "<<string2.name<<endl;
	else
		cout<<string2.name<<" greater than "<<string1.name<<endl;
}

void Strings::display()
{
	cout<<"The string length is "<<length<<endl;
}

int main()
{
	char name1[50],name2[50];
	Strings string1,string2,result;
	int choice,option,exit;
	cout<<"1.start \n2.quit"<<endl;
	cin>>exit;
	if(exit==2)
	{ 
		return 0;
	}

	cout<<"enter yuor first string: ";
	cin>>name1;
	cout<<"enter your second string: ";
	cin>>name2;
	string1.get_string(name1);
	string2.get_string(name2);
	do
	{
		cout<<"1.string length \n2.concatenate \n3.compare"<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"first string"<<endl;
				string1.display();
				cout<<"second string"<<endl;
				string2.display();
				break;
			case 2:
				result.concatenate(string1,string2);
				break;
			case 3:
				result.compare(string1,string2);
				break;
			defualt:
				cout<<"invalid choice";
				break;
		}
		cout<<"do you want to continue or quit \n1.continue \n2.quit"<<endl;
		cin>>option;
	}while (option==1);
	if(option!=1);
	{
		cout<<"successfully quitted"<<endl;
	}
	return 0;
}



