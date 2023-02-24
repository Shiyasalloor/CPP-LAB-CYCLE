#include<iostream>
using namespace std;

class x
{
	private:
		int **s;
		int d1,d2;
        
	public:
		x(int x,int y)
		{
			d1=x;
			d2=y;
			s=new int *[d1];
			for (int i=0;i<d1;++i)
			 {
				 s[i]=new int [d2];
			 }
		}

		void get_data();
		void put_data();
		~x(){}
};

void x::get_data()
{
	cout<<"enter values by row by row:";
	for(int i=0;i<d1;++i)
	{
		for(int j=0;j<d2;++j)
		{
			cin>>s[i][j];
		}
	}
}

void x::put_data()
{
	cout<<"entered matrix="<<endl;
	for(int i=0;i<d1;++i)
	{
		for(int j=0;j<d2;++j)
		{
			cout<<s[i][j];
		}
		cout<<endl;
	}
		
}	

int main()
{
	int row,col;
	cout<<"Enter the no of rows: ";
	cin>>row;
	cout<<"Enter the no of colomns: ";
	cin>>col;

	x object(row,col);
	object.get_data();
	object.put_data();

	return 0;
}
