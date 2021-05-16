#include <iostream>
using namespace std;


class hello
{

public:

hello(int a) : var(a)

{	}

void printinfo()
{
	
	cout<<var<<endl;
	cout<<this->var<<endl;
	cout<<(*this).var<<endl;
}

private:
	
	int var;

};

int main()

{
	hello obj(50);
	
	obj.printinfo();
}
