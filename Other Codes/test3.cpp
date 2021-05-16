#include <iostream>
#include <cstdio>
using namespace std;


char * cp(char *i)
{
	char *p = i;	
	return p;	
}

int main()
{
	int i;
	
	char a[6] = {'a','d','i','t','y','a'};
	char b1[6];
	char *a1 = a;
	
	for(i=0; i<6; i++)
	{
		b1[i] = *a1++;
	}
	
		
	puts(b1);
	
}
