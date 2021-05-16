#include <iostream>
using namespace std;

class enemy
{

public:
	
	virtual void attack()
	{
	
	}
	
	
};

class ninja : public enemy
{	
public:
	void attack()
	{
		cout<<"Ninja Attack!! --"<<endl;
	} 
};

class monster : public enemy
{ 	public: 
void attack()
	{
		cout<<"Monster Attack!! --"<<endl;
	} 
};

main()
{
	ninja n;
	monster m;
	
	enemy *e1 = &n;
	enemy *e2 = &m;
	
	e1->attack();
	e2->attack();
		
}
