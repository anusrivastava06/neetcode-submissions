class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp;

        for(char ch : t) {
            mp[ch]++;
        }

        int count = mp.size();

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.length(); right++) {

            char ch = s[right];

            if(mp.find(ch) != mp.end()) {
                mp[ch]--;

                if(mp[ch] == 0)
                    count--;
            }

            while(count == 0) {

                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];

                if(mp.find(leftChar) != mp.end()) {

                    mp[leftChar]++;

                    if(mp[leftChar] > 0)
                        count++;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
