#include <iostream>
using namespace std;

static double to_astro_units(const float light_years);

int main ()
{
  cout << "Enter the number of light years: ";
  float light_years = 0;
  cin >> light_years;
  cout << light_years << " light years = " << to_astro_units(light_years) << " astronomical units." << endl;
  return 0;
}

static double to_astro_units(const float light_years)
{
  return 63240 * light_years;
}
