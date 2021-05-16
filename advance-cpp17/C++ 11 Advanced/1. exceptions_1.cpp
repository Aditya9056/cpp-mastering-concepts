#include <iostream>
using namespace std;


void might_Go_Wrong(){
    bool error = false;
    bool error2 = true;

    if(error){
        throw "Code is 404";
    }

    if(error2){
        throw string("Something Else went wrong"); 
    }

}
void call_might_go_wrong(){
    might_Go_Wrong();
}

int main(){
    system ("CLS");
    string a;

    try{
      call_might_go_wrong();
    } catch(int e){

        cout<<"Error Code: "<< e << endl;
    } catch(char const *e){
        cout<<"Error Code: "<< e << endl;
    } catch (string &e){
        a = e;
        cout<<"Error Code: "<< e << endl;
    }

    cout<<"Still Running! "<< endl;
    return 0;
}