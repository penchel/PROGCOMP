#include <iostream>
#include <string>
#include <cctype>

using namespace std;
class Solution {
public:

    
    int firstUniqChar(string s) {
        int vet[26];
        int ordem[26];
        int i = 0;
        for(char c: s){
            vet[c-'a']++;
            ordem[i] = c - 'a';
            i++;
        }
        
        
        
    }
};

