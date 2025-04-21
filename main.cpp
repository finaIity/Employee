#include <iostream>
#include "Employee.h"

int main() {
    Employee emp1("Alice", "Smith", 3000);
    Employee emp2("Bob", "Johnson", 4000);

    //init yearly salary
    std::cout << emp1.getFirstName() << " " << emp1.getLastName()
              << " - Yearly Salary: $" << emp1.getYearlySalary() << std::endl;

    std::cout << emp2.getFirstName() << " " << emp2.getLastName()
              << " - Yearly Salary: $" << emp2.getYearlySalary() << std::endl;

    //10% raise
    emp1.giveRaise(10);
    emp2.giveRaise(10);

    //updated salaries
    std::cout << "\nAfter 10% raise:\n";

    std::cout << emp1.getFirstName() << " " << emp1.getLastName()
              << " - Yearly Salary: $" << emp1.getYearlySalary() << std::endl;

    std::cout << emp2.getFirstName() << " " << emp2.getLastName()
              << " - Yearly Salary: $" << emp2.getYearlySalary() << std::endl;

    return 0;
}
