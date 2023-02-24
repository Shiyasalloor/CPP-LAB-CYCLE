#include<iostream>
using namespace std;

class text
{
    private:
            static int count;
    public:
            text()
            {
                count++;
            }
             void static show_count()
             {
                cout<<"No of objects created : "<<count<<endl;
             }

};

int text::count;

int main()
{
    int choice=0,quit;
    cout<<"1.create object \n2.quit"<<endl;
    cin>>quit;
    if(quit==1)
   {
    do
    {
        text *a=new text;
        a->show_count();
        delete a;
        cout<<"whats next \n1.new object\n2.quit"<<endl;
        cin>>choice;
    } while(choice==1);
   }
   else
   {
       return 0;
   }
    return 0;
    
}

