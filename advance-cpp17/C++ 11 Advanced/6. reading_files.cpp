#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    // system("cls *");

    ifstream in_file;
    in_file.open("file.txt");

    if(in_file.is_open()){

        string line;

        while(in_file){

            getline(in_file, line);
            cout<< line << endl;
        }


        in_file.close();

    } else{
        cout<< "Could Not Write to file"<<endl;
    }


    return 0;
}