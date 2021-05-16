#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

// int find_2nd_largerst(int n,int values[]){
// // Record start time
// high_resolution_clock::time_point t1 = high_resolution_clock::now();

// int lar=0, sec_lar=0,i,j;

// for(i=1; i<n; i++){

//     if(values[i]>values[lar]){
//         sec_lar = lar;
//         lar = i;
//         }
//     else if(values[i]<values[lar] && values[sec_lar] < values[i]){
//         sec_lar = i;
//     }
// }

//     cout<<"Largest value is "<<values[lar]<<endl;
//     cout<<"SecondLargest value is "<<values[sec_lar]<<endl;

    
//   // Record end time
//   high_resolution_clock::time_point t2 = high_resolution_clock::now();
//   duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//   cout << "It took " << time_span.count() << " seconds."<<endl;

//   return sec_lar;
// }

// void find_kth_largerst(int k, int n, int values[]){
    
// // Record start time
// high_resolution_clock::time_point t1 = high_resolution_clock::now();

//     sort(values, values+n);

//     cout<< values[k] <<endl;
    
//   // Record end time
//   high_resolution_clock::time_point t2 = high_resolution_clock::now();
//   duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
//   cout << "It took " << time_span.count() << " seconds."<<endl;
// }




int partition(int left, int right, int values[]){

    int pivot = values[right];
    int index = left;

    for(int i= left; i<right; i++){

        if(values[i] >= pivot){

            swap(values[i], values[index]);
            index++;
        }
    }

    swap(values[pivot], values[index]);
    // for(int i=0;i< right; i++){
    //     cout<<" "<<values[i];
    // }
    // cout << endl;
    return index;
}

int quickselect(int k, int left, int right, int values[]){
    
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

int main(){

    // Record start time
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    int n = 10,k;
    int val[10]= {0, 922, 97, 56, 18, 82, 27, 80, 34, 39};
    // int val[n]= {5, 7, 2, 3, 4, 1, 6};

    k=9;//97

    cout<< quickselect(k, 0, n-1, val)<<endl;

    // Record end time
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    cout << "It took " << time_span.count() << " seconds."<<endl;
}