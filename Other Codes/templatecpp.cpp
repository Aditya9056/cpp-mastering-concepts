#include <iostream>
using namespace std;
//function Template
template <typename T> T show(T i , T j)
{
    cout<<i*j<<endl;
    return i*j;
}



//Class Template

template <typename T>
class n{

public:
    T kg;
    T gr;

    T show(T i, T j){

        return i*j;
        }
};




int main()
{
    n <double>bh;
    double a;
    a =  bh.show(12.2, 2.220);
    cout<<a;
}

