/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main (){
    int i,n,arr[100],k;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The first array \n");
     for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    k=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=k;
    printf("New array \n");
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
        return 0;
    
}



   



