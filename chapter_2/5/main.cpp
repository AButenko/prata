#include <iostream>
using namespace std;

static double to_farenheit(const float celtius);

int main ()
{
  cout << "Please, enter Celtius value: ";
  float celtius = 0;
  cin >> celtius;
  cout << celtius << " degrees Celtius is " << to_farenheit(celtius) << " degrees Farenheit." << endl;
  return 0;
}

static double to_farenheit(const float celtius)
{
  return 1.8 * celtius + 32;
}
