// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Pointer_ref.h"
#include <iostream>
using namespace std;
int main()
{
    //strut with pointers

    struct Student s, * ptr;
    ptr = &s;
    // Taking inputs
    //printf("Enter the Roll Number of Student\n");
    //scanf("%d", &ptr->roll_no);
    //printf("Enter Name of Student\n");
    //scanf("%s", &ptr->name);
    //printf("Enter Branch of Student\n");
    //scanf("%s", &ptr->branch);
    //printf("Enter batch of Student\n");
    //scanf("%d", &ptr->batch);

    // Displaying details of the student
    //printf("\nStudent details are: \n");

    //printf("Roll No: %d\n", ptr->roll_no);
    //printf("Name: %s\n", ptr->name);
    //printf("Branch: %s\n", ptr->branch);
    //printf("Batch: %d\n", ptr->batch);


    int* pt = nullptr;
    cout << *pt << endl;


    
    return 0;
}
