class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> mp;
        int left = 0;
        int right =0;
        int maxlen =0;
        for( right =0 ; right<s.length();right++){
            mp[s[right]]++;
            while(mp[s[right]]>1){
               mp[s[left]]--;
               left++;   
            }
            int len = right - left + 1;

            maxlen = max(maxlen, len);
        }

        return maxlen;
    }
             
        
};
