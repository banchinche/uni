#pragma once
#include "stuff.hpp"
#pragma region Student
class Student{
private:
    std::string studentName;
    std::string studentSurname;
    Group studentGroup;
    Speciality studentSpeciality;
    Subjects subjects;
    Audiences audiences;
public:
	// конструктор
    Student();
	// деструктор
    ~Student();
	// показывает на консоль данные студента.
    void show() const;
	// выводит в файл все данные студента.
    void show(const std::string filename) const;
	void sortSubjects();
	//общий сеттер из консоли
    void set();
	// общий сеттер из файла.
    void set(const std::string filename);
	// сеттеры дл€ отдельных полей с консоли/ файла.
    void setName();
    void setName(const std::string filename);
    void setSurname();
    void setSurname(const std::string filename);
    void setGroup();
    void setGroup(const std::string filename);
    void setSpeciality();
    void setSpeciality(const std::string filename);
    void setSubjects();
    void setSubjects(const std::string filename);
    void setAudiences();
    void setAudiences(const std::string filename);
};
#pragma endregion
#pragma region Students
class Students {
private:
    Student *students = nullptr;
    int studentsSize;
public:
	// конструктор
    Students();
	// конструктор с параметром, параметр - размер массива объектов. в конструкторе выдел€етс€ пам€ть и с консоли заполн€ютс€ данные.
    Students(const int size);
	// деструктор
    ~Students();
	// выводит информацию о студентах на консоль
    void showStudents();
	// перегруженный оператор [].
	// входные данные: индекс элемента
	// выходные данные: объект типа Student.
    Student& operator [] (const int number) const;
	// сеттер студентов из консоли
    void setStudents();
	// сеттер студентов из файла
    void setStudents(const std::string filename);
	// вывод студентов на консоль.
    void outStudents() const;
	// вывод студентов в файл
    void outStudents(const std::string filename) const;
	// сортировка предметов, которым обучаютс€ студенты методом пузырьковой сортировки и использованием функции compare.
    void sortStudentsSubjects();
	// возвращает размер массива
    int getStudentsSize() const;
	// устанавливает размер массива
    void setStudentsSize();
};
#pragma endregion