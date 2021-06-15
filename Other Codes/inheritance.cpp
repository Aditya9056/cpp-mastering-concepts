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

class fish:public mammal{

public:

    void tdata()
    {
        age = 15;
        name ="fish";
    }

};

int main()
{
    fish a;

    a.getdata();
    a.showdata();
    a.tdata();
    a.showdata();
}

