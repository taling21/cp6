
#include<bits/stdc++.h>
using namespace std;
 

#define RUN 5
 

#define MAX1 100000
#define MAX2 1000000000
 
int main()
{    
    int n,t,k,i,j;
  
     freopen("Test_Cases.in", "w", stdout);
 
   
    srand(time(NULL));
 
    for (int j=1; j<=RUN; j++){
         n = rand()%MAX1;
        t = rand()%MAX1;
         k = rand()%MAX1;
        printf("%d %d %d\n",n,t,k);
        for(i=0;i<n;i++) printf("%d ",rand()%MAX2);
        printf("\n");
        for (i=0;i<t+1;i++) printf("%d ",rand()%n) ;
        printf("\n");
        
    }
 
    
    fclose(stdout);
    return(0);
}
