#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<string> strings;

    // strings[3] = "dog";
    // strings[6] = "hello"//error if the predefined size is lower than 6.

    strings.push_back("Aditya");
    strings.push_back("Jain");

    // cout<< strings.size() << endl;// Vectors can automatically increase the size of itself.

    //not a recommended way for vectors
    // for(int i=0; i<strings.size(); i++){
    //     cout<< strings[i] <<endl; 
    // }

    //recommended way for vectors
    vector <string>::iterator it = strings.begin();


    while(it != strings.end()){
    cout<< *it<< endl;
    it++;
    }    

    vector<int> i ={1, 2, 3, 5, 6};

    vector<int>::iterator itr = i.begin();

    while(itr != i.end()){
        cout<< *itr << endl;
        itr++;
    }


    return 0;
}