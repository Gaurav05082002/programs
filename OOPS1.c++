#include <iostream>
using namespace std;
// in c++ bydefault all attributes of class are private 
// access modifires
// privartte  , public , protected
// private will not be accessible out of the class 
// public are accessible 
// protected are betwwen 
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
};
int main(){
    Employee employee1;
    employee1.Name = "gaurav";
    employee1.company= "yt";
    employee1.age=21;
    employee1.Introduce();

}