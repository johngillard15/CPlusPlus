#include <iostream>
#include <cstdlib>

using namespace std;

string name;
bool gameOver; // first game win condition
bool treasureGet; // second the game win condition
bool play; // used to continue after completion
int turn;
int TURN_LIMIT = 20;
int playerX;
int playerY;
int treasureX;
int treasureY;
int obstacleX1;
int obstacleY1;
int obstacleX2;
int obstacleY2;
int obstacleX3;
int obstacleY3;
bool DEBUG = false; // enables debug features


void initialize(){ // set the default values for variables at start and on replay
	cout << "What is your name? ";
	cin >> name;
	cout << "Welcome to the game, " << name << ".";
	gameOver = false;
	treasureGet = false;
	play = true;
	turn = 0;
	playerX = 0; // (0,0) is center of game board
	playerY = 0;
	
	if(DEBUG){
	    obstacleX1 = 0;
	    obstacleY1 = 1;
	    obstacleX2 = 0;
	    obstacleY2 = 2;
	    obstacleX3 = 1;
	    obstacleY3 = 2;
	    treasureX = 2;
	    treasureY = 2;
	}
	else{ // re-roll treasure/obstacle coords until the they are placed off of the player starting tile (0,0)
	    do{
	    	obstacleX1 = rand() % 5 - 2;
	    	obstacleY1 = rand() % 5 - 2;
	    	obstacleX2 = rand() % 5 - 2;
	    	obstacleY2 = rand() % 5 - 2;
	    	obstacleX3 = rand() % 5 - 2;
	    	obstacleY3 = rand() % 5 - 2;
	    	treasureX = rand() % 5 - 2;
	    	treasureY = rand() % 5 - 2;
	    } while(treasureX != playerX && treasureY != playerY);
	}
}

void move(){ // changes the players coordinates based on choice of direction
	string direction;
	bool validMove = false; // used to check whether player can move
	do{
	    cout << "Your location: (" << playerX << "," << playerY << ")" << endl;
		    
		cout << "Where would you like to move? ";
		cin >> direction;
		
		
		if(direction == "u" || direction == "U"){
		    if(playerY == 2){
				cout << "You have hit a dead end. Try another direction." << endl;
			}
			else{
				playerY++;
				validMove = true;
			}
        }
        else if(direction == "d" || direction == "D"){
            if(playerY == -2){
				cout << "You have hit a dead end. Try another direction." << endl;
			}
			else{
				playerY--;
				validMove = true;
			}
        }
        else if(direction == "l" || direction == "L"){
		    if(playerX == -2){
				cout << "You have hit a dead end. Try another direction." << endl;
			}
			else{
				playerX--;
				validMove = true;
			}
        }
        else if(direction == "r" || direction == "R"){
            if(playerX == 2){
				cout << "You have hit a dead end. Try another direction." << endl;
			}
			else{
				playerX++;
				validMove = true;
			}
        }
		} while(validMove == false);
}

void obstacle1(){
	int choice;
	bool pass = false;
	int fails = 0;
	
	cout << "\n Your path is blocked! You must solve the following riddle to continue..." << endl;
	
	cout << "\nWhat will be printed when this swich statement executes?" << endl;
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
	do{
		cout << "Answer: ";
		cin >> choice;
		
		if(choice == 2){ // Correct answer
			cout << "You have avoided the obstacle. You may now pass." << endl;
			pass = true;
		}
		else if(fails < 2){
			cout << "\nIncorrect." << endl;
			fails++;
		}
		
		if(fails >= 2){
			cout << "\nOh no! The trap has caused an rockslide to block the exit! Looks like you're stuck here." << endl;
			gameOver = true;
		}
	} while(pass == false && fails < 2);
}

void obstacle2(){
	int choice;
	bool pass = false;
	int fails = 0;
	
	cout << "\n Your path is blocked! You must solve the following riddle to continue..." << endl;
	
	cout << "\nWhat will be displayed if this code is executed?" << endl;
	cout << " string a = \"77\"" << endl;
	cout << " string b = \"103\"" << endl;
	cout << " cout << b + a;\n" << endl;
	
	cout << "1. 103" << endl;
	cout << "2. 10377" << endl;
	cout << "3. 180" << endl;
	cout << "4. 77103" << endl;
	do{
		cout << "Answer: ";
		cin >> choice;
		
		if(choice == 2){ // Correct answer
			cout << "You have avoided the obstacle. You may now pass." << endl;
			pass = true;
		}
		
		if(fails < 2){
			cout << "\nIncorrect." << endl;
			fails++;
		}
		
		if(fails >= 2){
			cout << "\nThe room has sealed itself and is now filling with water! I hope you brought some scuba gear..." << endl;
			gameOver = true;
		}
	} while(pass == false && fails < 2);
}

