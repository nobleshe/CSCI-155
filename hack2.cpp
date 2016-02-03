//This program calculates the users pay.
#include <iostream>
using namespace std;

int main() {
  //setting up variables
  double hours, rate, pay;
  
  //get the number of hours worked
  cout << "How many hours did you work?";
  cin >> hours;
  
  //get the hourly pay rate
  cout << "How much do you get paid per hour?";
  cin >> rate;
  
  //calculate the pay
  pay = hours * rate;
  
  //display the pay
  cout << "You have earned $" << pay << endl;
  return 0;
}