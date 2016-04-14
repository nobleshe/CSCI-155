#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double number, squareRoot, cubedRoot;
    cout<<"Enter a number: ";
    cin>>number;
 
// sqrt() calculates square root //
    squareRoot = sqrt(number);
    cout<<"Square root of "<<number<<" = "<<squareRoot << endl;
  
 // calculate cubedRoot // 
  cubedRoot = sqrt(squareRoot);
  cout<<"Cubed root of "<<number<<" = "<<cubedRoot << endl;
    return 0;
}