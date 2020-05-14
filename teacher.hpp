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
	//�����������
    Teacher();
	//����������
    ~Teacher();
	//������� ��� ���������� � ������������� �� �������
    void show() const;
	// ������� ��� ���������� � ������������� � ����
    void show(const std::string filename) const;
	// ������� ���
	// ��������� ������������� � ���������� ������� ����������� ������� � ������� ������� compare ��� string-�����.
	void sortSpecialities();
	// ����� ������ �� �������
    void set();
	// ������ �� �����(�������� ��� ����������� �������)
    void set(const std::string filename);
	// ������� ��������� ����� �� �������/ �����.
	// �������� ������ ���.
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
	// �����������
    Teachers();
	// ����������� � ����������, ���������� ������ ��� ������
    Teachers(const int size);
	// ����������
    ~Teachers();
	// ������� �� ������� ������ ��������
    void showTeachers();
	// ������������� �������� [] ��� ������� ��������.
	// ������� ������:������ ������
	// �������� ������: ������ ���� Teacher.
    Teacher& operator [] (const int number) const;
	//������ �������� �� �������
    void setTeachers();
	// ������ �������� �� �����.
    void setTeachers(const std::string filename);
	// ������� ��� ���������� �� �������� �� �������.
    void outTeachers() const;
	// ������� ��� ���������� �� �������� � ����.
    void outTeachers(const std::string filename)const;
	// ��������� �������������, ������� ��������� � ������� �������������.
    void sortTeachersSpecialities();
	// �������� ������: ���������� ������ �������
    int getTeachersSize() const;
	// ������������� ������ �������
    void setTeachersSize();
};
#pragma endregion