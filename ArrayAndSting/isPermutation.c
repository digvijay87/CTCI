/******************************************************************************
Problem Statement : Given 2 strings, write a method to decide if one is 
permutaion of the other.

Solutions : 
1#  I would traverse both the strings and keep count of every character in a 
seprate array for both the strings, after the traverse I will compare 2 arrays 
and see if they both are same it would be permutaion of each others.

2# Also we can sort both the array and compare whether sorted array are same. if 
yes then the are permutation of each other.

I implemented solution 1 here.
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int isPermutaion(char *pString1, char *pString2)
{
    int i, iLen1, iLen2,iKey1, iKey2;
    char hasharray1[26] = {0};
    char hasharray2[26] = {0}; // I am considering only lower case characters in the string and no special characters.
    iLen1 = strlen(pString1);
    iLen2 = strlen(pString2);
    if(iLen1 != iLen2)
    return 1;
    else
    {
        for(i=0;i<iLen1;i++)
        {
           iKey1 = pString1[i] - 'a';
           hasharray1[iKey1]++;
        }
        for(i=0;i<iLen2;i++)
        {
           iKey2 = pString2[i] - 'a';
           hasharray2[iKey1]++;
        }
        
        for(i = 0; i<iLen1; i++)
        {
            if(hasharray1[i] != hasharray2[i])
            return 1;
        }
    }
    return 0;
}
int main()
{
    int iRet, n;
    char arr1[150];
    char arr2[150];
    char *pStr1;
    char *pStr2;
    scanf("%s",arr1);
    scanf("%s",arr2);
    pStr1 = arr1;
    pStr2 = arr2;
    
    iRet = isPermutaion(pStr1,pStr2);
    (iRet == 1) ? printf("Strings are not permutaion\n") : printf("String are permutaion of each others\n");
    
    return 0;
}
