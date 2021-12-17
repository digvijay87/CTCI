/*
1. 9:: String Rotation: Assume you have a method i5Substring which checks ifone word is a substring
of another. Given two strings, 51 and 52, write code to check if 52 is a rotation of 51 using only one
call to isSubstring (e.g., waterbottle is a rotation of erbottlewat  ).
Approach :: 
I can conctinate s1 and s1 so that s1 will be "waterbottlewaterbottle"
I can check if "erbottlewat" a substring of "waterbottlewaterbottle"
*/

#include <iostream>

using namespace std;

class solution {
  public:  
    bool isRotatio(string s1, string s2)
    {
        int l1 = s1.length();
        int l2 = s2.length();
  
        if(l1 == l2 && l1 < 0)
        {
            string str = s1 + s1;
            return isSubString(str,s2);
        }
        return false;
    }
};
