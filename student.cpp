#include<iostream>
#include"student.h"

using namespace std;

CStudent :: CStudent(){                 // course constructor, intializes all class variables
    student_ID = student_score = 0;     // with zero for ints/floats and null for strings
    for (int i =0 ;i<5 ;i++){
        student_grades[i] = 0;
    }
    strcpy(student_name,"\0");
    strcpy(student_email_username, "\0");
    strcpy(student_email_password, "\0");
    strcpy(student_major, "\0");
}

void CStudent :: setStudentName(char * name){ //sets student_name to the name passed to it in the argument
    strcpy(student_name, name);
}

char* CStudent :: getStudentName(){ //returns the student_name
    return student_name;
}

void CStudent :: setStudentID(int id){ // sets the students_ID
    student_ID = id;
}

int CStudent :: getStudentID(){ // returns the student ID
    return student_ID;
}

void CStudent::setStudentUserName(char * username){ //sets the student_email_username
    strcpy(student_email_username, username);
}

char* CStudent :: getStudentUserName(){ //returns the student_email_username
    return student_email_username;
}

void CStudent :: setStudentPass(char* pass){ //sets student_email_password
    strcpy(student_email_password, pass);
}

void CStudent :: setStudentScore(float score){ //sets the student_score
    student_score = score;
}

float CStudent:: getStudentScore(){ // returns the student_score
    return student_score;
}

void CStudent :: setStudentMajor(char* major){ //sets the student_major
    strcpy(student_major, major);
}

char* CStudent::getStudentMajor(){ //gets the students
    return student_major;
}

void CStudent:: registerStudent(){ // inputs the variables of the class objects
    cout<< "Enter student name: "<<endl;
    cin.get(student_name,50);
    cout<< "Enter student ID: "<<endl;
    cin >> student_ID;
    cin.get();
    cout<<"Enter student major: "<<endl;
    cin.get(student_major,10);
    for (int i =0 ;i<5 ;i++){
        cout<< "Enter grade for course no."<<i+1<<endl;
        cin>>student_grades[i];
    }
    cin.get();
    cout<<"Enter student username: "<<endl;
    cin>> student_email_username;
    cin.get();
    cout<<"Enter student password: "<<endl;
    cin.get(student_email_password, 10);
    cin.get();
}

void CStudent :: getStudentInfo(){ //prints the student data to the console
    cout<<"Student Name: " << getStudentName() << endl
        << "Student ID: " << getStudentID() << endl
        << "Student Major: " << getStudentMajor() << endl
        << "Student Score: "<< getStudentScore() <<endl
        << "Student Username: "<< getStudentUserName()<<endl;
}

void CStudent :: calculateGPA(){ // calculates the students' GPA based on their grades in the student_grades
    int sum=0;
    for (int i = 0 ; i<5; i++){
        sum += student_grades[i];
    }
    student_score = sum/100;
}

CStudent :: ~CStudent(){ // student distructor function, sets all variable to zero and null
    student_ID = student_score = 0;
    for (int i =0 ;i<5 ;i++){
        student_grades[i] = 0;
    }
    strcpy(student_name, "\0");
    strcpy(student_email_username, "\0");
    strcpy(student_email_password, "\0");
    strcpy(student_major, "\0");
}

void CCourse :: setCourseName(char* name){ // sets the course_name 
    strcpy(course_name, name);
}

char* CCourse :: getCourseName(){ // returns the course_name
    return course_name;
}

void CCourse :: setCourseCode(char* code){ // sets the cours_code
    strcpy(course_code, code);
}

char* CCourse::getCourseCode(){ // returns the course_code
    return course_code;
}

void CCourse::setCourseCost(float cost){ //set the course_cost
    course_cost = cost;
}

float CCourse:: getCourseCost(){ //returns the course_cost
    return course_cost;
}

CCourse :: ~CCourse(){ // class distructor fucntion, sets all values to null and zero
    strcpy(course_name, "\0");
    strcpy(course_code, "\0");
    course_cost = 0;
}

void CCourse::AddCourse(){ // takes the input of the course info from the user
    cout<<"Enter course name: ";
    cin.get(course_name,20);
    cin.get();
    cout<<"Enter course code: ";
    cin.get(course_code,5);
    cin.get();
    cout<< "Enter course cost: ";
    cin>> course_cost;
    cout<<endl;
    cin.get();
}

void CCourse:: getCourseInfo(){ // outputs the information of the course from the user
    cout<< "The course name: "<<getCourseName()<< endl
        << "The course code: "<<getCourseCode()<<endl
        << "The course cost is: "<< getCourseCost()<<endl;
}


void CPG_Student:: setStudentJobTitle(char *title){ //sets pg_student_job_title
    strcpy(pg_student_job_title, title);
}

char * CPG_Student::getStudentJobTitle(){  //returns the value of pg_student_job_title
    return pg_student_job_title;
}