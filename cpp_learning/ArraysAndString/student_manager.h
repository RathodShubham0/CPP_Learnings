#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <string>
#include <vector>

class StudentManager {
private:
    static const int MAX_STUDENTS = 5;  // Fixed size for static array
    std::string names[MAX_STUDENTS];    // Fixed-size array for student names
    double grades[MAX_STUDENTS];        // Fixed-size array for student grades
    int studentCount;

    // Dynamic arrays using std::vector for additional students
    std::vector<std::string> dynamicNames;
    std::vector<double> dynamicGrades;

public:
    // Constructor to initialize the student manager
    StudentManager();

    // Method to add a student in the static arrays
    void addStudent(const std::string& name, double grade);

    // Method to add a student in the dynamic arrays
    void addDynamicStudent(const std::string& name, double grade);

    // Method to display all students in static arrays
    void displayStudents() const;

    // Method to display all students in dynamic arrays
    void displayDynamicStudents() const;

    // Method to sort the static students based on grades
    void sortStudents();

    // Method to sort dynamic students based on grades
    void sortDynamicStudents();
};

#endif // STUDENT_MANAGER_H

