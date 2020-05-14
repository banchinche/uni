#pragma once
#include <iostream>
#include <string>
#include <fstream>
typedef unsigned int uint64;
class TooMuchSymbols : std::exception {}; // класс-исключение для полей фио студента/учителя, срабатывает если больше 50 символов.
class TooMuchDimension : std::exception {}; // класс-исключение на размеры массивов.
#pragma region Group, Subject, Audience,Speciality
#pragma region Group
class Group{
private:
    std::string groupName;
public:
	//конструктор
    Group(); 
	//деструктор
    ~Group();
	//показывает название группы.
	// входные и выходные данные:нет.
    void show()const;
	// возвращает название группы.
    std::string get()const;
	//перегруженный оператор вывода на консоль.
	//входные данные:объект класса и поток вывода
	//выходные данные: возвращает поток
    friend std::ostream & operator<<(std::ostream & out, const Group & group);
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::istream & operator >> (std::istream & in, Group & group);
	//перегруженный оператор вывода в файл.
	//входные данные:объект класса и поток вывода в файл
	//выходные данные: возвращает поток
    friend std::ofstream & operator <<(std::ofstream & fout, const Group & group);
	//перегруженный оператор ввода из файла.
	//входные данные:объект класса и поток ввода из файла
	//выходные данные: возвращает поток
    friend std::ifstream & operator >> (std::ifstream & fin, Group & group);
};
#pragma endregion
#pragma region Audience
class Audience{
private:
    uint64 audienceNumber;
public:
	//конструктор
    Audience(); 
	//деструктор
    ~Audience();
	//показывает номер аудитории.
	//входные и выходные данные:нет.
    void show()const;
	// возвращает номер аудитории.
    uint64 get()const;
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::ostream & operator<<(std::ostream & out, const Audience & audience);
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::istream & operator >> (std::istream & in, Audience & audience);
	//перегруженный оператор вывода в файл.
	//входные данные:объект класса и поток вывода в файл
	//выходные данные: возвращает поток
    friend std::ofstream & operator <<(std::ofstream & fout, const Audience & audience);
	//перегруженный оператор ввода из файла.
	//входные данные:объект класса и поток ввода из файла
	//выходные данные: возвращает поток
    friend std::ifstream & operator >> (std::ifstream & fin, Audience & audience);
};
#pragma endregion
#pragma region Subject
class Subject{
private:
    std::string subjectName;
public:
	//конструктор
    Subject();
	//деструктор
    ~Subject();
	//показывает название предмета.
	//входные и выходные данные:нет.
    void show()const;
	//возвращает название предмета.
    std::string get()const ;
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::ostream & operator<<(std::ostream & out, const Subject & subject);
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::istream & operator >> (std::istream & in, Subject & subject);
	//перегруженный оператор вывода в файл.
	//входные данные:объект класса и поток вывода в файл
	//выходные данные: возвращает поток
    friend std::ofstream & operator <<(std::ofstream & fout, const Subject & subject);
	//перегруженный оператор ввода из файла.
	//входные данные:объект класса и поток ввода из файла
	//выходные данные: возвращает поток
    friend std::ifstream & operator >> (std::ifstream & fin, Subject & subject);
};
#pragma endregion
#pragma region Speciality
class Speciality{
private:
    std::string specialityName;
public:
	//конструктор
    Speciality();
	//деструктор
    ~Speciality();
	//показывает название специальности.
	//входные и выходные данные:нет.
    void show()const;
	//возвращает название специальности.
    std::string get()const;
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::ostream & operator<<(std::ostream & out, const Speciality & speciality);
	//перегруженный оператор ввода с консоли.
	//входные данные:объект класса и поток ввода
	//выходные данные: возвращает поток
    friend std::istream & operator >> (std::istream & in, Speciality & speciality);
	//перегруженный оператор вывода в файл.
	//входные данные:объект класса и поток вывода в файл
	//выходные данные: возвращает поток
    friend std::ofstream & operator <<(std::ofstream & fout, const Speciality & speciality);
	//перегруженный оператор ввода из файла.
	//входные данные:объект класса и поток ввода из файла
	//выходные данные: возвращает поток
    friend std::ifstream & operator >> (std::ifstream & fin, Speciality & speciality);
};
#pragma endregion
#pragma endregion
#pragma region Groups,Audiences,Subjects,Specialities
#pragma region Groups
class Groups{
public:
	// конструктор
    Groups();
	//деструктор
    ~Groups();
	// выводит на консоль названия групп.
    void showGroups() const;
	// перегруженный оператор [].
	// входные данные:индекс элемента
	// выходные данные: объект типа Group.
    Group& operator [] (const int number) const;
	// входные данные:нет
	// выходные данные:размер массива
    int getGroupsSize() const;
	// считываем с консоли размерность массива, выделяем память и заполняем его данными.
	// входные и выходные данные: нет
    void setGroups();
	// считываем из файла размерность массива, выделяем память и заполняем его данными.
	// входные данные:файловый поток ввода
	// выходные данные:нет
    void setGroups(std::ifstream & fin);
	// выводим в файл размерность массива, и его элементы.
	// входные данные: файловый поток вывода
	// выходные данные:нет
    void outGroups(std::ofstream & fout) const;
private:
    Group *groups;
    int groupsSize;
};
#pragma endregion

