#include <iostream>
using namespace std;

// Define a class named "Employee"
class Employee
{
public:
    // Declare public data members
    string name;
    string company;
    int age;

    // Declare a public member function to introduce the employee
    void IntroduceYourself()
    {
        // Output the employee's name, company, and age to the console
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : " << age << endl;
    }

    // Define a default constructor for the Employee class
    Employee()
    {
        // Set default values for the data members
        name = "NA";
        company = "NA";
        age = 00;
    }

    // Define a parameterized constructor for the Employee class
    Employee(string argname, string argcompany, int a)
    {
        // Initialize the data members using the values provided as arguments
        name = argname;
        company = argcompany;
        age = a;
    }
};

// Define the main function
int main()
{
    // Create a new Employee object named "employee1" using the parameterized constructor
    Employee employee1("Ashish", "Microsoft", 22);

    // Call the "IntroduceYourself" method of the employee1 object
    employee1.IntroduceYourself();
    Employee employee2("Pragya", "OpenAi", 27);
    employee2.IntroduceYourself();

    // Create a new Employee object named "employee3" using the default constructor
    Employee employee3;

    // Call the "IntroduceYourself" method of the employee3 object
    employee3.IntroduceYourself();
    return 0;
}