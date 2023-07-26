#include <iostream>
using namespace std;
// 4 most impottant principl e in OOPS
// 1>Encapsulation
// 2>Abstrction
// 3> Inheritence 
// 4> polymorphism
// Encapsulation > buind together the data ans the method apply on them put it together in class
// we do it remove direct access of other to modify or use content of our class
// i will provide diffrent function to intreect with some specificat peoperite and method of my class (i.e indirect)
// getters and setters are used 
// this getters and setters are used to intereact with encapsulated private properties but we can make them conditioned that is we can make if we want only 18+ to get Name , something like this 



class Employee{
    //private and public are modifiers
    private:
    // the below properities are encapsulated
     string Name;
    string company;
    int age;
    public:
    //setter
    void setName(string name){
        Name = name;
    }
    //getter
    void getName(){
        return Name;
    }
    //conditional setter
    void setAge(int age){
            if(age>=18)
         age=age;
    }
    //getter
    void getAge(){
        return age;
    }
    
    void Introduce(){
        cout<<"Namew"<<Name;
    }
    // constructor 
    Employee( string name , string company , int age ){
        Name = name;
        Company = company;
        Age = age;

    }
};
int main(){
   

    //invoking a constructor
     Employee employee1 = Employee("gaurav" , "amazon" , 21);
     employee1.getName();

}