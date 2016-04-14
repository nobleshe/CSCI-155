#include <iostream>
#include <string>
 
using namespace std;
 
main()
{
 
	int num;
	cout << "Enter the Number of a Month: " ;
	cin >> num;
	cout << endl;
 
		switch (num)
			{
			case 1:
				cout << "This is the month of January " ;
			break ;
 
			case 2:
				cout << "This is the month of February " ;
			break ;
 
			case 3:
				cout << "This is the month of March " ;
			break ;
 
			case 4:
				cout << "This is the month of April " ;
			break ;
 
			case 5:
				cout << "This is the month of May" ;
			break ;
 
			case 6:
				cout << "This is the month of June " ;
			break ;
 
			case 7:
				cout << "This is the month of July " ;
			break ;
 
			case 8:
				cout << "This is the month of August" ;
			break ;
 
			case 9:
				cout << "This is the month of September" ;
			break ;
 
			case 10:
				cout << "This is the month of October " ;
			break ;
 
			case 11:
				cout << "This is the month of November " ;
			break ;
 
			case 12:
				cout << "This is the month of December" ;
			break ;
 
			default :
				cout << "Your entered number is invalid" ;
			break ;
		}
			cout << endl;
 
 
		switch (num)
                        {
                        case 1:
			case 11:
			case 12:
                                cout << "And it's Winter... " << endl  << endl ;
                        break ;
 
			case 2:
			case 3:
			case 4:
				cout << "And it's Spring..." << endl  << endl ;
			break ;
		
			case 5:
			case 6:
			case 7:
				cout << "And it's Summer..." << endl  << endl ;
			break ;
 
			case 8:
			case 9:
			case 10:
				cout << "And it's Fall..." << endl << endl;
			break ;
			
			default:
				cout << endl;
			break ;
			}
	return 0;
}