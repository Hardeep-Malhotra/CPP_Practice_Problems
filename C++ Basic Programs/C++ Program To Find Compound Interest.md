# C++ Program To Find Compound Interest
### What is 'Compound interest'? 
Compound interest is the addition of interest to the principal sum of a loan or deposit, or in other words, interest on interest. It is the result of reinvesting interest, rather than paying it out, so that interest in the next period is then earned on the principal sum plus previously-accumulated interest. Compound interest is standard in finance and economics.
Compound interest may be contrasted with simple interest, where interest is not added to the principal, so there is no compounding.
Compound Interest formula:

Formula to calculate compound interest annually is given by: 
 

Amount= P(1 + R/100)t
Compound Interest = Amount - P
Where, 
P is principal amount 
R is the rate and 
T is the time span

Pseudo Code:

Input principal amount. Store it in some variable say principal.
Input time in some variable say time.
Input rate in some variable say rate.
Calculate Amount using formula, 
Amount = principal * (1 + rate / 100)time.
Calculate Compound Interest using Formula.
Finally, print the resultant value of CI.
Example:

Input: Principal (amount): 1200
                    Time: 2
                    Rate: 5.4
Output: Compound Interest = 133.099243



// C++ program to find compound interest
// for given values.
#include <bits/stdc++.h>
using namespace std;
​
// Driver code
int main()
{
    double principal = 10000, rate = 5, time = 2;
​
    // Calculate compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;
​
    cout << "Compound interest is " << CI;
​
    return 0;
}
// This Code is Contributed by Sahil Rai.
Output: 

Compound interest is 1025
Time complexity: O(n), as pow() function take O(N) time.
Auxiliary space: O(1).