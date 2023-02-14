#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string company;
    int age;

    void IntroduceYourself()
    {
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : " << age << endl;
    }
    // default constructors
    Employee()
    {
        name="NA";
        company="NA";
        age=00;
    }
    // Parametrized constructor
    Employee(string argname, string argcompany, int a)
    {
        name=argname;
        company=argcompany;
        age=a;
    }
};

int main()
{
    Employee emmployee1("Ashish","Microsoft",22);
    
    emmployee1.IntroduceYourself();
    
    Employee employee2("Pragya","OpenAi",27);

    employee2.IntroduceYourself();

    return 0;
}
