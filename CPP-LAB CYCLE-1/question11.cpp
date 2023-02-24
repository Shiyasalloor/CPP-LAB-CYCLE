#include<iostream>
using namespace std;

class class_2;

class class_1
{
	private:
		int value1;
	
	public:
		void get_value()
		{
			cout<<"enter the value1: ";
			cin>>value1;
		}

		void display()
		{
			cout<<"value1="<<value1<<endl;
		}

		friend void exchange(class_1&,class_2&);
};

class class_2
{
	private:
		int value2;
	
	public:
		void get_value()
		{
			cout<<"enter the value2: ";
		        cin>>value2;
		}
	        void display()
		{
			cout<<"value2="<<value2;
		}

		friend void exchange(class_1&,class_2&);
};

void exchange(class_1&x,class_2&y)
{
	int temp=x.value1;
	x.value1=y.value2;
	y.value2=temp;
}

int main()
{
	class_1 c1;
	class_2 c2;
	c1.get_value();
	c2.get_value();
	cout<<"value before exchange"<<endl;
	c1.display();
	c2.display();
	exchange(c1,c2);
	cout<<"\nafter exchange"<<endl;
	c1.display();
	c2.display();
	return 0;
}







