#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int n = nums.size();

        cout<< quickselect(k, 0,n-1, nums)<<endl;   
   
        return 0;
    }

    int partition(int left, int right, vector<int> values){

    int pivot = values[right];
    int index = left;

    for(int i= left; i<right; i++){

        if(values[i] >= pivot){

            swap(values[i], values[index]);
            index++;
        }
    }

    swap(values[pivot], values[index]);
    return index;
}

int quickselect(int k, int left, int right, vector<int> values){
    
    int found_index= 0;
    
    while(left <= right){

        found_index = partition(left, right, values);
       
        if(found_index == k){

            return values[found_index-1];
        }else if(found_index > k){

            right = found_index-1;
        }else{

            left = found_index+1;
        }
    }
    return -1;
}

};

int main(){
    
}

