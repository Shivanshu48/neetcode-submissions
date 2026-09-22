#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return tolower(c);
        });
        int i = 0;
        int j = s.length() - 1;
        int flag = 1;
        while(i < j){
            while(i < j && !isalnum(s[i])) i++;
            while(i < j && !isalnum(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])){
                flag = 0;
                break;
            }
            i++;
            j--;
        }
        if(flag == 0) return false;
        else return true;
    }
};
