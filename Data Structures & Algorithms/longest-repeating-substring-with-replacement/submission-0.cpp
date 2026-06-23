class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char,int> mp;
        int left =0;
        int right =0;
        int maxlen = 0;
        int maxfreq =0;
        
        for (right =0; right<s.length();right++){
            mp[s[right]]++;
            maxfreq = max(maxfreq,mp[s[right]]);
            while ( right - left +1 - maxfreq > k){
                mp[s[left]]--;
                left++; }
                maxlen = max(maxlen, right-left+1); }

                return maxlen;
            
        
        
    }
};
