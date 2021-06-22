#include <iostream>

using namespace std;


int main()
{  
    int x, y, i, sum, a, b;
	
	do{
		cout << "Please enter numbers for variables x & y" << endl;
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		
		if(x == y)
			cout << "Sorry, this program cannot work if x and y are the same. Please try again with new numbers." << endl;
	} while(x == y);
	
	if (x < y){
	    a = x;
	    b = y;
	}
	else if (x > y){
	    a = y;
	    b = x;
	}
	
	cout << "\nSums from loops:" << endl;
	
	cout << "while loop: ";
	i = a;
	sum = 0;
	while(i <= b){
		sum += i;
		i++;
	}
	cout << sum << endl;
	
	cout << "do while loop: ";
	i = a;
	sum = 0;
	do{
		sum += i;
		i++;
	} while(i <= b);
	cout << sum << endl;
	
	cout << "for loop: ";
	i = a;
	sum = 0;
	for(i = a; i <= b; i++){
		sum += i;
	}
	cout << sum;

    return 0;
}
