#include<iostream>
using namespace std;

template <typename t>// or --- template <class t>

t sum(t a, t b)
{
	
	return a+b;
}


main()
{
	double x= 23.2,y = 20.1;
	cout<<sum(x,y);
}
