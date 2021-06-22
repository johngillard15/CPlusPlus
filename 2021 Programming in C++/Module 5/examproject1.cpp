#include <iostream>
#include <iomanip>

using namespace std;


bool mtq(){
	int score = 0;
    int choice;
	int grade;
	char retake;
	bool restart = false;
	
	
	// Question 1
	do{
		cout << "\nQuestion 1. Which of these is a post-test loop?\n" << endl;
		cout << "1. do...while()" << endl;
		cout << "2. while()" << endl;
		cout << "3. for()" << endl;
		cout << "4. switch()" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 1)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 2
	do{
		cout << "\nQuestion 2. Which of these is a pre-test loop?\n" << endl;
		cout << "1. main()" << endl;
		cout << "2. do...while()" << endl;
		cout << "3. switch()" << endl;
		cout << "4. for()" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 4)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 3
	do{
		cout << "\nQuestion 3. What will be the new value of x after this loop executes?" << endl;
		cout << "\n int x = 0;" << endl;
		cout << " while(x <= 3){" << endl;
		cout << "   if(x % 2 == 1)" << endl;
		cout << " 	  x++;" << endl;
		cout << "   x++;" << endl;
		cout << " }\n" << endl;
		cout << "1. x = 1" << endl;
		cout << "2. x = 0" << endl;
		cout << "3. x = 3" << endl;
		cout << "4. x = 4" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 2)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 4
	do{
		cout << "\nQuestion 4. What message will this code display?" << endl;
		cout << " int main()" << endl;
		cout << " {" << endl;
		cout << " 	string j = \"Hello,\";" << endl;
		cout << " 	string k = \" World!\";" << endl;
		cout << " 	cout >> j + k;" << endl;
		cout << " }\n" << endl;
		cout << "1. Hello," << endl;
		cout << "2.  World!" << endl;
		cout << "3. Hello, World!" << endl;
		cout << "4. This code will not compile" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 4)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 5
	do{
		cout << "\nQuestion 5. What is the difference between \"=\" and \"==\"?\n" << endl;
		cout << "1. They are the same" << endl;
		cout << "2. \"==\" is only used in loops" << endl;
		cout << "3. \"=\" means assignment, whereas \"==\" compares two values" << endl;
		cout << "4. \"==\" means assignment, whereas \"=\" compares two values" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 3)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 6
	do{
		cout << "\nQuestion 6. What will be displayed if this code is executed?" << endl;
		cout << " string a = \"77\"" << endl;
		cout << " string b = \"103\"" << endl;
		cout << " cout << b + a;\n" << endl;
		cout << "1. 103" << endl;
		cout << "2. 10377" << endl;
		cout << "3. 180" << endl;
		cout << "4. 77103" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 2)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 7
	do{
		cout << "\nQuestion 7. What is the modern method of type casting an integer?\n" << endl;
		cout << "1. static_cast<int>(area)" << endl;
		cout << "2. (int) area" << endl;
		cout << "3. int (area) " << endl;
		cout << "4. <static_cast>int(area)" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 1)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 8
	do{
		cout << "\nQuestion 8. What will be printed when this swich statement executes?" << endl;
		cout << " int a = 2;" << endl;
		cout << " switch (a){;" << endl;
		cout << " 	case 1: cout << \"a = 1\";" << endl;
		cout << " 	  break;" << endl;
		cout << " 	case 2: cout << \"a = 2\";" << endl;
		cout << " 	case 3: cout << \"a = 3\";" << endl;
		cout << " 	default: cout << \"default\";" << endl;
		cout << " }\n" << endl;
		cout << "1. a = 2" << endl;
		cout << "2. a = 2" << endl;
		cout << "   a = 3" << endl;
		cout << "   default" << endl;
		cout << "3. a = 2" << endl;
		cout << "   a = 3" << endl;
		cout << "4. default" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 2)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 9
	do{
		cout << "\nQuestion 9. What is the proper way to declare an array with 7 elements?\n" << endl;
		cout << "1. int c [6];" << endl;
		cout << "2. int c = [6];" << endl;
		cout << "3. int c [7];" << endl;
		cout << "4. int c = [7];" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 3)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	// Question 10
	do{
		cout << "\nQuestion 10. What is the value of p?\n" << endl;
		cout << " int z = 16;" << endl;
		cout << " int p = &z;" << endl;
		cout << " \n;" << endl;
		cout << "1. 16" << endl;
		cout << "2. 32" << endl;
		cout << "3. The memory address of z" << endl;
		cout << "4. This code will not compile" << endl;
		cout << "Answer: ";
		cin >> choice;
		
		// Correct answer
		if (choice == 3)
			score++;
		else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
			cout << "\nThat is not a valid answer. Please choose a number from 1 to 4 to move on." << endl;
	} while(choice != 1 && choice != 2 && choice != 3 && choice != 4);
	
	
	
	grade = score * 10;
	cout << "\n\nYou answered " << score << " questions correctly." << endl;
	cout << "Your current grade is " << grade << "%." << endl;
	
	if (grade >= 70){
		cout << "Congratulations! You scored a " << grade << "% on the quiz. You have passed with flying colors." << endl;
		cout << "Would you like to take the quiz again? (y/n)" << endl;
		cin >> retake;
		
		if (retake == 'y')
			restart = true;
		else if (retake == 'n')
			restart = false;
	}
	else if (grade < 70){
		cout << "\nYou scored a " << grade << "% on the quiz. You need to retake it until you achieve a passing grade.\n" << endl;
		restart = true;
	}
	
	//cout << "restart: " << restart << endl;
	/*if (restart)
	    return true;
	else if (!restart)
	    return false;*/
	return restart;
}

int main()
{  	
	bool test;
	do{
    	test = mtq();
	} while(test);

    return 0;
}
