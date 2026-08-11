class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
            string base = s;
            sort(base.begin(), base.end());
            mp[base].push_back(s);
        }

        vector<vector<string>> arr;
        for(auto &it : mp){
            arr.push_back(it.second);
        }
        return arr;
    }
};
