
/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        
        // count frequency of each character in magazine
        for (char c : magazine) {
            freq[c]++;
        }
        
        // check if each character of ransomNote can be constructed from magazine
        for (char c : ransomNote) {
            if (freq[c] == 0) { // if character is not in magazine or not enough of it, return false
                return false;
            } else { // decrement the count of character in magazine
                freq[c]--;
            }
        }
        
        // if we have not returned false by now, that means ransomNote can be constructed from magazine
        return true;
    }
};

