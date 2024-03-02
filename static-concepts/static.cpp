#include <iostream>
#include <cstring>
// one pointer data member will illustrate one last concept
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student{
private:
    // data members
    string firstName;
    string lastName;
    char middleInitial;
    float gpa;
    string currentCourse;
    char *studentId;
    static int numStudents;
public:
    Student(); // default constructor
    Student(const string &, const string &, char, float, const string &, const char *);
    Student(const Student &); // Copy constructor;
    ~Student();
    void Print() const;
    const string &GetFirstName() const {
        return firstName;
    }
    const string &GetLastName() const {
        return lastName;
    }
    char GetMiddleInitial() const {
        return middleInitial;
    }
    float getGpa() const {return gpa;}
    const string &GetCurrentCourse() const {
        return currentCourse;
    }
    const char *GetStudentId() const {
        return studentId;
    }
    void SetCurrentCourse(const string &);
    static int GetNumberStudents(); // static member function
};

// definition for static data member
// (which is implemented as a external variable)
int Student::numStudents = 0; // notice initial value of 0 
                                // which is default for integral values
// Definition for static member functions
inline int Student::GetNumberStudents () {
    return numStudents;
}
inline void Student::SetCurrentCourse(const string &c){
    // far easier implementation to reset using a string
    currentCourse = c;
}
Student::Student() : middleInitial('\0'), gpa(0.0), studentId(nullptr) {
    numStudents++;
}
// Alternate constructor member function definition
Student::Student(const string &fn, const string &ln, char mi, float avg, const string &course, const char *id)
    : firstName(fn), lastName(ln), middleInitial(mi), gpa(avg), currentCourse(course) {
    studentId = new char[strlen(id) + 1];
    strcpy(studentId, id);
    numStudents++;
}

Student::Student(const Student &s) : firstName(s.firstName), lastName(s.lastName), middleInitial(s.middleInitial), gpa(s.gpa), currentCourse(s.currentCourse) {
    // Because studentId is a const char *, we can't change 
    // value pointed to directly! Temp helps with deep copy.
    char *temp = new char [strlen(s.studentId) + 1];
    strcpy(temp, s.studentId);
    studentId = temp;
    numStudents++;
}

Student::~ Student () {
    delete [] studentId;
    numStudents--; 
}
void Student::Print() const {
    cout << firstName << " " << middleInitial << ". ";
    cout << lastName << " with id:" << studentId;
    cout << " and gpa:" << gpa << " and is enrolled in: ";
    cout << currentCourse << endl;
}
int main() {
    Student s1("Nick", "Cole", 'S', 3.65, "C++", "112HAV");
    Student s2("Alex", "Tost", 'A', 3.78, "C++", "674HOP");
    cout << s1.GetFirstName() << " " << s1.GetLastName();
    cout << " Enrolled in" << s1.GetCurrentCourse();
    cout << endl;
    cout << s2.GetFirstName() << " " << s2.GetLastName();
    cout << " Enrolled in " << s2.GetCurrentCourse();
    cout << endl;
    // call a static member functions in the preferred manner
    cout << "There are " << Student::GetNumberStudents();

    cout << " students" << endl;
    // Though not preferrable,we could also use:
    return 0;
}
