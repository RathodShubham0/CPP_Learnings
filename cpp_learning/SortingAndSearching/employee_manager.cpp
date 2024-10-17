#include <iostream>
#include <cstdlib> // for qsort and bsearch
#include "employee_manager.h"

// Add an employee to the list
void EmployeeManager::addEmployee(int id, const std::string& name, double salary) {
    employees.push_back({ id, name, salary });
}

// Display all employees
void EmployeeManager::displayEmployees() const {
    for (const auto& employee : employees) {
        std::cout << "ID: " << employee.id << ", Name: " << employee.name
            << ", Salary: " << employee.salary << "\n";
    }
}

// Compare function for qsort (sort employees by salary in descending order)
int EmployeeManager::compareSalary(const void* a, const void* b) {
    const Employee* empA = static_cast<const Employee*>(a);
    const Employee* empB = static_cast<const Employee*>(b);
    if (empA->salary < empB->salary) return 1;
    if (empA->salary > empB->salary) return -1;
    return 0;
}

// Sort employees by salary using qsort
void EmployeeManager::sortEmployeesBySalary() {
    qsort(&employees[0], employees.size(), sizeof(Employee), compareSalary);
}

// Compare function for binary search (search by ID)
int EmployeeManager::compareID(const void* a, const void* b) {
    const int* idA = static_cast<const int*>(a);
    const Employee* empB = static_cast<const Employee*>(b);
    return (*idA - empB->id);
}

// Search for an employee by ID using binary search
Employee* EmployeeManager::searchEmployeeByID(int id) {
    return static_cast<Employee*>(bsearch(&id, &employees[0], employees.size(),
        sizeof(Employee), compareID));
}
