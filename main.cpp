#include <iostream>
using namespace std;

int find_lcs(int *a, int *b, int n, int m){

int i, j, k, lcs = 0;

for(i=0; i<n; i++)
{
    for(j=0; j<m; j++)
    {
        if(a[i] == b[j])
        {
            lcs++;
        }
    }
}

return -1;

}


int main(){

char str1[3] = {'a', 'b', 'o'};
char str2[10] = {'z', 'g', 's', 'g', 'a', 'o', 'b', 'o', 's', 'w'};

int len_str1 = sizeof(str1)/sizeof(*str1);
int len_str2 = sizeof(str2)/sizeof(*str2);

find_lcs(str1, str2, len_str1, len_str2);


}
