#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    system("cls *");

    ofstream out_file;

    out_file.open("file.txt");

    if(out_file.is_open()){
        for(int i=1; i<=10; i++){
            out_file<<i<<". ";
            out_file<<"This is line: "<<i << endl;
        }
        out_file.close();

    } else{
        cout<< "Could Not Write to file"<<endl;
    }


    return 0;
}