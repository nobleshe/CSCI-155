#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

//Jordan defined the variables and asked for the number of days,
//mackenzie wrote the code regarding vehicles, car rentals, private vehicle, and milage
//Shelby wrote the code regarding taxi fees through the food costs

int main () {
	
//open file	
	ofstream outputFile;
	outputFile.open("expensereport.txt");
		
//variables
double days, allowableTaxi, Etaxi, taxiFees, conferenceFees, allowableHotel, hotelFees, Ehotel, foodCost, allowableFood, Efood, carrentals, parkingfees1, parkingfees2, 
	privatevehicle, milesdriven, allowableParking, Eparking1, Eparking2, allowableMiles,
	DifferenceF, DifferenceH, DifferenceP1, DifferenceP2, DifferenceT;
char ch1, ch2, ch4, ch5, ch6;
//get number of days spent on trip
cout << "How many days were spent on the trip?";
cin >> days;
//start putting things in the file
outputFile << "       BUISNESS TRIP EXPENSE REINBURSEMENT REPORT" << endl;
outputFile << "Company will reinburse the stated costs. Employee will cover the overages." << endl;
outputFile << "Stated savings will be added to employees salary." << endl;
	outputFile << "Length of Buisness Trip: " << days << " days" << endl;	

 // Ask if they rented a car
cout << "Did you rent a car? Y or N ";
cin >> ch1;
	
// Respond if they did rent a car, and ask for the cost 
// then calculate savings or overages, and save to the file.
if (ch1 =='Y') 
{
  cout << "What was the car rental cost?" << endl;
    cin >> carrentals;
	cout << "The company will reinburse you $" << carrentals << " for car rental expenses." << endl;
 	
	outputFile << "Car Rental Cost: $" << carrentals << endl;
	
   cout << "What were the parking fees? " << endl;
  cin >> parkingfees1;
	
	allowableParking = days * 6;
		
	if (parkingfees1 < allowableParking) 
	{ 
	cout << "The company will reinburse you $" << parkingfees1 << " for parking fees." << endl;
	outputFile << "Parking Cost: $" << parkingfees1 << endl;
	DifferenceP1 = allowableParking - parkingfees1;
	outputFile << "      Savings: $" << DifferenceP1 << endl;
	}
	
	if (parkingfees1 > allowableParking)
	{
		cout << "The company will reinburse you $" << allowableParking << " for parking fees." << endl;
		outputFile << "Parking Cost: $" << allowableParking << endl;
		Eparking1 = parkingfees1 - allowableParking;
		outputFile << "       Overage: $" << Eparking1 << endl;
	}
}

	// if they did not rent a car ask if they used a private vehicle,
	// ask for the parking fees of the private vehicle
	// calculate milage reinbursement
if (ch1 == 'N')
{
cout << "Was a private vehicle used? Y or N." << endl;
  cin >> ch2;
  
if (ch2 == 'Y') {
   cout << "What were the parking fees? ";
  cin >> parkingfees2;
   
	allowableParking = days * 6;
  if ( parkingfees2 > allowableParking) 
  {

		cout << "The company will reinburse you $" << allowableParking << " for parking fees." << endl;
		outputFile << "Parking Cost: $" << allowableParking << endl;
		Eparking2 = parkingfees2 - allowableParking;
		outputFile << "       Overage: $" << Eparking2 << endl;
  }
  if ( parkingfees2  < allowableParking) 
  {
	cout << "The company will reinburse you $" << parkingfees2 << " for parking fees." << endl;
	outputFile << "Parking Cost: $" << parkingfees2 << endl;
	DifferenceP2 = allowableParking - parkingfees2;
	outputFile << "      Savings: $" << DifferenceP2 << endl;
  }
	
	 cout << "How many miles were driven with the private vehicle? ";
    cin >> milesdriven;
  allowableMiles = milesdriven * 0.27;
	cout << "The company will reinburse you $" << allowableMiles << " for miles driven." << endl;
	outputFile << "Milage Reinbursement: $" << allowableMiles << endl;
}

	//if they didnt use a private vehilce move on to the next question
 if ( ch2 == 'N') {
   cout << "Continue" << endl;
}
 }
	
//ask if they used a taxi,
cout << "Did you use a taxi during the trip? Y or N.";
cin >> ch4;

//Get the taxi fees, and calculate savings or overages
if (ch4 == 'Y') {
  cout << "What were the total taxi fees?";
cin >> taxiFees; 
	
  allowableTaxi = (10 * days);
//calculate taxi expenses fees
if (taxiFees > allowableTaxi) 
{
cout << "The company will reinburse you $" << allowableTaxi << " for taxi fees." << endl;
	outputFile << "Taxi Cost: $" << allowableTaxi << endl;
	Etaxi = taxiFees-allowableTaxi;
	outputFile << "       Overage: $" << Etaxi << endl;
}
	
if (taxiFees < allowableTaxi) 
{
	 cout << "The company will reinburse you $" << taxiFees << "for taxi fees." << endl;
	outputFile << "Taxi Cost: $" << taxiFees << endl;
	DifferenceT = allowableTaxi - taxiFees;
	outputFile << "      Savings: $" << DifferenceT << endl;
}
  
}
 //if they did not take a taxi move on
if (ch4 == 'N') 
{
  cout << "Continue" << endl;  
}
  //ask if they attended a seminar
cout << "Did you attend a conference or a seminar? Y or N" << endl;
  cin >> ch5;

	//if yes ask for cost of conference fees 
if (ch5 == 'Y') 
{
  cout << "What were conference fees?" << endl;
  cin >> conferenceFees;
	
	cout << "The company will reinburse you $" << conferenceFees << " for conference fees." << endl;
	outputFile << "Conference Cost: $" << conferenceFees << endl;
}

	//if no move on
if (ch5 == 'N')  {
  cout << "Continue" << endl;
}
	
//ask if they stayed at a hotel
cout << "Did you stay at a hotel? Y or N." << endl;
cin >> ch6;
  
// if yes calculate savings and overages on hotel fees
if (ch6 == 'Y') {
   allowableHotel = 90 * days;

cout << "What was the total hotel expense?" << endl;
 cin >> hotelFees;
  
  if ( hotelFees > allowableHotel) 
	{  
    Ehotel = hotelFees - allowableHotel;
    cout << "The company will reinburse you $" << allowableHotel << " for hotel expenses." << endl;
		outputFile << "Hotel Cost: $" << allowableHotel << endl;
		outputFile << "      Overage: $" << Ehotel << endl; 
  }
	
  if (hotelFees < allowableHotel) 
	{
		cout << "The company will reinburse you $" << hotelFees << " for hotel expenses." << endl;
	outputFile << "Hotel Cost: $" << hotelFees << endl;
	DifferenceH = allowableHotel - hotelFees;
	outputFile << "      Savings: $" << DifferenceH << endl;
	}

	//if they didnt use a hotel move on
	if (ch6 == 'N')
  {
    cout << "Continue" << endl;
  }
  
}
	
	//ask what their food expenses were throughout the trip
cout << "What were your food expenses throughout the trip?" << endl;
  cin >> foodCost;
  allowableFood = 37*days;
	//calculate savings or overages on food cost
    if (foodCost > allowableFood) 
		{
      Efood = foodCost - allowableFood;
      cout << "The company will reinburse you $" << allowableFood << "for food costs." << endl;
			outputFile << "Food Cost: $" << allowableFood << endl;
			outputFile << "       Overage: $" << Efood << endl;
    }
    if (foodCost < allowableFood)
		{
      cout << "The company will reinburse you for $" << foodCost << " for food costs." << endl;
			outputFile << "Food Cost: $" << foodCost << endl; 
			DifferenceF = allowableFood - foodCost;
			outputFile << "       Savings: $" << DifferenceF << endl;
    }
return 0;
}