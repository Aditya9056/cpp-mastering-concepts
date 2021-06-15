#include <iostream>
using namespace std;


class mother
{

public:

mother()
{
	cout<<"Mother Ctor"<<endl;
};

~mother()
{
	cout<<"Hels"<<endl;
}
private:
	
	int var = 0;

protected:
	
	int somevar;

};

class daughter : public mother
{
	
public:

daughter()

{
	cout<<"Daughter Ctor"<<endl;
}

	
};


main()
{
	
	daughter d;

}
