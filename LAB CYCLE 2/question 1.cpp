#include<iostream>
#include<cmath>
using namespace std;

class vectors
{
    private:
            int a,b,c;
            long double magn;
    public:
            void get_vector();
            void display();
            int magnitude();
            void operator == (const vectors &);
            void operator != (const vectors &);
            void operator < (const vectors &);
            void operator > (const vectors &);
            void operator <= (const vectors &);
            void operator >=(const vectors &);
};

void vectors::get_vector()
{
    cout<<"enter the i component: ";
    cin>>a;
    cout<<"enter the j component: ";
    cin>>b;
    cout<<"enter the k component: ";
    cin>>c;
}

void vectors::display()
{
    if(b<0 and c<0)
	{
        cout<<a<<"i "<<b<<"j "<<c<<"k"<<endl;
	}
	else if(b<0 and c>0)
	{
		cout<<a<<"i "<<b<<"j + "<<c<<"k"<<endl;
	}
	else if(b>0 and c<0)
	{
		cout<<a<<"i + "<<b<<"j "<<c<<"k"<<endl;
	}
	else
	{
	    cout<<a<<"i + "<<b<<"j + "<<c<<"k"<<endl;
	}
}
int vectors::magnitude()
{
    cout<<"the magnitude of the vector = ";
    magn=sqrt((a*a)+(b*b)+(c*c));
    cout<<magn<<endl;
    return magn;
}
void vectors::operator == (const vectors &a)
{
    if(magn==a.magn)
    {
        cout<<"\nthey have equal magnitude"<<endl;
    }
    else
    {
        cout<<"they have different magnitude"<<endl;
    }
}

void vectors::operator != (const vectors &a)
{
    if(magn!=a.magn)
    {
        cout<<"they have different magnitude"<<endl;
    }
    else
    {
        cout<<"they have equal magnitude"<<endl;
    }
}

void vectors::operator < (const vectors &a)
{
    if(magn<a.magn)
    {
        cout<<"2nd vector greater than 1st"<<endl;
    }
    else
    {
        cout<<"the 1st vector greater than 2nd"<<endl;
    }
}

void vectors::operator > (const vectors &a)
{
    if(magn>a.magn)
    {
        cout<<"1st vector greater than 2nd"<<endl;
    }
    else
    {
        cout<<"2nd vector greater than 1st"<<endl;
    }
}
void vectors::operator <= (const vectors &a)
{
	if (magn<=a.magn)
	{
		cout<<"the vector 1 is less than or equal to vector 2"<<endl;
	}
	else
	{
		cout<<"the vector 1 is greater than the vector 2"<<endl;
	}
}
    
void vectors::operator >= (const vectors &a)
{
	if (magn<= a.magn)
	{
		cout<<"the vector 2 is less than or equal to vector 1"<<endl;
	}
	else
	{
		cout<<"the vector 2 is greater than the vector 1"<<endl;
	}
}

int main()
{
    vectors m,n;
    m.get_vector();
    m.magnitude();
    cout<<endl;
    n.get_vector();
    n.magnitude();
    cout<<endl;
    cout<<"the entered vectors are : ";
    m.display();
    cout<<endl;
    n.display();
    
    int choice;
	std::cout<<"************************************"<<endl;
	do{
	cout<<"1 - to check m == n"<<endl;
	cout<<"2 - to check m < n"<<endl;
	cout<<"3 - to check m >= n"<<endl;
	cout<<"4 - to check m <= n"<<endl;
	cout<<"5 - to check m != n"<<endl;
	cout<<"6 - to check m > n"<<endl;
	cout<<"7 - to quit "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			m==n;
			break;
		case 2:
			m<n;
			break;
		case 3:
			m>=n;
			break;
		case 4:
			m<=n;
			break;
		case 5:
			m!=n;
			break;
		case 6:
			m>n;
			break;
		case 7:
		    return 0;
		default:
			std::cout<<"pls enter a valid value "<<endl;
			break;
	}
	}while(choice != 7);		

	return 0;
}



    
    
    
    
    
    
    
    
    
    
    
    
    


























