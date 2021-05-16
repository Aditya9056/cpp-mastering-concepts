#include <iostream>
using namespace std;


class hello
{

public:

hello()
{
	
	regvar =0;
}

private:
	int regvar;

	
friend void some(hello &obj);
	
};


void some(hello &obj)
{
	
	obj.regvar = 43;
	cout<<obj.regvar;
}

int main()

{
	hello obj;
	
	some(obj);
}
