/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void mysort(char a[],int n)
{
    int i,j;
    char key;
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j] > a[j+1])
        {
            a[j+1] = a[j];
            a[j] = key;
            j = j-1;
        }
     }
     
     for(i=0; i<n; i++)
     {
         printf("%c",a[i]);
     }
     printf("\n");
}
int main()
{
        char arr[] = "string";
        int n = 0;
        
        n = sizeof(arr)/sizeof(arr[0]) - 1;
        
        mysort(arr,n);
        return 0;
}
