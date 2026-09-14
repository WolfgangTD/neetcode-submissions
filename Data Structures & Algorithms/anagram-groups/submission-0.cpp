class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> output;
        for(const string& s : strs){
            array<int, 26> count{};
            for (char c : s) count[c - 'a']++;

            string key;
            for (int n : count) {
                key += to_string(n);
                key += '#';
            }
            map[key].push_back(s);
        }

        for(auto& [key, group] : map){
            output.push_back(group);
        }
        return output;
    }
};
