#include <iostream>
using namespace std;


int find_lcs(char *a, char *b, int n, int m){

int i, j, k=0, lcs= 0, ls[m];

for(i=0; i<n; i++)
{
    k =i;

    for(j=0; j<m; j++)
    {
        if(a[k] == b[j])
        {
            lcs++;
            k++;
        }
    }

    ls[i] = lcs;
    lcs=0;

}
int s=0;
    while(s<m)
    {
        cout<<ls[s]<<endl;
        s++;
    }
}


int main(){

char str1[4] = {'z', 'g', 'z', 's'};
char str2[10] = {'z', 'g', 's', 'g', 'a', 'o', 'b', 'o', 's', 'w'};

int len_str1 = sizeof(str1)/sizeof(*str1);
int len_str2 = sizeof(str2)/sizeof(*str2);

find_lcs(str1, str2, len_str1, len_str2);


}
