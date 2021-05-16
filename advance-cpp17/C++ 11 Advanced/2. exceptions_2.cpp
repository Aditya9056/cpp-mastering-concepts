#include <iostream>
using namespace std;

class can_go_wrong{
    public:
             can_go_wrong(){
                bool error = false;
                char *mem = new char[9999999999999];
                delete[] mem; 
            }
};

main(){
    system("cls");

    try
    {
        can_go_wrong wrong;
    }
    catch(const bad_alloc& e)
    {
        cout<<"Caught Exception: "<< e.what() << endl;
    }

    cout<<"Still Running! "<< endl;
    return 0;
    
}