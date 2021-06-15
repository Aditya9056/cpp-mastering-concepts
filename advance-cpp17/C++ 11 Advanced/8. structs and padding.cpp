/*
Padding in structures happens to avoid wastage of the cpu cycles.
if one int takes 4 bytes it and 1 cpu cycle can read 4 bytes at a time then this is good.

But if there is one char also and one int then it will take 5 bytes, but cput can read the 
char in one cycle but due to it we have to use another cpu cycle.

int a = 4 bytes,  char b = 1 byte
total = 5 bytes
cpu cycle = read 4 bytes at a time.

In padding we use empty spaces in the char block and give individual space to the int.

1    1 1 1    4      1  1 1 1
char - - - | int | char - - - = 12 bytes

- = empty spaces!

it Happens because processor reads 1 word at a time!.
*/

#include <iostream>
using namespace std;

#pragma pack(push, 1)

struct Person{
    char name[50];//50
    int age;//4
    double weight;//8

};

#pragma pack(pop)


int main(){
    cout<< sizeof(Person)<< endl;

    return 0;
}