#include <bits/stdc++.h>
using namespace std;

#define M 6

main()
{
	
	int i,j,temp,arr[M];
	
	for(i=0;i<M;i++)
	{
		
		scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<M;i++)
	{
		
		printf("%d.-- %d \n",i,arr[i]);
		
	}
	j = M;
	 
	for(i=0;i<j;i++)
	{	
			temp = arr[i];
				
			arr[i]= arr[j-1];
			
			arr[j-1] = temp;
		j--;
	}
	
	printf("\n\n\n\n");
	
	for(i=0;i<M;i++)
	{
		
		printf("%d.-- %d \n",i,arr[i]);
		
	}
	
}
