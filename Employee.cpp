#include "Employee.h"

Employee::Employee(const std::string &first, const std::string &last, int salary) {
    firstName = first;
    lastName = last;
    monthlySalary = salary > 0 ? salary : 0;
}

//set
void Employee::setFirstName(const std::string &first) {
    firstName = first;
}

void Employee::setLastName(const std::string &last) {
    lastName = last;
}

void Employee::setMonthlySalary(int salary) {
    monthlySalary = salary > 0 ? salary : 0;
}

//get
std::string Employee::getFirstName() const {
    return firstName;
}

std::string Employee::getLastName() const {
    return lastName;
}

int Employee::getMonthlySalary() const {
    return monthlySalary;
}

//yearly salary calc
int Employee::getYearlySalary() const {
    return monthlySalary * 12;
}

//10% salary increase
void Employee::giveRaise(double percent) {
    if (percent > 0) {
        monthlySalary += static_cast<int>(monthlySalary * (percent / 100));
    }
}
