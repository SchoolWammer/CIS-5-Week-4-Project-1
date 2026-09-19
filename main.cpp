#include <iostream>
#include <string>

// Project 1 — Your Name
// CIS 5 Week 04 · Student card

int main() {
	const int CURRENT_YEAR = 2026;

	std::string name = "0";
	std::cout << "First name? ";
	std::cin >> name;

	int age = 0;
	std::cout << "Age?: ";
	std::cin >> age;
	

	double height_m = 0;
	std::cout << "Height in meters?: ";
	std::cin >> height_m;


	char initial = 0;
	std::cout << "Initial?: ";
	std::cin >> initial;

	bool student = true;

	int credits = 0;
	std::cout << "Credits?: ";
	std::cin >> credits;

	double gpa = 0.0;
	std::cout << "GPA?: ";
	std::cin >> gpa;

	double grad_year = CURRENT_YEAR + 4;
	double a = 100.0;
	double difference = 0.0;
	difference = a - credits;



	std::cout << "=== Student Card ===\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Height (m): " << height_m << "\n";
	std::cout << "Initial: " << initial << "\n";
	std::cout << "Student: " << student << "\n";
	

	std::cout << "Credits: " << credits << "\n";
	std::cout << "GPA: " << gpa << "\n";
	std::cout << "Current Year: " << CURRENT_YEAR << "\n";
	std::cout << "Remaining credits to graduate: " << difference << "\n";
	std::cout << "Graduation Year: " << grad_year << "\n";



	// TODO (week 3): declare and initialize the four boxes
	//   first (std::string), age (int), credits (int), gpa (double)

	// TODO (week 2): a cout question, then a cin into the box — four times

	// TODO (week 4): one computed line with an operator
	//   int grad_year = CURRENT_YEAR + 4;

	// TODO (weeks 1-4): print the card from the variable names
	//   header line, one labeled line per variable, then the computed value

	return 0;
}
