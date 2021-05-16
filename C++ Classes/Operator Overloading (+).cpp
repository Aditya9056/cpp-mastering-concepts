#include <iostream>
using namespace std;


class hello
{

public:

int var;
hello()
{
	
	
}

hello(int a) : var(a)
{
}

hello operator+(hello &obj)
{
	hello res;
	res.var = this->var+obj.var;
	return res;
}

};

main()
{
	
	hello obj1(12), obj2(55);
	hello res = obj1+obj2;
	
	cout<<res.var<<endl;
}
