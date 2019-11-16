/******************************************************************************
Problem Statement : Implement an algorithm to determine is the string has all 
unique characters, what if ou can not use additional data structure.

Solutions : 
1#  The first solution clicked in my mind immediately was 
        Loop1(for index1 0 to end of the string)
        loop2(for index2 from index1 to end of the string)
        if(arr[idx1] == [idx2])
        return false;
    but this is no an efficient solution because it takes o(n2) time.
2#  We can have a zero initialized hasharray and set the index of the hasharray 
    to 1 when we find a value from the string, check whether the index is set 
    before setting it to 1. if it is already 1 return false.
    this solution will take O(n) time but one extra array of 128 characters.
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int isUnique(char *pString)
{
    int i, iLen, iKey;
    char hasharray[128] = {0};
    iLen = strlen(pString);
    if(iLen > 128 )
    return 1;
    for(i=0;i<iLen;i++)
    {
       iKey = (int)pString[i];
       if(hasharray[iKey] != 1)
       {
           hasharray[iKey] = 1;
       }
       else
       return 1;
    }
    return 0;
}
int main()
{
    int iRet, n;
    char arr[150];
    char *pStr;
    scanf("%s",arr);
    pStr = arr;
    iRet = isUnique(pStr);
    (iRet == 1) ? printf("String is not unique\n") : printf("String is unique\n");
    
    return 0;
}
