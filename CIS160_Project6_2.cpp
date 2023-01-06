/*
	Name: Miguel Juarez
	Date: 12/22/2022
	Class: CIS 160 Fundamentals of Computer Science I
	Project Name: Payroll by Class
	Description: Program calculates payroll by using classes
*/

//Preprocessor directives needed for program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*Employee class that holds employee's name, hours worked, and hourly rate
Null constructor and destructor
Private function used to clculate gross pay
Public functions used to set data members and print out employee information*/
class Employee
{
	private:
		string name;
		float hours;
		float rate;

		float grosspay(float, float);
	
	public:
		Employee()
		{
		}

		~Employee()
		{
		}

		void setEmployee();
		void printEmployee();
};



int main()
{
	Employee e1; //Object of Employee class

	e1.setEmployee();
	e1.printEmployee();
}

//Prompts user for employee information as input and passes them to data members
void Employee::setEmployee()
{
	cout << "Enter employee name: ";
	getline(cin, name);
	cout << "\nEnter hours worked: ";
	cin >> hours;
	cout << "\nEnter hourly rate: ";
	cin >> rate;
}

//Calculates and returns employee wage or gross pay by multiplying employee's hours and hourly rate
float Employee::grosspay(float hours, float rate)
{
	return hours * rate;
}

//Displays employee information and grosspay by using class
void Employee::printEmployee()
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\nEmployee Name: \t\t" << name << endl;
	cout << "\nHours Worked: \t\t" << hours << endl;
	cout << "Hourly Rate: \t\t$" << rate << endl;
	cout << "\nWages: \t\t\t$" << grosspay(hours, rate) << endl;
}