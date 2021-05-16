/**
 * Quickselect is a selection algorithm to find the k-th smallest element in an unordered list. 
 * It is related to the quick sort sorting algorithm.
 * Single Pointer Approach.
 * */

#include <iostream>
using namespace std;

int partion(int val[], int left, int right){

    int pivot = val[right], index=left;

    for(int i =left; i< right; i++){
     
     if(val[i] <= pivot){

         swap(val[i], val[index]);
         index++;

     }
    }
    
    swap(val[index], val[right]);
    return index;
}
  

int quickselect(int k, int left, int right, int val[]){

    int found_index;

    while(left<=right){
        found_index = partion(val, left, right);

        if(found_index == k){
            return val[found_index-1];

        }else if(found_index > k){
            
            right = found_index-1;
        }else{
            
            left = found_index+1;
        }
    }

    return -1;
}

int main(){
    
   int n = 7,k;
   int val[7]= {0, 922, 97, 56, 18, 82, 27};
//    int val[7]= {5, 7, 2, 3, 4, 1, 6};


   // cin<<k;
   k= 4;//3

   cout<< quickselect(k, 0, n-1, val);
   //should be 3
}