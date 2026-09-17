#include <iostream>
#include <string>

/*
    In this File, you will the the different menus
    that will be presented to each viewer depending 
    on the option they choose. 
*/

void rolesMenu() {

    std::cout << "Choose your role:\n";
    std::cout << "1. Student\n";
    std::cout << "2. Administrator\n";
    std::cout << "3. Instructor\n";
    std::cout << "0. Exit Application \n";
    std::cout << "Enter your choice: ";
    std::cout << "\n";
}; 

void instructorMenu() {

    std::cout << "Instructor Menu: \n";
    std::cout << "1. View Enrolled Courses \n";
    std::cout << "2. View Enrolled Students \n";
    std::cout << "3. Search Student Information \n";
    std::cout << "0. Exit Application \n";
    std::cout << "Enter your choice: ";
    std::cout << "\n";
};

void studentMenu () {

    std::cout << "Student Menu: \n";
    std::cout << "1. View Enrolled Courses \n";
    std::cout << "2. Enroll in a Course \n";
    std::cout << "3. Unenroll from a Course \n";
    std::cout << "0. Exit Application \n";
    std::cout << "5. Enter your choice: ";
    std::cout << "\n";

};

void adminMenu(){
    std::cout << "Administrator Menu \n";
    std::cout << "1. Add a Course \n";
    std::cout << "2. View Courses \n";
    std::cout << "3. Update Course \n";
    std::cout << "4. Delete Course \n";
    std::cout << "0 Exit Application \n";
    std::cout << "Enter your choice: ";
    std::cout << "\n";
};

int main () {

    int input;

    std::cout << "Student Enrollment System:"; 
    rolesMenu();
    std::cin >> input;

    if (input == 1) {
        studentMenu();
    }
    else if (input == 2) {
        adminMenu();
    }
    else if (input == 3) {
        instructorMenu(); 
    }
    else {
        std::cout << "You Exited the Application";
        return 0;   
    };

};