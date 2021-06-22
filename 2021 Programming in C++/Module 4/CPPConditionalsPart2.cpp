#include <iostream>
#include <iomanip>

using namespace std;



// Problem 2
void password(){
	string password, attempt;
	
	
    cout << "Please enter the password: ";
	cin >> password;
	cout << "Please type the password again: ";
	cin >> attempt;
	
	if (attempt == password)
		cout << "Welcome to the Matrix.";
	else
		cout << "Sorry, your passwords didn't match.";
}

// Problem 3
void integer(){
    int integer;
	
	cout << "Please give me an integer: ";
	cin >> integer;
	
	if ( (integer % 3 == 0) && (integer % 5 == 0) )
		cout << "WooHoo";
	else if (integer % 3 == 0)
		cout << "Woo";
	else if (integer % 5 == 0)
		cout << "Hoo";
	else
		cout << "Sorry about your number.";
}

// Problem 4
void intTernary(){
    int integer;
	
	cout << "Please give me an integer: ";
	cin >> integer;
	
	((integer%3 == 0)&&(integer%5 == 0)) ? cout<<"WooHoo" : (integer%3 == 0) ? cout<<"Woo" : (integer%5==0) ? cout<<"Hoo" : cout<<"Sorry about your number.";
}



int main()
{  
    int menu;
    
    cout << "Please select a function:\n";
    cout << "1. Problem 1\n";
    cout << "2. Problem 2\n";
    cout << "3. Problem 3\n";
    cin >> menu;
    
    // Problem 1
    cout << "\n\n\n";
    switch(menu){
        case 1: password();
        break;
        case 2: integer();
        break;
        case 3: intTernary();
        break;
    }

    return 0;
}
