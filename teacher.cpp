#include "teacher.hpp"
Teacher::Teacher() {}
Teacher::~Teacher() {}

void Teacher::show() const{
    std::cout << teacherName << " " << teacherPatronymic << " " << teacherSurname << " " << teacherSubject << " ";
    for(int i = 0; i < specialities.getSpecialitiesSize(); i++){
        std::cout << specialities[i] << " ";
    }
    for(int i = 0; i < audiences.getAudiencesSize(); i++){
        std::cout << audiences[i] << " ";
    }
    for(int i = 0; i < groups.getGroupsSize(); i++){
        std::cout << groups[i] << " ";
    }
}
void Teacher::show(std::string filename) const{
    std::ofstream out;
    out.open(filename);
    out << teacherName;
    out << teacherPatronymic;
    out << teacherSurname;
    out << teacherSubject;
    specialities.outSpecialities(out);
    audiences.outAudiences(out);
    groups.outGroups(out);
    out.close();
}
void Teacher::showName() const{
    std::cout << teacherName << std::endl;
}
void Teacher::showPatronymic() const{
    std::cout << teacherPatronymic << std::endl;
}
void Teacher::showSurname() const{
    std::cout << teacherSurname << std::endl;
}
void Teacher::showSubject() const{
    std::cout << teacherSubject << std::endl;
}
void Teacher::showSpecialities() const{
    for(int i = 0; i < specialities.getSpecialitiesSize(); i++){
        std::cout << specialities[i] << " ";
    }
}
void Teacher::showAudiences() const{
    for(int i = 0; i < audiences.getAudiencesSize(); i++){
        std::cout << audiences[i] << " ";
    }
}
void Teacher::showGroups() const{
    for(int i = 0; i < groups.getGroupsSize(); i++){
        std::cout << groups[i] << " ";
    }
}
void Teacher::sortSpecialities()
{
	for (int i = 0; i < specialities.getSpecialitiesSize() - 1; i++) // ôóíêöèÿ ñîðòèðîâêè ïî àëôàâèòó(ïóçûðüêîâûé ìåòîä)
	{
		for (int j = 0; j < specialities.getSpecialitiesSize() - i - 1; j++)
		{
			if (specialities[j].get().compare(specialities[j + 1].get()) > 0) // compare - ñðàâíèâàåò ëåêñèêîãðàôè÷åñêè ñòðîêè
				std::swap(specialities[j], specialities[j + 1]);
		}
	}
}
void Teacher::set(){
    std::cout << "Enter teacher's name: ";
    std::cin >> teacherName;
    std::cout << "Enter a teacher's patronymic: ";
    std::cin >> teacherPatronymic;
    std::cout << "Enter a teacher's surname: ";
    std::cin >> teacherSurname;
    std::cin >> teacherSubject;
   this->specialities.setSpecialities();
    audiences.setAudiences();
    groups.setGroups();
}
void Teacher::set(std::string filename){
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
    std::cout << "Enter teacher's name: ";
    std::cin >> teacherName;
}
void Teacher::setName(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherName;
    in.close();
}
void Teacher::setPatronymic(){
    std::cout << "Enter a teacher's patronymic: ";
    std::cin >> teacherPatronymic;
}
void Teacher::setPatronymic(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherPatronymic;
    in.close();
}
void Teacher::setSurname(){
    std::cout << "Enter a teacher's surname: ";
    std::cin >> teacherSurname;
}
void Teacher::setSurname(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherSurname;
    in.close();
}
void Teacher::setSubject(){
    std::cin >> teacherSubject;
}
void Teacher::setSubject(std::string filename){
    std::ifstream in;
    in.open(filename);
    in >> teacherSubject;
    in.close();
}
void Teacher::setSpecialities(){
    specialities.setSpecialities();
}
void Teacher::setSpecialities(std::string filename){
    std::ifstream in;
    in.open(filename);
    specialities.setSpecialities(in);
    in.close();
}
void Teacher::setAudiences(){
    audiences.setAudiences();
}
void Teacher::setAudiences(std::string filename){
    std::ifstream in;
    in.open(filename);
    audiences.setAudiences(in);
    in.close();
}
void Teacher::setGroups(){
    groups.setGroups();
}
void Teacher::setGroups(std::string filename){
    std::ifstream in;
    in.open(filename);
    groups.setGroups(in);
    in.close();
}













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
void Teachers::setTeachers(std::string filename){
    for (int i = 0; i < teachersSize; i++)
        teachers[i].set(filename);
}
void Teachers::outTeachers() const{
    for (int i = 0; i < teachersSize; i++)
        teachers[i].show();
}
void Teachers::outTeachers(std::string filename) const{
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
    std::cout << "Enter a number of teachers: ";
    std::cin >> teachersSize;
}
