#include<iostream>
using namespace std;

class bike
{
    protected:
                int bike_no;
    public:
                bike(int n)
                {
                    bike_no=n;   
                }
                
                void putBikeN0()
                {
                    cout<<"Bike Number= "<<bike_no<<endl;
                }
};

class car 
{
    protected:
            int car_no;
    public:
            car(int m)
            {
                car_no=m;
            }
            
            void putCarNo()
            {
                cout<<"car number = "<<car_no<<endl;
            }
};

class district:public bike,public car 
{
    protected:
            int disNo;
    public:
            district(int n,int m,int i):bike(n),car(m)
            {
                disNo=i;
            }
            
            void details()
            {
                cout<<"bike district Number = "<<disNo<<"    bike number = "<<bike_no<<endl;
                cout<<"car district Number = "<<disNo<<"    car number = "<<car_no<<endl;
            }
};

class registration:public district
{
    public:
        registration(int m,int n,int i):district(m,n,i){}
        void Registration()
        {
            cout<<"Registration Number of the bike : KL "<<disNo<<" H "<<bike_no<<endl;
            cout<<"Registration Number of the car : KL "<<disNo<<" H "<<car_no<<endl;
        }
};

int main()
{
    int a,b,c;
    cout<<"enter the number of the bike : ";
    cin>>a;
    cout<<"enter the car number : ";
    cin>>b;
    cout<<"enter the district number of the car and bike : ";
    cin>>c;
    registration cus1(a,b,c);
    cus1.putBikeN0();
    cus1.putCarNo();
    cout<<"Details of the vehicles:"<<endl;
    cus1.details();
    cout<<endl;
    cout<<"**Registration number of the vehicles**"<<endl;
    cus1.Registration();
    return 0;
    
}












