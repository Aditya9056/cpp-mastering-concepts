#include <iostream>
using namespace std;

class mammal{

string type;
int age;

public:

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
    friend class animal;
};


class animal
{
    int age;
    string type;

public:
    void gettype()
    {
        cin>>type;
    }

    void getage()
    {
        cin>>age;
    }

    void show(mammal x)
    {
        cout<<"The Animal is "<<type<<" and its age is "<<age<<endl;
        cout<<"The Mammal is "<<this->type<<" and its age is "<<this->age<<endl;
        cout<<"The Mammal is "<<x.type<<" and its age is "<<x.age<<endl;
    }

};



int main()
{

    mammal fish;
    animal lion;

    fish.gettype();
    fish.getage();
    fish.show();


    lion.gettype();
    lion.getage();
    lion.show(fish);

}
