#include "student.hpp"
Student::Student(){}
Student::~Student(){}


void Student::show() const{
    std::cout << studentName << " " << studentSurname << " " << studentGroup << " " << studentSpeciality << " ";
    for(int i = 0; i < subjects.getSubjectsSize() - 1; i++){
        std::cout << subjects[i] << " ";
    }
    for(int i = 0; i < audiences.getAudiencesSize() - 1; i++){
        std::cout << audiences[i] << " ";
    }
}
void Student::showName() const{
    std::cout << studentName << std::endl;
}
void Student::showSurname() const{
    std::cout << studentSurname << std::endl;
}
void Student::showGroup() const{
    std::cout << studentGroup << std::endl;
}
void Student::showSpeciality() const{
    std::cout << studentSpeciality << std::endl;
}
void Student::showSubjects() const{
    for(int i = 0; i < subjects.getSubjectsSize() - 1; i++){
        std::cout << subjects[i] << " ";
    }
}
void Student::showAudiences() const{
    for(int i = 0; i < audiences.getAudiencesSize() - 1; i++){
        std::cout << audiences[i] << " ";
    }
}
void Student::set(){
    std::cout << "Enter student's name: ";
    std::cin >> studentName;
    std::cout << "Enter student's surname: ";
    std::cin >> studentSurname;
    std::cin >> studentGroup;
    std::cin >> studentSpeciality;
    subjects.setSubjects();
    audiences.setAudiences();
}
void Student::set(std::string filename){
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
    std::cout << "Enter student's name: ";
    std::cin >> studentName;
}
void Student::setName(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentName;
    in.close();
}
void Student::setSurname(){
    std::cout << "Enter student's surname: ";
    std::cin >> studentSurname;
}
void Student::setSurname(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentSurname;
    in.close();
}
void Student::setGroup(){
    std::cin >> studentGroup;
}
void Student::setGroup(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentGroup;
    in.close();
}
void Student::setSpeciality(){
    std::cin >> studentSpeciality;
}
void Student::setSpeciality(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> studentSpeciality;
    in.close();
}
void Student::setSubjects(){
    subjects.setSubjects();
}
void Student::setSubjects(std::string filename){
    std::ifstream in;
    in.open(filename);
    subjects.setSubjects(in);
    in.close();
}
void Student::setAudiences(){
    audiences.setAudiences();
}
void Student::setAudiences(std::string filename){
    std::ifstream in;
    in.open(filename);
    audiences.setAudiences(in);
    in.close();
}
