#include<iostream>
using namespace std;

class matrices
{
    private:
            int rows,cols;
            int **p;
    public:
            matrices(){}
            matrices(int x,int y)
            {
                rows=x;
                cols=y;
                
                if((rows>0)&&(cols>0))
                {
                    p=new int *[rows];
                    for(int i=0;i<rows;i++)
                    {
                        p[i]=new int [cols];
                    }
                }
            }
        
            void input();
            void display();
            friend matrices operator +(const matrices &a,const matrices &b);
            friend matrices operator *(const matrices &a,const matrices &b);
};

void matrices::input()
{
    for(int i=0;i<rows;i++)
    {
        cout<<"enter the elements in the "<<i+1<<" row: ";
        for(int j=0;j<cols;j++)
        {
            cin>>p[i][j];
        }
    }
}

void matrices::display()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

matrices operator +(const matrices &a,const matrices &b)
{
    matrices x(a.rows,a.cols);
    for(int i=0;i<a.rows;i++)
    {
        for(int j=0;j<a.cols;j++)
        {
            x.p[i][j]+=a.p[i][j]+b.p[i][j];
        }
    }
    return x;
}

matrices operator *(const matrices &a,const matrices &b)
{
    matrices y(a.rows,b.cols);
    for(int i=0;i<a.rows;i++)
    {
        for(int j=0;j<b.cols;j++)
        {
            y.p[i][j]=0;
            for(int k=0;k<a.cols;k++)
            {
                y.p[i][j]+=a.p[i][k]*b.p[k][j];
            }
        }
    }
    return y;
}

int main()
{
    int r1,c1,r2,c2;
    cout<<"enter the number of rows and coloumns of the first matrix: ";
    cin>>r1>>c1;
    matrices obj1(r1,c1);
    cout<<"\nenter the values of the first matrix: "<<endl;
    obj1.input();
    cout<<"enter the number of rows and coloumns of the second matrix: ";
    cin>>r2>>c2;
    matrices obj2(r2,c2);
    cout<<"\nenter the values of the second matrix: "<<endl;
    obj2.input();
    cout<<"the entered matrices are : "<<endl;
    obj1.display();
    cout<<endl;
    obj2.display();
    cout<<endl;
    
    if(r1==r2 && c1==c2)
    {
        matrices obj3(r1,c1);
        obj3=obj1+obj2;
        cout<<"the sum of the matrices :"<<endl;
        obj3.display();
    }
    else
    {
        cout<<"the matrix addittion is not possible"<<endl;
    }
    
    if(c1==r2)
    {
        matrices obj4(r2,c2);
        obj4=obj1*obj2;
        cout<<"the product of the matrices :"<<endl;
        obj4.display();
    }
    else
    {
        cout<<"the multiplication is not possible"<<endl;
    }
    return 0;
}

    
    
    
    
    
    
    
    