#pragma region Audiences
class Audiences {
public:
	// конструктор
    Audiences();
	//деструктор
    ~Audiences();
	// выводит на консоль номера аудиторий.
    void showAudiences() const;
	// перегруженный оператор [].
	// входные данные:индекс элемента
	// выходные данные: объект типа Audience.
    Audience& operator [] (const int number) const;
	// входные данные:нет
	// выходные данные:размер массива
    int getAudiencesSize() const;
	// считываем с консоли размерность массива, выделяем память и заполняем его данными.
	// входные и выходные данные: нет
    void setAudiences();
	// считываем из файла размерность массива, выделяем память и заполняем его данными.
	// входные данные:файловый поток ввода
	// выходные данные:нет
    void setAudiences(std::ifstream & fin);
	// выводим в файл размерность массива, и его элементы.
	// входные данные: файловый поток вывода
	// выходные данные:нет
    void outAudiences(std::ofstream & fout) const;
private:
    Audience *audiences;
    int audiencesSize;
};
#pragma endregion
#pragma region Subjects
class Subjects {
public:
	// конструктор
    Subjects();
	//деструктор
    ~Subjects();
	// выводит на консоль названия предметов.
    void showSubjects()const;
	// перегруженный оператор [].
	// входные данные:индекс элемента
	// выходные данные: объект типа Subject.
    Subject& operator [] (const int number) const;
	// функция сортирует предметы в алфавитном порядке с помощью пузырькового алгоритма и функции compare.
    void sortSubjects();
	// входные данные:нет
	// выходные данные:размер массива
    int getSubjectsSize() const;
	// считываем с консоли размерность массива, выделяем память и заполняем его данными.
	// входные и выходные данные: нет
    void setSubjects();
	// считываем из файла размерность массива, выделяем память и заполняем его данными.
	// входные данные:файловый поток ввода
	// выходные данные:нет
    void setSubjects(std::ifstream & fin);
	// выводим в файл размерность массива, и его элементы.
	// входные данные: файловый поток вывода
	// выходные данные:нет
    void outSubjects(std::ofstream & fout) const;
private:
    Subject *subjects;
    int subjectsSize;
};
#pragma endregion
#pragma region Specialities
class Specialities {
public:
	// конструктор
    Specialities();
	//деструктор
    ~Specialities();
	// выводит на консоль названия специальностей.
    void showSpecialities() const;
	// перегруженный оператор [].
	// входные данные:индекс элемента
	// выходные данные: объект типа Speciality.
    Speciality& operator [] (const int number) const;
	// считываем с консоли размерность массива, выделяем память и заполняем его данными.
	// входные и выходные данные: нет
    void setSpecialities();
	// считываем из файла размерность массива, выделяем память и заполняем его данными.
	// входные данные:файловый поток ввода
	// выходные данные:нет
    void setSpecialities(std::ifstream & fin);
	// выводим в файл размерность массива, и его элементы.
	// входные данные: файловый поток вывода
	// выходные данные:нет
    void outSpecialities(std::ofstream & fout) const;
	// функция сортирует специальности в алфавитном порядке с помощью пузырькового алгоритма и функции compare.
    void sortSpecialities();
	// входные данные:нет
	// выходные данные:размер массива
    int getSpecialitiesSize() const;
private:
    Speciality *specialities;
    int specialitiesSize;
};
#pragma endregion
#pragma endregion