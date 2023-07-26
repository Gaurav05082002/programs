#include <iostream>
using namespace std;
// Employee employee1;
//     employee1.Name = "gaurav";
//     employee1.company= "yt";
//     employee1.age=21;
//     employee1.Introduce();
    // in this way it is tough to create many employees
    // constructor is a methd that is invoked every time when a object of a class is created  
    // there is default constructor by complier
    //three following tules to make cnstructor  
    // 1>unlike other method constructor dont have return type
    // 2>constructor has same name as the class
    //  3> construcyor are genrally made public
    // once you made customized your constructor , defauolt constructor are gone 
class Employee{
    //model or blue print 
    //body of class
    //attributes
    //methods are function
    public:
    string Name;
    string company;
    int age;
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
    Employee employee1;
    employee1.Name = "gaurav";
    employee1.company= "yt";
    employee1.age=21;
    employee1.Introduce();
    

    //invoking a constructor
     Employee employee1 = Employee("gaurav" , "amazon" , 21);
     employee1.introduce();
}