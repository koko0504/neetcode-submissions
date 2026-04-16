class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char, int>freqs;
        for(char c1:s){
            freqs[c1]++;
        }
        unordered_map<char, int>freqt;
        for(char c2:t){
            freqt[c2]++;
        }
        if(freqs==freqt){
            return true;
        }return false;
    }
};
