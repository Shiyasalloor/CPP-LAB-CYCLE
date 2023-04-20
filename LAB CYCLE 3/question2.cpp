#include<iostream>
using namespace std;

template<class T>
class calculator
{
    private:
            T num1,num2;
    public:
            calculator(T n1,T n2)
            {
                num1=n1;
                num2=n2;
            }

            T add()
            {
                return num1+num2;
            }

            T substraction()
            {
                return num1-num2;
            }

            T multiplication()
            {
                return num1*num2;
            }

            T division()
            {
                return num1/num2;
            }
            void display_result()
            {
                cout<<"The numbers are,\nnumber1="<<num1<<"\nnumber2="<<num2<<endl;
                cout<<num1<<"+"<<num2<<"="<<add()<<endl;
                cout<<num1<<"-"<<num2<<"="<<substraction()<<endl;
                cout<<num1<<"*"<<num2<<"="<<multiplication()<<endl;
                cout<<num1<<"/"<<num2<<"="<<division()<<endl;
            }
};

int main()
{
    int n,m;
    cout<<"enter two integers for the calculation: ";
    cin>>n>>m;
    calculator<int>icalc(n,m);
    icalc.display_result();

    float a,b;
    cout<<"enter two floating numbers for the calculation: ";
    cin>>a>>b;
    calculator<float>jcalc(a,b);
    jcalc.display_result();
    return 0;
}

