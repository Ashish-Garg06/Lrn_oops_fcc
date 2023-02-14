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
};

int main()
{
    Employee emmployee1;
    emmployee1.name = "Ashish";
    emmployee1.company = "OpenAi";
    emmployee1.age = 22;
    
    emmployee1.IntroduceYourself();
    
    Employee employee2;
    employee2.name="pragya";
    employee2.company="Microsoft";
    employee2.age=1587;

    employee2.IntroduceYourself();

    return 0;
}
