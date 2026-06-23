class Solution {
public:
    string mergeAlternately(string w1, string w2) {
      int i = 0;
      int j = 0;
      string ans = "";
      while ( i< w1.length() || j < w2.length()  )
{
    if (i<w1.length()){
       ans += w1[i];
       i++;
    }
  if (j<w2.length()){
       ans += w2[j];
       j++;
    }
  
} 
return ans;
    }
};