//This program calculates the volume, cost, customer charge, and profit of a crate of any size.
//It calculates this data from user input, which consists of the dimensions of the crate. 
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
  //trying to get output to save to a file 
  ofstream outputFile;
  //open file 
  outputFile.open("cratehack.txt"); 
  
//constans for cost and amount charged
const double COST_PER_CUBIC_FOOT = 0.23 ;
const double CHARGE_PER_CUBIC_FOOT = 0.5 ;

//variables
double length, 
width, 
height,
volume,
cost,
charge,
profit;

//set the desired output formatting for numbers. 
cout << setprecision(2) << fixed << showpoint;

//prompt the user for crate's length, width, and height. 
cout << "Enter the dimensions of the crate (in feet)" << endl;
cout << "Length:";
cin >> length;
cout << "Width:";
cin >> width;
cout << "Height:";
cin >> height;

//Calculate the crate's volume, the cost to produce it,
//the charge to the customer, and the profit. 
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

//Display the calculated data. 
cout << "The volume of the crate is ";
cout << volume << "cubic feet." << endl;
cout << "Cost to build: $" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Profit: $" << profit << endl;
  
  //write results to file
  outputFile << "Cost to build: $" << cost << endl;
  outputFile << "Charge to customer: $" << charge << endl;
  outputFile << "Profit: $" << profit << endl;
  
  outputFile.close();
return 0;

}

