#include <iostream>
#include "employee_manager.h"

int main() {
    EmployeeManager manager;

    // Adding employees to the manager
    manager.addEmployee(101, "Alice", 50000);
    manager.addEmployee(102, "Bob", 70000);
    manager.addEmployee(103, "Charlie", 45000);
    manager.addEmployee(104, "David", 60000);
    manager.addEmployee(105, "Eve", 55000);

    // Display employees before sorting
    std::cout << "Employees before sorting:\n";
    manager.displayEmployees();

    // Sort employees by salary (descending)
    manager.sortEmployeesBySalary();

    // Display employees after sorting
    std::cout << "\nEmployees after sorting by salary (descending):\n";
    manager.displayEmployees();

    // Search for an employee by ID
    int searchID = 104;
    Employee* foundEmployee = manager.searchEmployeeByID(searchID);

    if (foundEmployee) {
        std::cout << "\nEmployee found: ID: " << foundEmployee->id
            << ", Name: " << foundEmployee->name
            << ", Salary: " << foundEmployee->salary << "\n";
    }
    else {
        std::cout << "\nEmployee with ID " << searchID << " not found.\n";
    }

    return 0;
}
