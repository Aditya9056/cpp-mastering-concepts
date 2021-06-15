#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ifstream in_file;
    in_file.open("file.txt");

    if(in_file.is_open()){

        string line;

        while(in_file){

            getline(in_file, line, ':');
            
            int numbers;
            in_file >> numbers;

            if(!in_file){
                break;
            }

            in_file>>ws;//remove white spaces

            // line.clear();// given question to remove a line

            cout<<line << " -- "<<numbers<< endl;
        }

        in_file.close();

    } else{
        cout<< "Could Not Write to file"<<endl;
    }


    return 0;
}