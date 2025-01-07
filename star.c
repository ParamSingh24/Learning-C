//Program to print triangular star pattern downwards
/*#include<stdio.h>

int main(){
    for(int i=5;i>=1;i--){
        for(int j=0;j<=5-i;j++)
            printf(" ");
        for(int k = 1;k<2*i;k++)
           printf("*");
           printf("\n");
    }
    


    return 0;
}*/
// program for upward triangle
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        printf(" ");
        for(k=1;k<2*i;k++)
        printf("*");
        printf("\n");
    }
    return 0;
}