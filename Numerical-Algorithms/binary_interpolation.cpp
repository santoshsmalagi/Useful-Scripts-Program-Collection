// Performs bi-linear interpolation based on 'Repeated Linear Interpolation'

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  float x1{}, x2{}, y1{}, y2{}, x{}, y{}, Q11{}, Q12{}, Q21{}, Q22{};
  float fxy1{}, fxy2{}, fxy{};

  cout << "Enter the value of x1: " << endl;
  cin >> x1;
  cout << "Enter the value of x2: " << endl;
  cin >> x2;
  cout << "Enter the value of y1: " << endl;
  cin >> y1;
  cout << "Enter the value of y2: " << endl;
  cin >> y2;
  cout << "Enter the value of Q11: " << endl;
  cin >> Q11;
  cout << "Enter the value of Q12: " << endl;
  cin >> Q12;
  cout << "Enter the value of Q21: " << endl;
  cin >> Q21;
  cout << "Enter the value of Q22: " << endl;
  cin >> Q22;
  cout << "Enter the value of x: " << endl;
  cin >> x;
  cout << "Enter the value of y: " << endl;
  cin >> y;

  fxy1 = (((x2 - x)/(x2 - x1)) * Q11) + (((x - x1)/(x2 - x1)) * Q21);
  fxy2 = (((x2 - x)/(x2 - x1)) * Q12) + (((x - x1)/(x2 - x1)) * Q22);

  fxy = (((y2 - y)/(y2 - y1)) * fxy1) + (((y - y1)/(y2 - y1)) * fxy2);

  cout << "f(" << x << "," << y << ") = " << fxy << endl;
  
  return 0;

}
