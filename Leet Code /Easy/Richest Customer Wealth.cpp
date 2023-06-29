
/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // Initialize a variable to keep track of the maximum wealth
       int maxWealth = 0; 
        // Iterate through each customer's accounts
        for (vector<int>& customerAccounts : accounts) { 
      // Initialize a variable to keep track of the wealth for the current customer
           int curWealth = 0;

 // Iterate through each bank account of the current customer
           for ( int account : customerAccounts) {
   // Add the amount in the current bank account to the current customer's wealth
       curWealth += account;
           }
           if ( curWealth > maxWealth)
           {
  // Update the maximum wealth if the current customer's wealth is greater
               maxWealth = curWealth;
           }
        }

    return maxWealth;
        
        // Return the maximum wealth
    }
};