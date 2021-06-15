#include <iostream>
using namespace std;

class mammal{

string type;
int age;

public:

    friend void opre(mammal&);

    void getage()
    {
        cin>>age;
    }

    void gettype()
    {
        cin>>type;
    }

    void show()
    {
        cout<<"The Mammal is "<<type<<" and its age is "<<age<<endl;
    }

};


void opre(mammal& x){

        x.type ="hacked with friend function";
        cout<<x.type<<endl;
    }

int main()
{

    mammal fish;

    fish.gettype();
    fish.getage();
    fish.show();

    opre(fish);
    fish.show();
}

