#include <iostream>
#include <string>

using namespace std;

class iStudent //Abstraction
{
    virtual void switchCourses() = 0; 
};

class Student : iStudent
{
    protected: //Encapsulation
        string name;
        string school;
        int age;
        double mark;

    public:
        Student(string studentName, string studentSchool, int studentAge)
        {
            name = studentName;
            school = studentSchool;
            age = studentAge;
            mark = 0;
        }

        string getName()
        {
            return name;
        }

        void setName(string studentName)
        {
            name = studentName;
        }

        string getSchool()
        {
            return school;
        }

        void setSchool(string studentSchool)
        {
            school = studentSchool;
        }

        int getAge()
        {
            return age;
        }

        void setAge(int studentAge)
        {
            age = studentAge;
        }

        double getMark()
        {
            return mark;
        }

        void setMark(double studentMark)
        {
            mark = studentMark;
        }

        void description()
        {
            cout << "Name - " << name << endl;
            cout << "School - " << school << endl;
            cout << "Age - " << age << endl;
        }

        virtual void doWork() //Polymorphism (when a parent class reference is used to refer to a child class object)
        {
            cout << name << " is studying school work" << endl;
        }

        void switchCourses()
        {
            if (mark >= 4.5)
            {
                cout << name << ", you can switch courses!" << endl;
            }
            else
            {
                cout << name << ", you can't switch courses..." << endl;
            }
            
        }
};

class UniStudent : public Student //Inheritance
{
    public:
        string major;
        UniStudent(string studentName, string studentSchool, double studentAge, string studentMajor) : Student(studentName, studentSchool, studentAge)
        {
            major = studentMajor;
        }
        
        void switchCourses()
        {
            if (mark >= 4.5)
            {
                cout << name << ", you can switch courses!" << endl;
            }
            else
            {
                cout << name << ", you can't switch courses..." << endl;
            }
            
        }

        void doWork() //Polymorphism (when a parent class reference is used to refer to a child class object)
        {
            cout << name << " is studying uni work" << endl;
        }
};

class PostGradStudent : public Student
{
    public:
        string thesis;

        PostGradStudent(string studentName, string studentSchool, double studentAge, string studentThesis) : Student(studentName, studentSchool, studentAge)
        {
            thesis = studentThesis;
        }

        void startThesis()
        {
            cout << name << " has started a thesis on " << thesis << endl;
        }

        void switchCourses()
        {
            if (mark >= 4.5)
            {
                cout << name << ", you can switch your thesis!" << endl;
            }
            else
            {
                cout << name << ", you can't your thesis..." << endl;
            }
            
        }

        void doWork() //Polymorphism (when a parent class reference is used to refer to a child class object)
        {
            cout << name << " is studying postgrad work" << endl;
        }
};

int main()
{
    Student student = Student("Bob", "Stonewall University", 20);
    student.switchCourses();
    student.setMark(4.6);
    student.switchCourses();
    student.doWork();

    UniStudent uniStudent = UniStudent("Bob", "Stonewall University", 20, "IT");
    uniStudent.switchCourses();
    uniStudent.setMark(2.2);
    uniStudent.switchCourses();
    uniStudent.doWork();

    PostGradStudent pGS = PostGradStudent("Jane", "Stonewall University", 22, "AI and Robots");
    pGS.switchCourses();
    pGS.setMark(5.0);
    pGS.switchCourses();

    Student * s1 = &uniStudent;
    Student * s2 = &pGS;

    s1->doWork();
    s2->doWork();
}