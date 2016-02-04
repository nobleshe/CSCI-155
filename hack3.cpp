//calculate mph of indy car
#include <iostream>
using namespace std;

int main () {
//variables
double mph, mps, seconds, lap, miles;

//figure it out
cout << "How many seconds did it take for the car to make a lap?";
cin >> seconds; 

//trying to make conversions
cout << "How many laps did the racecar make?";
cin >> lap;
miles = lap * 2.5;
mps = miles/seconds; 
mph = mps * 60 * 60; 

cout << "The racecar traveled at " << mph << "mph.";

return 0;
}