#include <iostream>
using namespace std;

int main()
{
    // Given binary number
    int binary = 10101001;

    // Variable to store final octal number
    int octal = 0;

    // Place value for octal digits (1, 10, 100, ...)
    int place = 1;

    // Temp variable so original binary number remains unchanged
    int temp = binary;

    // Loop continues until all binary digits are processed
    while (temp != 0)
    {
        // Extract last 3 binary digits (rightmost group)
        int group = temp % 1000;

        // Remove last 3 digits from temp
        temp = temp / 1000;

        // Convert 3-bit binary group into decimal
        int dec = 0;      // decimal value of current group
        int base = 1;     // base starts with 2^0 = 1

        // Convert binary group to decimal
        while (group != 0)
        {
            int last_digit = group % 10;   // extract last binary digit
            dec += last_digit * base;      // add weighted value
            group = group / 10;            // remove processed digit
            base = base * 2;               // move to next power of 2
        }

        // Add decimal value to octal number at correct position
        octal += dec * place;

        // Update place for next octal digit
        place *= 10;
    }

    // Display the result
    cout << "Octal number of this binary number " 
         << binary << " is : " << octal << endl;

    return 0;
}
