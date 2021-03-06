// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
/*10. Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that creates three ships, 
asks the user to input the position of each, and then displays each ship’s
number and position.*/
#include "stdafx.h"
#include <iostream>
using namespace std;
class ship {
private:
	static int number;
	int degree;
	float minute;
	char direction;
	char x = '\xF8';//degree (°) symbol
	char dummy_mark = '\'';
	char y;
public:
	
	



	void get_position() {
		cout << "\nEnter position in format 179°59.9’ E :" << endl;

		cin >> degree >> y >> minute >> dummy_mark >> direction;

		if (minute >= 60) {
			minute -= 60;
			degree++;
		}
	}
	void display_position() {
		cout << "The number is:" << number + 1<< endl;
		cout << "The position is:" << degree << x << minute << dummy_mark << direction << endl;
		number++;

	}
};
int ship::number = 0;

int main()
{
	ship sh1, sh2, sh3;
	sh1.get_position();
	sh2.get_position();
	sh3.get_position();
	sh1.display_position();
	sh2.display_position();
	sh3.display_position();


    return 0;
}

