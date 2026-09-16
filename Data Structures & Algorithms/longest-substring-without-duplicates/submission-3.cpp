class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int left = 0;
        int maxWin = 0;

        for(int right = 0; right < s.length(); right++){
            auto it = map.find(s[right]);
            if(it == map.end()){
                map[s[right]] = right;
            } else {
                left = max(left, it->second + 1);
                map[s[right]] = right;
            }
            maxWin = max(maxWin, right-left+1);
        }

        return maxWin;
    }
};
