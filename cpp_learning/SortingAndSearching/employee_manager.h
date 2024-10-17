#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H

#include <string>
#include <vector>

// Structure representing an employee
struct Employee {
    int id;
    std::string name;
    double salary;
};

// EmployeeManager class declaration
class EmployeeManager {
private:
    std::vector<Employee> employees;

public:
    // Add an employee
    void addEmployee(int id, const std::string& name, double salary);

    // Display all employees
    void displayEmployees() const;

    // Sort employees by salary in descending order
    void sortEmployeesBySalary();

    // Search for an employee by ID using binary search
    Employee* searchEmployeeByID(int id);

    // Static comparison function for qsort (for sorting by salary)
    static int compareSalary(const void* a, const void* b);

    // Static comparison function for binary search (by ID)
    static int compareID(const void* a, const void* b);
};

#endif // EMPLOYEE_MANAGER_H
