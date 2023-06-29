
/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.*/

class Solution {
public:
    bool isPalindrome(int x) {
       long reverseNum = 0; // use long to prevent overflow
        int firstValue = x;
    if (firstValue <0 ){
        return false;
    }
       while( x!= 0 ) {
           int digit = x% 10;
           if (reverseNum > INT_MAX/10 || (reverseNum == INT_MAX / 10 && digit > 7)) {
               return false; // it will overflow if we proceed
           }
           reverseNum = reverseNum * 10 + digit;
           x/=10;
       } 
return firstValue == reverseNum;
       }
};

