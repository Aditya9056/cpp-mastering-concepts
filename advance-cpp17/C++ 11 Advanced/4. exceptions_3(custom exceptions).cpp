#include <iostream>
#include <exception> //already in iostream
using namespace std;

//custom exception
class my_exception {

    public:
        virtual const char* what() const throw(){
            return "Bad Happened!";
        }
};

class test {
    public:
        void goes_wrong(){
            throw my_exception();
        }
};

class logic_error_exception{
    public:
        logic_error_exception(){
                // throw logic_error("Error");
        }
        invalid_arg(int a){
            if(a != 6){
                throw invalid_argument("not valid arguement");
            }
            return a*a;
        }
};


int main(){
    try{
        logic_error_exception obj;
        cout<<obj.invalid_arg(8);

    } catch(logic_error &e){
        cout<< e.what()<< endl;
    } catch(invalid_argument e){
        cout<<"Invalid Arguement: "<<e.what()<<endl;
    }
    return 0; 
}