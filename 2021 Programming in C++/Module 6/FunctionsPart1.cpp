#include <iostream>

using namespace std;



bool orderTest(int x, int y, int z){
	if(x <= y && y <= z){
		cout << "In order" << endl;
		return true;
	}
	else{
		cout << "Out of order" << endl;
		return false;
	}
}

float absValue(float x){
	if(x < 0)
		return -x;
	else
		return x;
}

bool orderTestAbs(int x, int y, int z){
	orderTest(absValue(x), absValue(y), absValue(z));
}



int main()
{  	
	int x = -4, y = 15, z = -103;

	cout << "orderTest(" << x << ", " << y << ", " << z << "): ";
	orderTest(x, y, z);
	
	cout << "\nabsValue(" << x << "): " << absValue(x);
	cout << "\nabsValue(" << y << "): " << absValue(y);
	cout << "\nabsValue(" << z << "): " << absValue(z);
	
	cout << "\n\norderTestAbs(" << x << ", " << y << ", " << z << "): ";
	orderTestAbs(x, y, z);
	
    return 0;
}
