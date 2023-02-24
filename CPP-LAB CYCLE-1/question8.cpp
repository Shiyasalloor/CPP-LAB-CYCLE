#include<iostream>
using namespace std;

class Complex
{
	private:
		float real,imag;
	public:
		Complex()
		{
			real=0;
			imag=0;
		}

		Complex(float r)
		{
			real=r;
			imag=r;
		}

		Complex(float r,float i)
		{
			real=r;
			imag=i;
		}

	        Complex sum(Complex,Complex);
		void display(Complex num);
};

Complex Complex::sum(Complex A,Complex B)
{
	Complex result;
	result.real=A.real+B.real;
	result.imag=A.imag+B.imag;
	return result;
}

void Complex::display(Complex num)
{
	cout<<"complex= "<<num.real<<" + "<<num.imag<<"i"<<endl;
}

int main()
{
	float num1,num2;
	cout<<"enter the different real and imaginary parts of complex number:";
	cin>>num1>>num2;
	Complex A(num1,num2);
	cout<<"A:"<<endl;
	A.display(A);

	float num3;
	cout<<"enter the same real and imaginary part:";
	cin>>num3;
	Complex B(num3);
	cout<<"B: "<<endl;
	B.display(B);

	cout<<"**After addition**"<<endl;
	Complex C;
	C=C.sum(A,B);
	C.display(C);

	return 0;
}

		
					
