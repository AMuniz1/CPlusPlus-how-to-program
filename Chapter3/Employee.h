#include <string>
using std::string;
class Employee{
  private:
    string firstName;
    string lastName;
    int monthlySalary;
  public:
    Employee(string name, string lastname, int salary){
      setFirstName(name);
      setLastName(lastname);
      setMonthlySalary(salary);
    }
    //setters
    void setFirstName(string name){
      firstName = name;
    }
    void setLastName(string lastname){
      lastName = lastname;
    }
    void setMonthlySalary(int salary){
      monthlySalary = (salary > 0)? salary : 0;
    }
    //get a raise
    void percentRaise(int raise){
      monthlySalary = monthlySalary + (raise*monthlySalary)/100;
    }
    //getters
    string getFirstName() const{
      return firstName;
    }
    string getLastname() const{
      return lastName;
    }
    int getMonthlySalary() const{
      return monthlySalary;
    }
};
