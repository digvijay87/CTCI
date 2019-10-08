/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void myurl(char a[],int n)
{
    int i, j,k;
    int count = 0;
    int newlen = 0;
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            count++; 
        }
    }
    newlen = n+2*count;
    i = newlen -1;
    
    for(j=n-1;j>0;j--)
    {
        if(a[j] != ' ')
        {
            a[i--] =a[j];
        }
        else
        {
            a[i--] = '0';
            a[i--] = '2';
            a[i--] = '%';
        }
        
    }
    for(k=0;k<newlen;k++)
    {
        printf("%c",a[k]);
    }
}
int main()
{
        char arr[] = "url to fill";
        int n = 0;
        
        n = sizeof(arr)/sizeof(arr[0]) - 1;
        
        myurl(arr,n);
        return 0;
}
