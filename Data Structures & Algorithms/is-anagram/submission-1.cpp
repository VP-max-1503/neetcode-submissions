class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> freq;
       unordered_map<char,int> freq1;
       for(char c:s){
        freq[c]++;
       } 
       for(char ch:t){
        freq1[ch]++;
       }
       if(freq==freq1){
        return true;
       }
       return false;
    }
};
