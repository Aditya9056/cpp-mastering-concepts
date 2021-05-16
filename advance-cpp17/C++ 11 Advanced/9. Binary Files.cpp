#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person{
    char name[50];//50
    int age;//4
    double weight;//8

};

#pragma pack(pop)


int main(){

    Person raju = {"Raju", 26, 86.7};

    string file = "binary_file.bin";

    //////  Write Binary File //////

    ofstream out_file;

    out_file.open(file, ios::binary);

    if(out_file.is_open()){


        out_file.write(reinterpret_cast<char *>(&raju), sizeof(Person));//new way of casting reinterpret_cas<cast_type *(for pointer)>(& name)
        
        out_file.close();

    }else
    {
        cout<<"Can't Open: "+file;
    }
    
    //////  Read Binary File //////
    // Its usually done in seprate files.

    Person raju_read = {};

    ifstream in_file;

    in_file.open(file, ios::binary);

    if(in_file.is_open()){

        in_file.read(reinterpret_cast<char *>(&raju_read), sizeof(Person));//new way of casting reinterpret_cas<cast_type *(for pointer)>(& name)

        in_file.close();
    }else
    {
        cout<<"Can't Open: "+file;
    }
        cout<< raju_read.name<<", "<< raju_read.age <<" and " << raju_read.weight << endl; 
    
    return 0;
}