#include<iostream>
#include<cstring>
#include"student.cpp"
// Toqa Hatem Moustafa            202001766
// Nada Osama Fikry               202002277
// Merna Medhat Mostafa           202002266
// Moura Saber Ayoub              202002645
// Mohammed Ashraf Abdulsami      202002700
int main(){
    char postgradjobtitle[20];
    int n_students, n_courses, n_pgstudents;
    cout<<"Enter the number of students: ";
    cin >> n_students;
    cout<<"Enter the number of courses to register: ";
    cin>>n_courses;
    cout<<"Enter the number of post-graduate students: ";
    cin>>n_pgstudents;
    cin.get();
    CStudent student[n_students]; //intializes the array of students of class CStudents
    CCourse courses[n_courses];  // intializes tha array of courses of class CCourse
    CPG_Student PG_students[n_pgstudents];
    cout<<"Students: "<<endl;
    for (int i = 0; i<n_students; i++){ //students registring loop
        student[i].registerStudent();
        cout<< "The student has been registerd.\n"<<endl;
        student[i].calculateGPA();
    }
    cout<<"Courses: "<<endl;
    for (int i = 0; i<n_courses; i++){ //Courses registring loop
        courses[i].AddCourse();
    }
    cout<<"Postgraduate students: "<<endl;
    for(int i = 0; i<n_pgstudents;i++){
        PG_students[i].registerStudent();
        cout<<"Enter the job title of postgraduate student no. "<<i+1<<endl;
        cin.get(postgradjobtitle, 20);
        cin.get();
        PG_students[i].setStudentJobTitle(postgradjobtitle);
    }
    cout<<"\nRegistered students: "<<endl;
    for (int i = 0; i<n_students; i++){ // prints the students information
        student[i].getStudentInfo();
    }
    cout<<"\nRegistered courses: "<<endl;
    for(int i = 0 ; i<n_courses ; i++){ // prints the courses information
        courses[i].getCourseInfo();
    }
    cout<<"\nRegistered postgraduate students: "<<endl;
    for(int i = 0; i<n_pgstudents;i++){
        PG_students[i].getStudentInfo();
        cout<<"Postgraduate's job title: "<<PG_students[i].getStudentJobTitle()<<endl;
    }
}