#include <iostream>
using namespace std;

class enemy
{

public:
	
	void setattackpower(int a)
	{
		attackpower = a;
	}
	
	protected:
		
		int attackpower;
	
	
};

class ninja : public enemy
{	
public:
	void attack()
	{
		cout<<"Ninja Attack!! --"<<attackpower<<endl;
	} 
};

class monster : public enemy
{ 	public: 
void attack()
	{
		cout<<"Monster Attack!! --"<<attackpower<<endl;
	} 
};

main()
{
	ninja n;
	monster m;
	
	enemy *e1 = &n;
	enemy *e2 = &m;
	
	e1->setattackpower(80);
	e2->setattackpower(90);
	
	n.attack();
	m.attack();
	n.setattackpower(99);
	n.attack();
	
}
