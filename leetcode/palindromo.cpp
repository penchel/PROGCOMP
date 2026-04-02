#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    string clean(string &s){
        string sout;
        
        for (size_t i = 0; i < s.length(); i++)
        {
            if(isalnum(static_cast<unsigned char> (s[i]))){
                sout+=tolower(s[i]);
            }
        }

        return sout;
        
    }
    bool isPalindrome(string s) {
        string sin = clean(s);
        int i = 0, j = sin.length() - 1;
        while (i<j)
        {
            if(sin[i] != sin[j]){
                return false;
            }
            i++; j--;
        }
        return true;
    }
};

