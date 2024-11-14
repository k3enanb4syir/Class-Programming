#include <iostream>
#include <string>
using namespace std;

struct Student {
    int batch;
    string faculty;
    long int univID;
    string facultyID;
};

int main()
{
    
    Student students [5];
    
    students[0].batch = 23;
    students[0].faculty = "HK";
    students[0].univID = 175778;
    students[0].facultyID = "09516";
    
    students[1].batch = 24;
    students[1].faculty = "TK";
    students[1].univID = 191217;
    students[1].facultyID = "09717";
    
    students[2].batch = 24;
    students[2].faculty = "PA";
    students[2].univID = 191217;
    students[2].facultyID = "09929";
    
    students[3].batch = 23;
    students[3].faculty = "PPA";
    students[3].univID = 2717;
    students[3].facultyID = "01235";
    
    students[4].batch = 22;
    students[4].faculty = "SPA";
    students[4].univID = 4515;
    students[4].facultyID = "03757";
    
    for (int i=0; i < 5 ; i++){
        cout << "Student: " << i + 1 << endl;
        
        string batchStr = to_string (students[i].batch);
        string academic_year = "20##";
        academic_year.replace(2,2, batchStr);
        
        cout << "Academic year = " << academic_year << endl;
        cout << "Status/Faculty = " << students[i].faculty << endl;
        cout << "University ID = " << students[i].univID << endl;
        cout << "Faculty ID = " << students[i].facultyID << endl;
        cout << "" << endl;
    }
    
    
    return 0;
    
}