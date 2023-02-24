#include<iostream>
#include<cstring>
using namespace std;

class bank
{
	private:
		std::string  cust_name;
		int acc_no;
		char acc_type;
		float balance;
	        int static count;
	public:
		void new_account();
		void withdraw();
		void deposite();
		void balance_enquiry();
		void acc_statement();

};
int bank::count=0;
void bank::new_account()
{       count++;
     	acc_no=count;	
	cout<<"Enter your name : ";
	cin>>cust_name;
	cout<<"Enter the type of account you prefer(savings or current) : ";
	cin>>acc_type;
	cout<<"Enter the amount you want to deposite(minimum 500) : ";
	cin>>balance;
	cout<<"Your account number is : "<<acc_no;
	cout<<"\n**Account created successfully**"<<endl;
}

void bank::withdraw()
{
	float amount;
	cout<<"Enter the amount to withdraw : ";
	cin>>amount;
	if((balance-amount)<500)
	{	
		cout<<"transaction failed due to minimum balance";
	}	
	else
	{	
		cout<<"**transaction successful**"<<endl;
	 	balance=balance-amount;
		cout<<"Your current balance : "<<balance<<endl;
	}	
}	 

void bank::deposite()
{
	float amount;
	cout<<"Enter the amount to deposite : ";
	cin>>amount;
	balance=balance+amount;
	cout<<"**Deposited successfully**"<<endl;
}

void bank::balance_enquiry()
{
	cout<<"Your current balance is "<<balance<<endl;
}

void bank::acc_statement()
{
	cout<<"*********************************************************************"<<endl;
	cout<<"Account Holder name : "<<cust_name<<endl;
	cout<<"Account number : "<<acc_no<<endl;
	cout<<"Account Type : "<<acc_type<<endl;
	cout<<"Current Balance : "<<balance;
}	
	
int main()
{
	const int customer_number=20;
	int choice;
	bool close=false;
	bank*customer=new bank[customer_number];
	int leave,exit;
	cout<<"1:start \n2:quit"<<endl;
	cin>>exit;
	if(exit==2)
	{
		return 0;
	}
	for(int i=0;i<customer_number;++i)
	{
		if(close)
		{
			leave=3;
		}
		else
		{
			leave=1;
		}
		do
		{
			cout<<"\n customer "<<i+1<<endl;
			cout<<"Main menu \n 1 for new account \n 2 for withdraw \n 3 for deposite \n 4 for balance enquiry \n 5 for account statement \n 6 to quit"<<endl;
			cin>>choice;
			switch (choice)
			{
				case 1:
					customer[i].new_account();
					break;
				case 2:
					customer[i].withdraw();
					break;
				case 3:
					customer[i].deposite();
					break;
				case 4:
					customer[i].balance_enquiry();
					break;
				case 5:
					customer[i].acc_statement();
					break;
				case 6:
					return 0;
					break;
				defualt:
					cout<<"Error! try again"<<endl;
					break;
			 }
			cout<<"\n Do you want to continue or quit. \n 1 to continue \n 7 to next customer \n 6 to quit "<<endl;
			cin>>leave;
			if(leave=6)
			{
				close=true;
			}
			else if (leave=7)
			{
				i=i+1;
				return 0;
			}
		}while(choice != 6);
	}
	return 0;
}

                
