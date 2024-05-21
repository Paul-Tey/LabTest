/*
This program is done by...
Name: Tey Yuan Fu Paul
Admin No: 2443447
Class: DCPE/FT/1B/24
*/

#include <iostream>

int main() {
	std::cout << "This program is done by...\nName: Tey Yuan Fu Paul\nAdmin No: 2443447\n\n";
	while (true) {
		int age;
		double height, Fout;
		std::cout << "Enter your age: "; std::cin >> age;
		if (age < 16) {
			std::cout << "Your age must be more than 16.";
			break;
		}
		std::cout << "Enter your height in meters: "; std::cin >> height;
		Fout = -(100.0 / 26.0) + ((sqrt(pow(pow(age, 2) - 16.0, 3))) / (pow(height, 3) + 55.0));
		std::cout << "The computed result is " <<Fout << "\n\n";
	}
}
//Part 2
/*
part1 // Beginning part of Part 1 coding omitted here.
while(true) {
part1.2 //main part of your Part1 coding omitted here.
	if (age<=4) {
	break;
	}
	Fout = -(100 / 26) + ((sqrt(pow(pow(age, 2) - 16, 3))) / (pow(height, 3) + 55));
	std::cout << "The computed result is " <<Fout << "\n\n";
}
*/