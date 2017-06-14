#include <iostream>
using namespace std;

static void foo(void);
static void bar(void);

int main ()
{
  foo();
  foo();
  bar();
  bar();
  return 0;
}

static void foo(void)
{
  cout << "Three blind mice" << endl;
}

static void bar(void)
{
  cout << "See how they run" << endl;
}
