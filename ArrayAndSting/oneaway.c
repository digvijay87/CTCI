/******************************************************************************
Problem Statement : There are three types of edits can be performed on strings
insert a character, remove a character, replace a character, given two strings.
write a function to check if they are one or zero edit away.

pale , ple -> TRUE
pales, pale -> TRUE
pale, bale -> TRUE
pale, bae -> FALSE

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int oneaway(char *pStr1,char *pStr2)
{
    int i,j,len1,len2,count,longrerstr;
    int ret = 0;
    i = j = count = 0;
    len1 = strlen(pStr1);
    len2 = strlen(pStr2);
    char *s1;
    char *s2;

    if(abs(len1 - len2) > 1)
    return  1;

    s1 = (len1 < len2)? pStr1 : pStr2;

    s2 = (len1 < len2)? pStr2 : pStr1;

    while((i<len1) && (j<len2))
    {
        if(pStr1[i] != pStr2[j])
        {
            if(count)
            return 1;

            count++;

            if(len1 == len2)
            {
                i++;
                j++;
            }
            else if(len1 > len2)
            {
                i++;
            }
            else if(len2 > len1)
            {
                j++;
            }
        }
        else
        {
            i++;
            j++;
        }

    }
    return 0;
}

int main()
{
    int iRet;
    char arr1[100];
    char arr2[100];
    char *str1, *str2;
    printf("Enter the strings\n");
    scanf("%s",arr1);
    scanf("%s",arr2);
    str1 = arr1;
    str2 = arr2;

    iRet = oneaway(str1,str2);

    (iRet == 1) ? printf("Not one away\n") : printf("One away \n");
    return 0;
}
