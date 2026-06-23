class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        unordered_map<char,int> mp1, mp2;
           for(int i = 0; i < s1.length(); i++){

                char ch = s1[i];

                      mp1[ch]++;
           }

        for(int i=0;i<s1.length();i++){
            mp2[s2[i]]++;
        }

        if(mp1 == mp2){
            return true;}

        int left = 0;

        for(int right = s1.length(); right < s2.length(); right++){

            mp2[s2[right]]++;

            mp2[s2[left]]--;

            if(mp2[s2[left]] == 0)
                mp2.erase(s2[left]);

            left++;

            if(mp1 == mp2)
                return true;
        }

        return false; }
    };
