#include <iostream>
using namespace std;

class namea{

private:

    int i,j;

public:

    int getdata()
    {
       cin>>i>>j;
       //cout<<i<<endl<<j<<endl;

    }

    friend void show(namea);

   /* namea(){

        i = 1002;
        j = 321;
        //cout<<i<<endl<<j<<endl;
        }

    //copy constructor
    namea (const namea &x)
    {
        i = x.i;
        j = x.j;
        cout<<"BHAGO"<<endl;
        cout<<i<<j<<endl;
    }
    */

};

void show(namea a)
{
    cout<<a.i<<endl<<a.j<<endl;
}



int main()
{

namea a;

a.getdata();


//namea b = a;


//cout<<b.i<<b.j<<endl;



}


