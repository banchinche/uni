#include "student.hpp"
#pragma region Student
Student::Student(){}
Student::~Student(){}
void Student::show() const{
    std::cout << studentName << " " << studentSurname << " " << studentGroup << studentSpeciality;
    for(int i = 0; i < subjects.getSubjectsSize(); i++){
        std::cout << subjects[i];
    }
    std::cout << std::endl;
    for(int i = 0; i < audiences.getAudiencesSize(); i++){
        std::cout << audiences[i];
    }
    std::cout << std::endl;
}
void Student::show(const std::string filename) const{
    std::ofstream out;
    out.open(filename, std::ios::app);
    out << studentName << std::endl;
    out << studentSurname << std::endl;
    out << studentGroup << std::endl;
    out << studentSpeciality << std::endl;
    subjects.outSubjects(out);
    audiences.outAudiences(out);
    out.close();
}
void Student::sortSubjects()
{
    for (int i = 0; i < subjects.getSubjectsSize()- 1; i++) 
    {
        for (int j = 0; j < subjects.getSubjectsSize() - i - 1; j++)
        {
            if (subjects[j].get().compare(subjects[j + 1].get()) > 0) 
                std::swap(subjects[j], subjects[j + 1]);
        }
    }
}
void Student::set(){
    std::string varuable;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter student's name: ";
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->studentName = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
    flag = 1;
    while(flag){
        try{
            std::cout << "Enter student's surname: ";
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->studentSurname = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
    std::cin >> studentGroup;
    std::cin >> studentSpeciality;
	std::cout << "Enter the subjects that the student's studying" << std::endl;
    subjects.setSubjects();
	std::cout << "Enter the auditories in which the student takes classes" << std::endl;
    audiences.setAudiences();
    std::cin.ignore();
}
void Student::set(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentName;
    in >> studentSurname;
    in >> studentGroup;
    in >> studentSpeciality;
    subjects.setSubjects(in);
    audiences.setAudiences(in);
    in.close();
}
void Student::setName(){
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter student's name: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->studentName = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
}
void Student::setName(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentName;
    in.close();
}
void Student::setSurname(){
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter student's surname: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->studentSurname = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
}
void Student::setSurname(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentSurname;
    in.close();
}
void Student::setGroup(){
    std::cin >> studentGroup;
}
void Student::setGroup(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentGroup;
    in.close();
}
void Student::setSpeciality(){
    std::cin >> studentSpeciality;
}
void Student::setSpeciality(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentSpeciality;
    in.close();
}
void Student::setSubjects(){
    subjects.setSubjects();
}
void Student::setSubjects(const std::string filename){
    std::ifstream in;
    in.open(filename);
    subjects.setSubjects(in);
    in.close();
}
void Student::setAudiences(){
    audiences.setAudiences();
}
void Student::setAudiences(const std::string filename){
    std::ifstream in;
    in.open(filename);
    audiences.setAudiences(in);
    in.close();
}
#pragma endregion
#pragma region Students
Students::Students(){}
Students::Students(const int size){
    this->studentsSize = size;
    students = new Student[studentsSize];
}
Students::~Students()
{
    delete[] students;
}
void Students::showStudents(){
    for (int i = 0; i < studentsSize; i++)
        students[i].show();
}
Student & Students::operator[](const int number) const{
    return students[number];
}
void Students::setStudents(){
    for (int i = 0; i < studentsSize; i++)
        students[i].set();
}
void Students::setStudents(const std::string filename){
    for (int i = 0; i < studentsSize; i++)
        students[i].set(filename);
}
void Students::outStudents() const{
    for (int i = 0; i < studentsSize; i++)
        students[i].show();
}
void Students::outStudents(const std::string filename) const{
    for (int i = 0; i < studentsSize; i++)
        students[i].show(filename);
}
void Students::sortStudentsSubjects(){
    for (int i = 0; i < studentsSize; i++)
        students[i].sortSubjects();
}
int Students::getStudentsSize() const
{
    return studentsSize;
}
void Students::setStudentsSize(){
    int size;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter a number of students: ";
            std::cin >> size;
            if(size > 10)throw TooMuchDimension();
            else this->studentsSize = size;
        }
        catch(TooMuchDimension){
            std::cerr << "Too much dimension.\n";
        }
    }
}
#pragma endregion