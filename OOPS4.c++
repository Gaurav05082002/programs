#include <iostream>
using namespace std;
// Abstraction
//  in case of smart phones you need not to know what logic is working behined when you click a picture , for you its just clicking a picture
//  we have to show pretty interface and not the complex logic
//  this way of hiding complex logic is called abstraction
class AbstractEmployee{
    virtual void askforpromotion()=0;
    //this function is pure virtual function or abstact function
    //whichever class decide to sign this contract will need to provide implementation of askforpromotion()=0;
}



class Employee: AbstractEmployee{
    // private and public are modifiers
private:
    // the below properities are encapsulated
    string Name;
    string company;
    int age;

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
    void askforpromotion(){
        if(age>30){
           cout<<Name<<"got promoted"
        }
        else{
            cout<<"denied"<<endl;
        }
    }

};
int main()
{

    // invoking a constructor
    Employee employee1 = Employee("gaurav", "amazon", 21);
     employee1.askforpromotion();
}