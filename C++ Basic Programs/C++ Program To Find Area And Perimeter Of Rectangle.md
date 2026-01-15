# C++ Program To Find Area And Perimeter Of Rectangle
A rectangle is a flat figure in a plane. It has four sides and four equal angles of 90 degrees each. In a rectangle all four sides are not of equal length like squares, sides opposite to each other have equal length. Both diagonals of the rectangle have equal lengths.



Examples:  

Input: 4 5
Output: Area = 20
        Perimeter = 18

Input: 2 3
Output: Area = 6
        Perimeter = 10
Formulae :  

Area of rectangle: a*b 
Perimeter of rectangle: 2*(a + b) 
Below is the implementation of the above topic: 


// C++ program to find area
// and perimeter of rectangle
#include<iostream>
using namespace std;

// Utility function
int areaRectangle(int a, int b)
{
   int area = a * b;
   return area;
}

int perimeterRectangle(int a, int b)
{
   int perimeter = 2*(a + b);
   return perimeter;
}

// Driver code
int main()
{
  int a = 5;
  int b = 6;
  cout << "Area = " << 
           areaRectangle(a, b) << 
           endl;
  cout << "Perimeter = " << 
           perimeterRectangle(a, b);
  return 0;
}

Output: 

Area = 30
Perimeter = 22
Time Complexity: O(1) 

Space Complexity: O(1) as no extra space has been used.