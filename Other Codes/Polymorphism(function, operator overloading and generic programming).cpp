#include <iostream>
using namespace std;

class a2;

class a1{

public:

int no;

void getdata()
{
    cin>>no;
}

friend a1 operator+(a1& x, a2& y);
};

class a2{

public:

int no;

void getdata()
{
    cin>>no;
}

friend a1 operator+(a1& x, a2& y);

};


a1 operator+(a1& x, a2& y)
{

a1 temp;

temp.no = x.no+y.no;

return temp;

}


int main()
{
   a1 i;
   a2 j;

    i.getdata();
    j.getdata();

    i = i+j;

    cout<<i.no<<endl;

}
