#include<iostream>
using namespace std;

class alpha
{
	protected:
		int num1;
	public:
		alpha(int i)
		{
			num1=i;
		}
};

class beta 
{
	protected:
		int num2;
	public:
		beta(int j)
		{
			num2=j;
		}
};

class gamma:public alpha,public beta
{
	protected:
		int num3;
	public:
		gamma(int i,int j,int k):alpha(i),beta(j)
	  	{
			num3=k;
		}
		void display(void)
		{
			cout<<"alpha number = "<<num1<<endl;
			cout<<"beta number = "<<num2<<endl;
			cout<<"gamma number = "<<num3<<endl;
		}
};

int main()
{
	int a,b,c;
	cout<<"enter the value to alpha: ";
	cin>>a;
	cout<<"enter the value for beta: ";
	cin>>b;
	cout<<"enter the value for gamma: ";
	cin>>c;
	gamma obj1(a,b,c);
	obj1.display();
	return 0;
}


