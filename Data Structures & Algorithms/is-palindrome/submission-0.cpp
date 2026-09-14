class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (unsigned char c : s) {
            if (!ispunct(c) && c != ' ') {
                str+=tolower(c);
            }
        }
        int left = 0;
        int right = str.size()-1;
        string forwards = "";
        string backwards = "";
        while (left < str.size()-1 && right >= 0){
            forwards+=str[left];
            backwards+=str[right];
            left++;
            right--;
        }
        return forwards == backwards;
    }
};
