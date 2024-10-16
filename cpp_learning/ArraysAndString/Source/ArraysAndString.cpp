#include <iostream>
#include "student_manager.h"

int main() {
    StudentManager manager;

    // Adding students to static array
    manager.addStudent("Alice", 85.0);
    manager.addStudent("Bob", 92.5);
    manager.addStudent("Charlie", 78.0);
    manager.addStudent("David", 89.5);
    manager.addStudent("Eve", 91.0);

    // Displaying students before sorting
    std::cout << "Before sorting (static array):\n";
    manager.displayStudents();

    // Sorting and displaying students based on grades
    manager.sortStudents();
    std::cout << "\nAfter sorting by grade (static array):\n";
    manager.displayStudents();

    // Adding students to dynamic array (vector)
    manager.addDynamicStudent("Frank", 88.0);
    manager.addDynamicStudent("Grace", 93.5);
    manager.addDynamicStudent("Hank", 72.0);

    // Displaying dynamic students before sorting
    std::cout << "\nBefore sorting (dynamic vector):\n";
    manager.displayDynamicStudents();

    // Sorting dynamic students
    manager.sortDynamicStudents();
    std::cout << "\nAfter sorting by grade (dynamic vector):\n";
    manager.displayDynamicStudents();

    return 0;
}
