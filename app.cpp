#include <iostream>
#include <string>

//Project Classes for the system

class Student {

    //Student Menu:

    public: 
        void studentMenu () {
        std::cout << "\n";
        std::cout << "Student Menu: \n";
        std::cout << "1. View Enrolled Courses \n";
        std::cout << "2. View Student Information \n";
        std::cout << "3. Enroll in a Course \n";
        std::cout << "4. Unenroll from a Course \n";
        std::cout << "0. Exit Application \n";
        std::cout << "Enter your choice: ";
        std::cout << "\n";
        };
    
    public:
        std::string Fname;
        std::string Lname;
        std::string DegreeType;
        std::string GPA;
        std::string NumberOfClasses;
    
    private:
        std::string HomeAdress;
        std::string SocialSecurity;
        std::string PhoneNumber;
        std::string Email; 
    
};

class Instructor {
    public: 

    void instructorMenu() {
    std::cout << "\n";
    std::cout << "Instructor Menu: \n";
    std::cout << "1. View Enrolled Courses \n";
    std::cout << "2. View Enrolled Students \n";
    std::cout << "3. Search Student Information \n";
    std::cout << "0. Exit Application \n";
    std::cout << "Enter your choice: ";
    std::cout << "\n";
    };

};

class Admin {

    public:
    void adminMenu(){
    std::cout << "\n";
    std::cout << "Administrator Menu \n";
    std::cout << "1. Add a Course \n";
    std::cout << "2. View Courses \n";
    std::cout << "3. Update Course \n";
    std::cout << "4. Delete Course \n";
    std::cout << "0 Exit Application \n";
    std::cout << "Enter your choice: ";
    std::cout << "\n";
    };
};


void rolesMenu() {
    std::cout << "Choose your role:\n";
    std::cout << "1. Student\n";
    std::cout << "2. Administrator\n";
    std::cout << "3. Instructor\n";
    std::cout << "0. Exit Application \n";
    std::cout << "Enter your choice: ";
}; 

int main () {

    Student student;
    Instructor instructor;
    Admin admin; 

    int input;

    std::cout << "Student Enrollment System: \n"; 
    rolesMenu();
    std::cin >> input;

    if (input == 1) {
        student.studentMenu();
    }
    else if (input == 2) {
        admin.adminMenu();
    }
    else if (input == 3) {
        instructor.instructorMenu(); 
    }
    else {
        std::cout << "You Exited the Application";
        return 0;   
    };

};