#include <iostream>
using namespace std;

template <typename t>

t add(t i, t j)
{

    return i+j;
}

int main()
{
   cout<<add<int>(2,4);

}
