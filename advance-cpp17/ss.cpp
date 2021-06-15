#include<iostream>
using namespace std;

largest_k_multiple_set(int , int , int );

int main(){

int n, k;

cin>> n;// 1 to 100000
cin>> k;//1 to 1000

int ele[n];

for(int i=0; i<n; i++){
  cin>>ele[i];
}



largest_k_multiple_set(int n, int k, int ele){

//diff check
for(int i=0; i<n; i++){
    if()
}


//multiple of k


}


n = 5

0 2 3 4 5
_________

k = 2/  2 ,4 , 6 ,8.....



A set of points over a straight line is defined as correlative to some K if 
the absolute difference between any two points is a multiple of K.
Your task is to find the largest set which is correlative to K. You can assume that only one largest set exists. N and K will be in the first line of the input.
N lines will follow, each one with a single integer, representing the location of one of the points. Print the size of the largest set of points which is correlative to K, 
in the first line of the input. Remaining lines will contain the points of the set, one per line, in increasing order.


Case 1:

For the input provided as follows:

n =5, k= 2

1 2 3 4 5
_________

k = 2;

2 - 1 = 1
3 - 1 = 2 == k



Output of the program will be:

3
1
3
5

Case 2:

For the input provided as follows:

6 4
10
15
12
16
20
32

Output of the program will be:

4
12
16
20
32