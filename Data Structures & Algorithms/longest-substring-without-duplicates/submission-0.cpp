class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxsofar = 0;
        unordered_set<char> mp;
        for(int right = 0; right < s.length(); right++){
            while(mp.find(s[right]) != mp.end()){
                mp.erase(s[left]);
                left++;
            }
            
            mp.insert(s[right]);
            maxsofar = max(maxsofar, right - left + 1);
            
        }
        return maxsofar;
    }
};
