#include <iostream> 
#include <ctime> 
#include <iomanip>>

using namespace std; 
int main () {
  int seed = time(0);
  srand(seed);

double a = rand() % 100, b = rand() % 100, c = rand() % 100;
  cout << setprecision(5) << fixed;
  cout << a << "\n" << b << "\n" << c << "\n";

  double sum = a+b+c;
  double avr = sum/3;
    cout << "sum " << sum << "\n";
    cout << "average " << avr << "\n";
}