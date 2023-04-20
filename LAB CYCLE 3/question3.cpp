#include<iostream>
using namespace std;

double zeroDivision(float x,float y)
{
    if(y==0)
    {
        throw "Division by zero is not possible";
    }
    else
    {
        return x/y;
    }

}

int main()
{
    float a,b;
    double c;
    cout<<"enter the nominator for the division : ";
    cin>>a;
    cout<<"enter the denominator for the division : ";
    cin>>b;
    try
    {
        c=zeroDivision(a,b);
        cout<<c;
    }
    catch(const char * message)
    {
        cout<<message;
    }
    return 0;
    
}
