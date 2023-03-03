#include<iostream>
using namespace std;

class complexes
{
    private:
            int real,imag;
    
    public:
            void input(void);
            void display(void);
            friend complexes operator +(complexes a,complexes b);
            friend complexes operator *(complexes a,complexes b);
};

void complexes::input(void)
{
    cout<<"enter the real part of the complex: ";
    cin>>real;
    cout<<"enter the imaginary part of the complex: ";
    cin>>imag;
}

void complexes::display(void)
{
    cout<<real;
    if(imag<0)
    {
        cout<<imag<<"i"<<endl;
    }
    else
    {
        cout<<"+"<<imag<<"i"<<endl;
    }
}

complexes operator +(complexes a,complexes b)
{
    complexes c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}

complexes operator *(complexes a,complexes b)
{
    complexes c;
	c.real=(a.real*b.real)-(a.imag*b.imag);
	c.imag=(a.real*b.imag)+(b.real*a.imag);
	return c;
}

int main()
{
    complexes a,b,c,d;
    cout<<"first complex"<<endl;
    a.input();
    cout<<"\nsecond complex"<<endl;
    b.input();
    cout<<"\nthe entered complexes are : "<<endl;
    a.display();
    b.display();
    cout<<endl;
    int choice1=0;
    do
    {
        cout<<"1 - to add complex numbers"<<endl;
        cout<<"2 - to multiply complex numbers"<<endl;
        cout<<"3 - quit"<<endl;
        cin>>choice1;
        switch(choice1)
        {
            case 1:
                    c=a+b;
                    cout<<"the sum of two complex numbers : ";
                    c.display();
                    break;
            case 2:
                    d=a*b;
                    cout<<"the product of two complex numbers : ";
                    d.display();
                    break;
            case 3:
                    return 0;
            default:
                    cout<<"invalid input"<<endl;
        }
    }while(choice1==3);
    return 0;
}






















