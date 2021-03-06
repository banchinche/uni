#include "teacher.hpp"
#pragma region Teacher
Teacher::Teacher() {}
Teacher::~Teacher() {}
void Teacher::show() const{
    std::cout << teacherName << " " << teacherPatronymic << " " << teacherSurname << " " << teacherSubject;
    for(int i = 0; i < specialities.getSpecialitiesSize(); i++){
        std::cout << specialities[i];
    }
    std::cout << std::endl;
    for(int i = 0; i < audiences.getAudiencesSize(); i++){
        std::cout << audiences[i];
    }
    std::cout << std::endl;
    for(int i = 0; i < groups.getGroupsSize(); i++){
        std::cout << groups[i];
    }
    std::cout << std::endl;
}
void Teacher::show(const std::string filename) const{
    std::ofstream out;
    out.open(filename, std::ios::app);
    out << teacherName << std::endl;
    out << teacherPatronymic << std::endl;
    out << teacherSurname << std::endl;
    out << teacherSubject << std::endl;
    specialities.outSpecialities(out);
    audiences.outAudiences(out);
    groups.outGroups(out);
    out.close();
}
void Teacher::sortSpecialities()
{
    for (int i = 0; i < specialities.getSpecialitiesSize() - 1; i++) 
    {
        for (int j = 0; j < specialities.getSpecialitiesSize() - i - 1; j++)
        {
            if (specialities[j].get().compare(specialities[j + 1].get()) > 0) 
                std::swap(specialities[j], specialities[j + 1]);
        }
    }
}
void Teacher::set(){
    std::string varuable;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's name: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherName = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
    flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's patronymic: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherPatronymic = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
    flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's surname: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherSurname = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
    std::cin >> teacherSubject;
	std::cout << "Enter the specialities that the teacher's teaching" << std::endl;
   this->specialities.setSpecialities();
   std::cout << " Enter the auditories in which the teacher conducts classes" << std::endl;
    audiences.setAudiences();
	std::cout << "Enter the groups that the teacher's teaching" << std::endl;
    groups.setGroups();
    std::cin.ignore();
}
void Teacher::set(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherName;
    in >> teacherPatronymic;
    in >> teacherSurname;
    in >> teacherSubject;
    specialities.setSpecialities(in);
    audiences.setAudiences(in);
    groups.setGroups(in);
    in.close();
    in.close();
}
void Teacher::setName(){
    std::string varuable;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's name: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherName = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
}
void Teacher::setName(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherName;
    in.close();
}
void Teacher::setPatronymic(){
    std::string varuable;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's patronymic: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherPatronymic = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
}
void Teacher::setPatronymic(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherPatronymic;
    in.close();
}
void Teacher::setSurname(){
    std::string varuable;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter teacher's surname: ";
            std::string varuable;
            getline(std::cin,varuable);
            if(varuable.length() > 50) throw TooMuchSymbols();
            else { this->teacherSurname = varuable; flag = 0;}
        }
        catch(TooMuchSymbols){ std::cerr << "Too much symbols.\n";}
    }
}
void Teacher::setSurname(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherSurname;
    in.close();
}
void Teacher::setSubject(){
    std::cin >> teacherSubject;
}
void Teacher::setSubject(const std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherSubject;
    in.close();
}
void Teacher::setSpecialities(){
    specialities.setSpecialities();
}
void Teacher::setSpecialities(const std::string filename){
    std::ifstream in;
    in.open(filename);
    specialities.setSpecialities(in);
    in.close();
}
void Teacher::setAudiences(){
    audiences.setAudiences();
}
void Teacher::setAudiences(const std::string filename){
    std::ifstream in;
    in.open(filename);
    audiences.setAudiences(in);
    in.close();
}
void Teacher::setGroups(){
    groups.setGroups();
}
void Teacher::setGroups(const std::string filename){
    std::ifstream in;
    in.open(filename);
    groups.setGroups(in);
    in.close();
}
#pragma endregion
#pragma region Teachers
Teachers::Teachers(){}
Teachers::Teachers(const int size){
    this->teachersSize = size;
    teachers = new Teacher[teachersSize];
}
Teachers::~Teachers(){
    delete[] teachers;
}
void Teachers::showTeachers(){
    for (int i = 0; i < teachersSize; i++)
        teachers[i].show();
}
Teacher & Teachers::operator[](const int number) const{
    return teachers[number];
}
void Teachers::setTeachers(){
    for (int i = 0; i < teachersSize; i++)
        teachers[i].set();
}
void Teachers::setTeachers(const std::string filename){
    for (int i = 0; i < teachersSize; i++)
        teachers[i].set(filename);
}
void Teachers::outTeachers() const{
    for (int i = 0; i < teachersSize; i++)
        teachers[i].show();
}
void Teachers::outTeachers(const std::string filename) const{
    for (int i = 0; i < teachersSize; i++)
        teachers[i].show(filename);
}
void Teachers::sortTeachersSpecialities()
{
    for (int i = 0; i < teachersSize; i++)
        teachers[i].sortSpecialities();
}
int Teachers::getTeachersSize() const
{
    return teachersSize;
}
void Teachers::setTeachersSize(){
    int size;
    bool flag = 1;
    while(flag){
        try{
            std::cout << "Enter a number of teachers: ";
            std::cin >> size;
            if(size > 10)throw TooMuchDimension();
            else this->teachersSize = size;
        }
        catch(TooMuchDimension){
            std::cerr << "Too much dimension.\n";
        }
    }
}
#pragma endregion