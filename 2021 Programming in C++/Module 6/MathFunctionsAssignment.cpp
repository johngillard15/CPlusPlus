#include <iostream>

using namespace std;



// Adds two floating point numbers then returns the sum
float add(float a, float b){
	return a + b;
}

// Calls the add function with two floating point numbers, with the second input being flipped with a negative sign to simulate subtraction, then returns the result
float subtract(float a, float b){
	return add(a,-b);
}

// Uses a for loop to repeatedly call the add function and returns the product
float multiply(float a, float b){
	float product = 0;
	bool flip = false;
	
	if(a != 0 || b != 0){
		if(a == 1 || a == -1){
			product = b;
			a == -1 ? flip = true : flip = false;
		}
		else{
			if(a < 0 && b < 0){
				a = -a;
				b = -b;
			}
			else if(b < 0){
				b = -b;
				flip = true;
			}
			
			for(int i = 0; i < b; i++){
				product = add(product,a);
			}
		}
		
		if(flip)
			product = -product;
	}
	
	return product;
}

// Uses a for loop to repeatedly call the multiply function, checking for zero or negative exponents, then returns the product
float power(float a, float b){
	float product = 1;
	bool invert = false;
	
	if(a != 0 || b != 0){
		if(b == 1){
			product = a;
		}
		else{
			if(b < 0){ // if exponent (b) is negative, make positive and invert later
				b = -b;
				invert = true;
			}
			
			for(int i = 0; i < b; i++){
				product = multiply(product,a);
			}
			
    		if(invert)
    			product = 1/product;
		}
	}
	
	return product;
}



int main()
{  	
	/* Test 1 (2,4)
	add: 6
	subtract: -2
	multiply: 8
	exponents: 16
	*/
	float x = 2, y = 4;
	
	cout << "\n\tTest 1: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 2 (2,-4)
	add: -2
	subtract: 6
	multiply: -8
	exponents: 0.0625
	*/
	x = 2, y = -4;
	
	cout << "\n\tTest 2: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 3 (-4,2)
	add: -2
	subtract: -6
	multiply: -8
	exponents: 16
	*/
	x = -4, y = 2;
	
	cout << "\n\tTest 3: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 4 (-4,-2)
	add: -6
	subtract: -2
	multiply: 8
	exponents: 0.0625
	*/
	x = -4, y = -2;
	
	cout << "\n\tTest 4: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 5 (4,1)
	add: 5
	subtract: 3
	multiply: 4
	exponents: 4
	*/
	x = 4, y = 1;
	
	cout << "\n\tTest 5: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 6 (1, 4)
	add: 5
	subtract: -3
	multiply: 4
	exponents: 1
	*/
	x = 1, y = 4;
	
	cout << "\n\tTest 6: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 7 (4, 0)
	add: 4
	subtract: 4
	multiply: 0
	exponents: 1
	*/
	x = 4, y = 0;
	
	cout << "\n\tTest 7: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 8 (0, 4)
	add: 4
	subtract: 4
	multiply: 0
	exponents: 0
	*/
	x = 0, y = 4;
	
	cout << "\n\tTest 8: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
	/* Test 9 (4,-1)
	add: 3
	subtract: 5
	multiply: -4
	exponents: 0.25
	*/
	x = 4, y = -1;
	
	cout << "\n\tTest 9: " << endl;
	cout << "add: " << endl;
	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << "subtract: " << endl;
	cout << x << " - " << y << " = " << subtract(x,y) << endl;
	cout << "multiply: " << endl;
	cout << x << " * " << y << " = " << multiply(x,y) << endl;
	cout << "exponents: " << endl;
	cout << x << "^" << y << " = " << power(x,y) << endl;
	
    return 0;
}
