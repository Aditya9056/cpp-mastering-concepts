#include <iostream>
using namespace std;

int main(){

    int a[6] = {1, 0, 0, 2, 5, 0};
    int i,temp,n = 6;
    
    for(i=5; i>=0; i--){
        if(a[i] == 0)
        {
            if(i == (n-1))
            {
                n--;
                continue;
            }else
            {   
                temp = a[i];
                a[i] = a[n-1];
                a[n-1] = temp;
                n--;
            }
        }
    }
    
    
    for(i=0; i<6; i++)
    {
        cout<< a[i]<< endl;
    }
}