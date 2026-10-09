/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h>
int main()
{
    int i=0,j=0,num;
    printf("Enter the num value :");  
    scanf( "%d",&num);
    for( i=0;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");

        }
        for( j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
