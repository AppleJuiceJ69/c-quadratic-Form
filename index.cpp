#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// -b +- sqrt(b**b -4*a *c)
int main(){

 int a = 4;
 int b = 5;
  
 int c = 6;
 double squareRoot = sqrt((b * b) - (4 * a * c)) / (2 * a);

    double discriment = -b + squareRoot;
     double discriment2 = -b - squareRoot;
    cout << discriment << endl;
    cout << discriment2;
}