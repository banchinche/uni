#pragma once
#include "stuff.hpp"
#include <iostream>
#pragma region Teacher
class Teacher{
private:
    std::string teacherName;
    std::string teacherPatronymic;
    std::string teacherSurname;
    Subject teacherSubject;
    Specialities specialities;
    Audiences audiences;
    Groups groups;
public:
	//конструктор
    Teacher();
	//деструктор
    ~Teacher();
	//выводит всю информацию о преподавателе на консоль
    void show() const;
	// выводит всю информацию о преподавателе в файл
    void show(const std::string filename) const;
	// выводит им€
	// сортирует специальности в алфавитном пор€дке пузырьковым методом с помощью функции compare дл€ string-строк.
	void sortSpecialities();
	// общий сеттер из консоли
    void set();
	// сеттер из файла(вызывает все необходимые сеттеры)
    void set(const std::string filename);
	// сеттеры отдельных полей из консоли/ файла.
	// выходных данных нет.
    void setName();
    void setName(const std::string filename);
    void setPatronymic();
    void setPatronymic(const std::string filename);
    void setSurname();
    void setSurname(const std::string filename);
    void setSubject();
    void setSubject(const std::string filename);
    void setSpecialities();
    void setSpecialities(const std::string filename);
    void setAudiences();
    void setAudiences(const std::string filename);
    void setGroups();
    void setGroups(const std::string filename);
};
#pragma endregion
#pragma region Teachers
class Teachers {
private:
    Teacher *teachers = nullptr;
    int teachersSize;
public:
	// конструктор
    Teachers();
	// конструктор с параметром, выдел€ющий пам€ть под массив
    Teachers(const int size);
	// деструктор
    ~Teachers();
	// выводит на консоль массив учителей
    void showTeachers();
	// перегруженный оператор [] дл€ массива объектов.
	// входные данные:индекс объета
	// выходные данные: объект типа Teacher.
    Teacher& operator [] (const int number) const;
	//сеттер учителей из консоли
    void setTeachers();
	// сеттер учителей из файла.
    void setTeachers(const std::string filename);
	// выводит всю информацию об учител€х на консоль.
    void outTeachers() const;
	// выводит всю информацию об учител€х в файл.
    void outTeachers(const std::string filename)const;
	// сортирует специальности, которые обучаютс€ у данного преподавател€.
    void sortTeachersSpecialities();
	// выходные данные: возвращает размер массива
    int getTeachersSize() const;
	// устанавливает размер массива
    void setTeachersSize();
};
#pragma endregion