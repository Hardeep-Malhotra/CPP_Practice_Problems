#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    
   bool isPrime = true;

  for (int i = 2; i <= sqrt(n); i++)
  {
    /* code */
    if(n % 2 == 0){
        isPrime = false;
    }
  }
  

  if(isPrime){
    cout<<n<<" is Prime Number.";
  }else{
    cout<<n<<" is Not Prime Number.";
  }
    return 0;
}