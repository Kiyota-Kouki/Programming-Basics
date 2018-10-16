#include <iostream>
using namespace std;
int main()
{
  int x = 30, y = 20;
  cout << x << "," << y << endl;

  int z = x + y;
  x = z - x;
  y = z - y;
  

  cout << x << "," << y << endl;
}