void obstacle3(){
	int choice;
	bool pass = false;
	int fails = 0;
	
	cout << "\n Your path is blocked! You must solve the following riddle to continue..." << endl;
	
	cout << "\nWhat message will this code display?" << endl;
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
	do{
		cout << "Answer: ";
		cin >> choice;
		
		if(choice == 4){ // Correct answer
			cout << "You have avoided the obstacle. You may now pass." << endl;
			pass = true;
		}
		else if(fails < 2){
			cout << "\nIncorrect." << endl;
			fails++;
		}
		
		if(fails >= 2){
			cout << "\nThe puzzle has disappered and the room slowly darkens until it is pitch black. You really should have brought a flashlight." << endl;
			gameOver = true;
		}
	} while(pass == false && fails < 2);
}

void treasure(){
	int choice;
	int fails = 0;
	
	cout << "\n You have found the treasure! But there is still one more test you must pass in order escape..." << endl;
	
	cout << "\nWhat is the value of p?\n" << endl;
	cout << " int z = 16;" << endl;
	cout << " int p = &z;" << endl;
	
	cout << "1. 16" << endl;
	cout << "2. 32" << endl;
	cout << "3. The memory address of z" << endl;
	cout << "4. This code will not compile" << endl;
	do{
		cout << "Answer: ";
		cin >> choice;
		
		if(choice == 3){ // Correct answer
			cout << "You have passed the test and the treasure is now yours!" << endl;
			treasureGet = true;
		}
		else if(fails < 2){
			cout << "\nIncorrect." << endl;
			fails++;
		}
		else if(fails >= 2){
			cout << "\nYou came so close, yet you were not worthy to recieve the relic. It disappears along with any hope of escape." << endl;
		}
	} while(treasureGet == false && fails < 2);
	
	gameOver = true;
}

void checkTile(){ // checks if player has landed on a tile with an obstacle and executes the event
	if(playerX == obstacleX1 && playerY == obstacleY1)
		obstacle1();
	if(playerX == obstacleX2 && playerY == obstacleY2)
		obstacle2();
	if(playerX == obstacleX3 && playerY == obstacleY3)
		obstacle3();
	if(playerX == treasureX && playerY == treasureY)
		treasure();
}

void gameEnd(){
	if(treasureGet){
		cout << "\n\n\nCongratulations, " << name << "! You Win!" << endl;
		cout << "You have acquired the relic and escaped with your life!" << endl;
	}
	else{
		cout << "\n\n\nYou died. Game Over." << endl;
		cout << "Try again next time." << endl;
	}
}

void replay(){
	string choice;
	cout << "\n\n\nWould you like to play again? (y/n) ";
	cin >> choice;
	
	if(choice == "y" || choice == "Y"){
		initialize();
		cout << "\n\n\n\n\n\n\n\n\n\n";
	}
	else if(choice == "n" || choice == "N"){
		cout << "\nThank you for playing!" << endl;
		play = false;
	}
}



int main()
{
    string wait;
    
	initialize();
	
	cout << "Welcome to the magic labyrinth." << endl;
	cout << "You are an adventurer on a quest to find an ancient relic, but the journey will be treacherous." << endl;
	cout << "You must solve riddles to avoid being trapped inside the labyrinth and escape with the treasure to win." << endl;
	
	cout << "\nTo move, press the letter of the corresponding direction you would like to move: " << endl;
	cout << "Up [U], Down [D], Left[L], Right[R]" << endl;
	cout << "Beware though, the labyrinth is riddled with dangerous puzzles that must be solved to advance.\n" << endl;
	
	while(play == true){ // repeats the game loop on replay
		do{ // cycle through turns until the player fails a test
			turn++;
			if(turn > TURN_LIMIT){
				cout << "You have become lost in the long corridors of the labyrinth." << endl;
				gameOver == true;
			}
			else{
				cout << "\nYou are on turn " << turn << "." << endl;
				
				move();
				
				checkTile();
			}
		} while(!gameOver);
		gameEnd();
		replay();
	}
	
    return 0;
}
