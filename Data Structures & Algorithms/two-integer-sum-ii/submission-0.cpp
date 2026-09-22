class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < numbers.size(); i++){
            mp[numbers[i]] = i+1;
        }
        vector<int> vec;
        for(int i = 0; i < numbers.size(); i++){
            int ele = numbers[i];
            int in1 = i+1;
            int f = target - ele;
            int in2 = -1;
            if(mp.find(f) != mp.end()){
                in2 = mp[f];
                if(in1 != in2){
                    vec.push_back(in1);
                    vec.push_back(in2);
                }
                break;
            }
        }
        return vec;
    }
};
