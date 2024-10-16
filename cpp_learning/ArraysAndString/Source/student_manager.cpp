 #include <iostream>
#include <algorithm>
#include "student_manager.h"

// Constructor
StudentManager::StudentManager() : studentCount(0) {}

// Adding a student to static arrays
void StudentManager::addStudent(const std::string& name, double grade) {
    if (studentCount < MAX_STUDENTS) {
        names[studentCount] = name;
        grades[studentCount] = grade;
        studentCount++;
    }
    else {
        std::cout << "Static student list is full. Cannot add more students.\n";
    }
}

// Adding a student to dynamic arrays
void StudentManager::addDynamicStudent(const std::string& name, double grade) {
    dynamicNames.push_back(name);
    dynamicGrades.push_back(grade);
}

// Display static students
void StudentManager::displayStudents() const {
    std::cout << "Static Students:\n";
    for (int i = 0; i < studentCount; i++) {
        std::cout << names[i] << " - " << grades[i] << "\n";
    }
}

// Display dynamic students
void StudentManager::displayDynamicStudents() const {
    std::cout << "Dynamic Students:\n";
    for (size_t i = 0; i < dynamicNames.size(); i++) {
        std::cout << dynamicNames[i] << " - " << dynamicGrades[i] << "\n";
    }
}

// Sort static students based on grades (descending order)
void StudentManager::sortStudents() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = i + 1; j < studentCount; j++) {
            if (grades[i] < grades[j]) {
                std::swap(grades[i], grades[j]);
                std::swap(names[i], names[j]);
            }
        }
    }
}

// Sort dynamic students based on grades (descending order)
void StudentManager::sortDynamicStudents() {
    for (size_t i = 0; i < dynamicNames.size() - 1; i++) {
        for (size_t j = i + 1; j < dynamicNames.size(); j++) {
            if (dynamicGrades[i] < dynamicGrades[j]) {
                std::swap(dynamicGrades[i], dynamicGrades[j]);
                std::swap(dynamicNames[i], dynamicNames[j]);
            }
        }
    }
}
