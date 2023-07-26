#include <iostream>
using namespace std;
// Inheritence
//  base clas = super class/parent
//  derived class = child class/sub class
//  parent have some attributes , if a class need attributes of upper class than it is derived
//  please see below a parent class called devloper
//  once you use your constructor , defaukt constructtor gets off you need to make constructor for every clas now

class AbstractEmployee
{
    virtual void askforpromotion() = 0;
}

class Employee : AbstractEmployee
{
    // private and public are modifiers
private:
    // the below properities are encapsulated
    // string Name;
    string company;
    int age;
protected:
    string Name;
    // when it is protected it can be ascessed by the child class direcctly , private properites are not done so

public:
    // setter
    void setName(string name)
    {
        Name = name;
    }
    // getter
    void getName()
    {
        return Name;
    }
    // conditional setter
    void setAge(int age)
    {
        if (age >= 18)
            age = age;
    }
    // getter
    void getAge()
    {
        return age;
    }

    void Introduce()
    {
        cout << "Namew" << Name;
    }
    // constructor

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void askforpromotion()
    {
        if (age > 30)
        {
            cout << Name << "got promoted"
        }
        else
        {
            cout << "denied" << endl;
        }
    }
};

class devloper : Employee
{

    // devloper become child class and employee become parent class
    // child class donot inherit private properties of parent class
public:
    string favprogramminglanguage;
    devloper(string name, string company, int age, string favprogramminglanguage)
    {
        // we can pass name , compnay , age to the constructor of parent class
   :Employee(name , company , age)
   {
       favprogramminglanguage = favprogramminglanguage;
   }
    }
};
int main()
{

    // invoking a constructor

    devloper d = devloper("krita", "ama", 45, "c++");
}