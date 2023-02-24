#include<iostream>
using namespace std;

class Complex
{
	private:
		float real,imag;
	public:
		void input()
		{
			cout<<"enter the real and imaginary part of complex number: ";
			cin>>real>>imag;
		}
		void display()
		{
	            cout<<"the complex number is : "<<real;
		    if(imag<0)
		    {
			    cout<<imag<<"j"<<endl;
		    }
		    else
		    {
			    cout<<" + "<<imag<<" j "<<endl;
		    }
		}

		friend Complex sum(Complex,Complex);
};

Complex sum (Complex A,Complex B)
{
	Complex result;
	result.real=A.real+B.real;
	result.imag=A.imag+B.imag;
	return result;
}

int main()
{
	Complex C1,C2,C3;
	C1.input();
	C1.display();
	C2.input();
	C2.display();
	C3=sum(C1,C2);
	cout<<"the sum of two complex numbers= ";
	C3.display();
	return 0;
}




