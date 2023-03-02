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
            ~matrices()
            {
                for(int i=0;i<0;i++)
                {
                    delete p[i];
                }
                delete p;
            }
            
            void get_elements(void);
            void add(matrices &,matrices &);
            void transpose(matrices &);
            void mult(matrices &,matrices &);
            int trace(void);
            void display(void);
};

void matrices::get_elements(void)
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

void matrices::transpose(matrices &x)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            p[i][j]=x.p[j][i];
        }
        cout<<endl;
    }
    display();
}

void matrices::add(matrices &x,matrices &y)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            p[i][j]+=x.p[i][j]+y.p[i][j];
        }
    }
}

void matrices::mult(matrices &x,matrices &y)
{
    for(int i=0;i<x.rows;i++)
    {
        for(int j=0;j<y.cols;j++)
        {
            p[i][j]=0;
            for(int k=0;k<x.cols;k++)
            {
                p[i][j]+=x.p[i][k]*y.p[k][j];
            }
        }
    }
}

int matrices::trace(void)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        sum=sum+p[i][i];
    }
    return sum;
}

void matrices::display(void)
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

int main()
{
    int r1,r2,c1,c2;
    cout<<"enter the number of rows and coloumns of the first matrix: ";
    cin>>r1>>c1;
    matrices obj1(r1,c1);
    cout<<"enter the values of the first matrix: ";
    obj1.get_elements();
    cout<<"enter the number of rows and coloumns of the second matrix: ";
    cin>>r2>>c2;
    matrices obj2(r2,c2);
    cout<<"enter the values of the second matrix: ";
    obj2.get_elements();
    cout<<"transpose of first matrix : ";
    matrices ob1(c1,r1);
    ob1.transpose(obj1);
    cout<<"\ntranspose of the second matrix : ";
    matrices ob2(c2,r2);
    ob2.transpose(obj2);
    int trace1=obj1.trace();
    cout<<"the trace of the first matrix : "<<trace1<<endl;
    int trace2=obj2.trace();
    cout<<"the trace of the second matrix : "<<trace2<<endl;
    if(r1!=r2||c1!=c2)
    {
        cout<<"the matrix addittion is not poosible "<<endl;
    }
    else
    {
        cout<<"\nthe sum of two matrices : "<<endl;
        matrices obj3(r1,c1);
        obj3.add(obj1,obj2);
        obj3.display();
    }
    
    if(c1==r2)
    {
        matrices obj4(r2,c2);
        obj4.mult(obj1,obj2);
        cout<<"the product of two matrices : "<<endl;
        obj4.display();
    }
    else
    {
        cout<<"the multiplication is not possible";
    }
    return 0;
}
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

            
            
            
            
            
            
            
            
            
            
            
            
            
           