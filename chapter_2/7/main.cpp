#include <iostream>
using namespace std;

static void make_time(unsigned int hours, unsigned int minutes);

int main ()
{
  unsigned int hours = 0;
  unsigned int minutes = 0;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  make_time(hours, minutes);
  return 0;
}

static void make_time(unsigned int hours, unsigned int minutes)
{
  while (hours >= 24) hours /= 24;
  while (minutes >= 60) minutes /= 60;
  cout << "Time: " << (hours > 9 ? "" : " ") << hours << ":" << minutes << endl;
}
