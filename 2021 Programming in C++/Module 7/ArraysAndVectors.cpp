#include <iostream>
#include <vector>

using namespace std;

/*int sumArray(int numbers[]){
	int sum = 0;
	
	for(int i : numbers)
		sum += numbers[i];
	
	return sum;
}*/

int sumArray(int numArray[], int size){
	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += numArray[i];
	}
	
	return sum;
}

int sumVector(){
	int sum = 0;
	vector<int> numVector;
	
	int i = 0;
	int temp = -1;
	cout << "\n\nEnter zero to exit the loop..." << endl;
	while(temp != 0){
		cout << "Please give me a non-zero integer for element " << i << ": ";
		cin >> temp;
		
		i++;
		
		if(temp != 0)
			numVector.push_back(temp);
	}
	
	for(int i = 0; i < numVector.size(); i++){
		sum += numVector[i];
	}
	/*for(int i : numVector)
	    sum += numVector[i];*/
	
	return sum;
}


int main()
{  	
	int size = 5;
	int numbers[size];
	int vectorSum;
	
	int i = 0;
	while(i < size){
		cout << "Please give me an integer for element " << i << ": ";
		cin >> numbers[i];
		i++;
	}
	
	cout << "\nThe sum of the elements in the numbers array is " << sumArray(numbers, size) << "." << endl;
	
	vectorSum = sumVector();
	cout << "\nThe sum of the elements in the numbers vector is " << vectorSum << "." << endl;
	
    return 0;
}
