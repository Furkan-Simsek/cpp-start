#include <iostream>


class calculate {
    public:
        int width;
        int height;
        int area;

        void setValues(){
            int w,h;
            std::cout << "Enter a width: ";
            std::cin >> w;
            std::cout << "Enter a height: ";
            std::cin >> h;
            this->width = w;
            this->height = h;
        }

        void areaCalc(){
            this->area = this->width * this->height;
            std::cout << "Area: " << this->area << std::endl;
        }

};


class TeacherAndStudent {
    public:
        std::string name;
        int id;
        int age;
};

class teacher : public TeacherAndStudent {
    public:
        std::string branch;

        teacher(std::string name, std::string branch, int id, int age){
            this->name = name;
            this->branch = branch;
            this->id = id;
            this->age = age;
        }
        void printInfo(){
            std::cout << "\n - Teacher Info - " << std::endl;
            std::cout << "Name: " << this->name << std::endl;
            std::cout << "Branch: " << this->branch << std::endl;
            std::cout << "ID: " << this->id << std::endl;
            std::cout << "Age: " << this->age << std::endl;
        }
};

class student : public TeacherAndStudent {
    public:
        int grade;

        student(std::string name, int age, int grade, int id){
            this->name = name;
            this->age = age;
            this->grade = grade;
            this->id = id;
        }

        void printInfo(){
            std::cout << "\n - Student Info - " << std::endl;
            std::cout << "Name: " << this->name << std::endl;
            std::cout << "Age: " << this->age << std::endl;
            std::cout << "Grade: " << this->grade << std::endl;
            std::cout << "ID: " << this->id << std::endl;
        }
};

int main()
{
    
    // calculate calc; // I create a object
    // calc.setValues();
    // calc.areaCalc();
    
    student student1("Furkan Şimşek", 14, 8, 1);
    teacher teacher1("Furkan Şimşek", "Computer Science", 1, 14);
    student1.printInfo();
    std::cout << std::endl;
    teacher1.printInfo();
    return 0;
}