# C++ Program To Find Simple Interest
### What is 'Simple Interest'? 
Simple interest is a quick method of calculating the interest charge on a loan. Simple interest is determined by multiplying the daily interest rate by the principal by the number of days that elapse between payments. 
Simple Interest formula:




Simple interest formula is given by: 
Simple Interest = (P x T x R)/100 
Where, 
P is the principal amount 
T is the time and 
R is the rate





Examples :

Example 1:
Input: P = 10000
       R = 5
       T = 5
Output: 2500
We need to find simple interest on 
Rs. 10,000 at the rate of 5% for 5 
units of time.

Example 2:
Input: P = 3000
       R = 7
       T = 1
Output: 210

The formula to calculate the simple interest is:

simple_interest = (P * T * R) / 100 
where P is the principal amount, T is time & R is the rate of interest. 

#### Below is the implementation of the above example: 



// C++ program to find simple interest 
// for given principal amount, time 
// and rate of interest.
#include<iostream>
using namespace std;
​
// Driver code
int main()
{
    // We can change values here for
    // different inputs
    float P = 1, R = 1, T = 1;
​
    // Calculate simple interest 
    float SI = (P * T * R) / 100;
​
    // Print the resultant value of SI 
    cout << "Simple Interest = " << SI;
​
    return 0;
}
**Output:**

Simple Interest: 0.01
Time complexity: O(1).
Auxiliary space: O(1).