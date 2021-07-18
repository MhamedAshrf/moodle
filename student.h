#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstring>
using namespace std;

class CStudent{ // Class CStudent body
    public: //public class member functions (setters and getters)
        CStudent(); //class constructor function
        void setStudentName(char * name);  //students name setter function
        void setStudentID(int id);  //students ID setter function
        void setStudentUserName(char* username); //students email username setter function
        void setStudentScore(float score); //students email score setter function
        void setStudentMajor(char* major); //studnets major setter function
        void setStudentPass(char* pass); //students password setter function
        char* getStudentName(); //students name getter function
        char* getStudentUserName();  //students ID getter function
        char* getStudentMajor(); //students email username getter function
        int getStudentID(); //students ID getter function   
        float getStudentScore(); //students score getter function
        void registerStudent();  //register students function
        void getStudentInfo();   //students information getter function
        void calculateGPA();   //calculates gpa for students
        ~CStudent();    // class distructor function

    private:  //private class variables
        char student_name[50];
        int student_ID;
        char student_email_username[10];
        char student_email_password[10];
        char student_major[10];
        float student_grades[5];
        float student_score;
};

class CCourse{ //class CCourses body
    public:  // public class member functions prototypes
        void setCourseName(char* name); //course name getter function
        char* getCourseName();  //course name setter function
        void setCourseCode(char* code);  //course code setter function
        char* getCourseCode(); //course code getter function
        void setCourseCost(float cost); //course cost setter function
        float getCourseCost(); //course cost getter function
        void AddCourse();  //add course member function(add courses)
        void getCourseInfo(); // course information getter function
        ~CCourse(); // class distructor fucntion

    private: // private class fucntions
        char course_name[20];
        char course_code[5];
        float course_cost;
};

class CPG_Student : public CStudent{
    public:
        void setStudentJobTitle(char* title);
        char * getStudentJobTitle();

    private:
        char pg_student_job_title[20];

};
#endif