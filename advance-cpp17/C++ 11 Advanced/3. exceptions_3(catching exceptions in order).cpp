#include <iostream>
#include <exception> //already in iostream
using namespace std;

void goes_wrong(){
    bool error = true;
    bool error2 = false;

    if(error){
        throw bad_alloc();
    }

    if(error2){
        throw exception();
    }
}

int main(){
    system("cls *");

    try{
        goes_wrong();

    } catch(exception &e){//it accepted bad alloc because it is super class of bad alloc (polymorphism).
        cout<<"Exception is: "<< e.what()<< endl;

    } catch(bad_alloc &e){ // it never executed.
        cout<<"Bad alloc: "<<e.what()<<endl;
    }

    // Moral lesson is use sub-classes before parent classes.

      try{
        goes_wrong();
    } catch(bad_alloc &e){ // it never executed.
        cout<<"Bad alloc: "<<e.what()<<endl;
    } catch(exception &e){//it accepted bad alloc because it is super class of bad alloc (polymorphism).
        cout<<"Exception is: "<< e.what()<< endl;

    } 

    return 0; 
}