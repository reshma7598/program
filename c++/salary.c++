#include<iostream>
using namespace std;
class Employee{     
    private:   //private data member
    int Salary;

   public:
 void setSalary(int s) {    //This function sets the value of the 'salary' member variable to the value passed as an argument.
      Salary = s;
}
 int getSalary() {     //This function retrieves the value of the 'salary' member variable
      return Salary;
    }
};
int main(){
      Employee obj;   //class object
 obj.setSalary(45000);    //obj nu value declare cheyaan 
  cout << obj.getSalary();    //printng
  return 0;
}