/*
	Name: Miguel Juarez
	Date: 12/22/2022
	Class: CIS 160 Fundamentals of Computer Science I
	Project Name: Payroll by Structure
	Description: Program calculates payroll by using structures
*/

//Preprocessor directives needed for program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Employee structure that holds employee's name, hours worked, and hourly rate
struct Employee
{
	string name;
	float hours;
	float rate;
};

//Function prototypes to take user input, perform calculations, and display output
void Input(string&, float&, float&);
float Process(float, float);
void Output(Employee);

int main()
{
	string name; //Name of employee to be passed to structure
	float hours; //Hours worked by employee to be passed to structure
	float rate; //Hourly rate of employee to be passed to structure
	Employee e1; //Declaration of Employee structure

	Input(name, hours, rate);
	e1.name = name;
	e1.hours = hours;
	e1.rate = rate;

	Output(e1);
}

//Prompts user for employee information as input
//Passes all 3 variables by reference back to main to be passed to the structure
void Input(string& name, float& hours, float& rate)
{
	cout << "Enter employee name: ";
	getline(cin, name);
	cout << "\nEnter hours worked: ";
	cin >> hours;
	cout << "\nEnter hourly rate: ";
	cin >> rate;
}

//Calculates employee wage or gross pay by multiplying employee's hours and hourly rate
float Process(float hours, float rate)
{
	return hours * rate;
}

//Displays employee information and grosspay by using structure
void Output(Employee e1)
{
	float grosspay;
	grosspay = Process(e1.hours, e1.rate);

	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\nEmployee Name: \t\t" << e1.name << endl;
	cout << "\nHours Worked: \t\t" << e1.hours << endl;
	cout << "Hourly Rate: \t\t$" << e1.rate << endl;
	cout << "\nWages: \t\t\t$" << grosspay << endl;
}