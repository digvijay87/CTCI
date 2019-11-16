/******************************************************************************
Problem Statement : 

Solutions : 
1# 
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int isPalindrome(char *pString, int len)
{
    int i,key,num,mask,count;
    
    mask = num = count = 0;
    
    for(i=0;i<len;i++)
    {
       key = pString[i] - 'a';
       mask = 1<<key;
       if(num & mask)
       {
           num = num ^ mask;
           count--;
       }
       else
       {
           num = num ^ mask;
           count++;
       }
    }
    if(count > 1)
    return 1;
    else
    return 0;
}
int main()
{
    int iRet, n;
    char arr[150];
    char *pStr;
    scanf("%s",arr);
    pStr = arr;
    n = strlen(pStr);
    iRet = isPalindrome(pStr,n);
    (iRet == 1) ? printf("Strings are not palindrome\n") : printf("String is permutaion of Palindrome\n");
    
    return 0;
}
