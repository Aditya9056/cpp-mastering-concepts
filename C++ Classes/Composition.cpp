#include <iostream>
using namespace std;


class birthday
{
	public:
		
		birthday(int m, int d, int y)
		:month(m), day(d), year(y)
		{
		}
		void printdate()
		{
			cout<<day<<"/"<<month<<"/"<<year<<"/"<<endl;
		}
		
		private:
			int month;
			int day;
			int year;
};


class person
{   public:
	person(string n, birthday b)
	: name (n), bd(b)

	{
		
	}
	
    void printinfo()
    {
    	
    	cout<<name<<endl;
    	bd.printdate();
	}
    private:
    	string name;
    	birthday bd;
};

main()
{
	
	birthday bd(2, 21, 1998);
	person l("SHIVA", bd);
	l.printinfo();
}
