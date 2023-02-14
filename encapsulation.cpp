#include <iostream>
using namespace std;

class Employee
{

private:
    // we bunch all our variables in private so that only the class members can access it
    string name;
    string company;
    int age;
public:
    void setname(string setname)
    {
        name=setname;
    }

    string getname()
    {
        return name;
    }

    void setcompany(string setcompany)
    {
        company=setcompany;
    }

    string getcompany()
    {
        return company;
    }

    void setage(int setage)
    {
        if (setage >= 18)
        {
            age = setage;
        }
    }

    int getage()
    {
        return age;
    }

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

    Employee employee3;
    employee3.IntroduceYourself();

    emmployee1.setage(58);
    cout<<emmployee1.getage();

    return 0;
}