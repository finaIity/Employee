#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;

public:
    Employee(const std::string &first, const std::string &last, int salary);

    //set
    void setFirstName(const std::string &first);
    void setLastName(const std::string &last);
    void setMonthlySalary(int salary);

    //get
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonthlySalary() const;

    int getYearlySalary() const;

    //raise salary
    void giveRaise(double percent);
};
#endif
