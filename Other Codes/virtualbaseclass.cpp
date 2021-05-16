#include <iostream>
using namespace std;


class mammal{
public:
int age;
string name;

    void getdata()
    {
        cin>>age;
        cin>>name;
    }
    void showdata()
    {
        cout<<age<<endl;
        cout<<name<<endl;
    }

};
class fish:public virtual mammal{


public:

    void tdata()
    {
        age = 15;
        name ="fish";
    }

};

class duck:public virtual mammal{
public:

    void tdata()
    {
        age = 35;
        name ="duck";
    }

};


class vbase: public duck,public fish{

public:

    void tdata()
    {
        age = 75;
        name ="newgene";
    }


};

int main()
{
    vbase a;

    a.getdata();
    a.showdata();
    a.tdata();
    a.showdata();
}

