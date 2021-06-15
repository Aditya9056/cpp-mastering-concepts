#include<iostream>
#include <stdlib.h>
using namespace std;

main()
{
    int x;
float a,b;

b =4;

cout<<"Sir, Please enter at which level you are:"<<endl;
cout<<"Sir, enter 11 to exit"<<endl;

while(1)

 {  cin >>x;
    switch (x)
{
case 1:
    a= b/1;

    break;

case 2:
    a= b/2;

    break;

case 3:

    a = b/4;

    break;

case 4:
    a = b/8;

    break;

case 5:
    a = b/16;

    break;

case 6:

    a = b/32;

    break;

case 7:

    a = b/64;

    break;

case 8:
    a = b/128;

    break;

case 9:
    a = b/256;

    break;

case 10:

    a = b /512;

    break;

case 11:
    exit(0);

    break;

default:
    cout<<"Sir, There are only 10 levels. You have entered a wrong choice."<<endl;

    break;
}

cout<<"Sir, You will get "<<a<<" rs "<<endl;
 }


cout<<"Thank You Sir"<<endl;

return 0;
}




