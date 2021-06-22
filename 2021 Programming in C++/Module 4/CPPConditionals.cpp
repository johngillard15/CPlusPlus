#include <iostream>
#include <iomanip>

using namespace std;



// Problem 1
void jacket(){
    int temp;
    char isWindy;
    
    cout << "What is the current temperature? (in Farenheit) ";
    cin >> temp;
    cout << "Is it windy today? (y/n) ";
    cin >> isWindy;
    
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
void tempConvert(){
    int temp, tempNew;
	char tempType;
	
	cout << "What is the current temperature? (in Farenheit): ";
    cin >> temp;
	cout << "Do you want the temperature converted to Celsius or Kelvin? (c/k): ";
    cin >> tempType;
	
	if( (tempType == 'c') || (tempType == 'C') ){
		tempNew = (5/9) * (temp - 32);
		cout << tempNew + " C";
	}
	else if( (tempType == 'k') || (tempType == 'K') ){
		tempNew = (5/9) * (temp - 32) + 273;
		cout << tempNew + " K";
	}
}

// Problem 3
void orderNumbers(){
    int x, y, z;
    
    cout << "Please give me three integers:\n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    
    cout << x << " <= " << y << " <= " << z << "\n";
    if( (x <= y) && (y <= z) )
        cout << "Everything is fine.";
    else
        cout << "The numbers are out of order.";
}

// Problem 4
void mealCost(){
    float TAX = 0.0625;
    float mealCost, tip, total;
    string feedback;
    
    cout << "Total cost of meal: $";
    cin >> mealCost;
    cout << "Was your dinner service good? ";
    cin >> feedback;
    
    if( (feedback == "y") || (feedback == "Y") || (feedback == "yes") || (feedback == "Yes") )
        tip = mealCost * 0.2;
    else if( (feedback == "n") || (feedback == "N") || (feedback == "no") || (feedback == "No") )
        tip = mealCost * 0.1;
    
    total = mealCost + tip + (mealCost * TAX);
    cout << showpoint << fixed << setprecision(2);
    cout << "Meal cost: $" << mealCost << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Final Total: $" << total << endl;
}



int main()
{  
    int menu;
    
    cout << "Please select a function:\n";
    cout << "1. Problem 1\n";
    cout << "2. Problem 2\n";
    cout << "3. Problem 3\n";
    cout << "4. Problem 4\n";
    cin >> menu;
    
    //system("cls");
    cout << "\n\n\n";
    switch(menu){
        case 1: jacket();
        break;
        case 2: tempConvert();
        break;
        case 3: orderNumbers();
        break;
        case 4: mealCost();
        break;
    }

    return 0;
}
