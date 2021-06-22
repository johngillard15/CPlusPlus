#include <iostream>
#include <iomanip>

using namespace std;



// Problem 1
void jacket(){
    int temp;
    char isWindy;
	bool valid = false;
    
	while (!valid) {
		cout << "What is the current temperature? (in Farenheit) ";
		cin >> temp;
		
		if( (temp < -20) || (temp > 120) )
			cout << "Sorry, that is not a valid temperature. Please try again." << endl;
		else
			valid = true;
	}
	
	valid = false;
	while (!valid) {
		cout << "Is it windy today? (y/n) ";
		cin >> isWindy;
		
		if( (isWindy == 'y') || (isWindy == 'Y') || (isWindy == 'n') || (isWindy == 'N') )
			valid = true;
		else
			cout << "Sorry, that is not a valid response. Please type a 'Y' or 'N' and try again." << endl;
	}
    
    if (temp < 0)
        cout << "It's too cold outside, you should stay home.";
    else if (temp < 20)
        cout << "It's very cold outside, you should wear a heavy coat.";
    else if (temp < 45)
        cout << "It's cold outside, you should wear a coat.";
    else if (temp < 70)
        cout << "It's chilly outside, you should wear a jacket.";
    else if ( (isWindy == 'y') || (isWindy == 'Y') )
        cout << "It's windy outside, you should wear a jacket.";
    else
        cout << "It's warm outside, you don't need to wear a jacket.";
}

// Problem 2
void mealCost(){
    static float TAX = 0.0625;
    float mealCost, tip, total;
    string feedback;
	bool valid = false;
    
	do {
		cout << "Total cost of meal: $";
		cin >> mealCost;
		
		if (mealCost <= 0)
			cout << "You must enter a number greater than 0. Please try again." << endl;
		else
			valid = true;
	} while (!valid);
	
	valid = false;
	while (!valid) {
		cout << "Was your dinner service good? ";
		cin >> feedback;
		if( (feedback == "y") || (feedback == "Y") || (feedback == "n") || (feedback == "N") )
			valid = true;
		else
			cout << "Sorry, that is not a valid response. Please type a 'Y' or 'N' and try again." << endl;
	}
    
    if( (feedback == "y") || (feedback == "Y") || (feedback == "yes") || (feedback == "Yes") )
        tip = mealCost * 0.2;
    else if( (feedback == "n") || (feedback == "N") || (feedback == "no") || (feedback == "No") )
        tip = mealCost * 0.1;
	
	total = mealCost + tip + (mealCost * TAX);
    cout << showpoint << fixed << setprecision(2);
    cout << "Meal cost: $" << mealCost << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Final Total plus Tax: $" << total << endl;
}



int main()
{  
    int menu;
    
    cout << "Please select a function:\n";
    cout << "1. Problem 1\n";
    cout << "2. Problem 2\n";
    cin >> menu;
    
    cout << "\n\n\n";
    switch(menu){
        case 1: jacket();
        break;
        case 2: mealCost();
        break;
    }

    return 0;
}
