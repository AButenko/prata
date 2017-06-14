#include <iostream>
using namespace std;

int main ()
{
  cout << "Please, enter distance in furlongs:" << endl;
  double furlongs = 0;
  cin >> furlongs;
  cout << "This is " << furlongs/220.0 << " yards." << endl;
  return 0;
}
