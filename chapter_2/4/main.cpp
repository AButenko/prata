#include <iostream>
using namespace std;

int main ()
{
  cout << "Enter your age: ";
  unsigned int age = 0;
  cin >> age;
  // error in Prata book 29 years == 348 months, not 384
  cout << "Your age in month is " << age * 12 << endl;
  return 0;
}
