#pragma once
#include <iostream>
#include <string>
#include <fstream>
typedef unsigned int uint64;
class TooMuchSymbols : std::exception {}; // �����-���������� ��� ����� ��� ��������/�������, ����������� ���� ������ 50 ��������.
class TooMuchDimension : std::exception {}; // �����-���������� �� ������� ��������.
#pragma region Group, Subject, Audience,Speciality
#pragma region Group
class Group{
private:
    std::string groupName;
public:
	//�����������
    Group(); 
	//����������
    ~Group();
	//���������� �������� ������.
	// ������� � �������� ������:���.
    void show()const;
	// ���������� �������� ������.
    std::string get()const;
	//������������� �������� ������ �� �������.
	//������� ������:������ ������ � ����� ������
	//�������� ������: ���������� �����
    friend std::ostream & operator<<(std::ostream & out, const Group & group);
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::istream & operator >> (std::istream & in, Group & group);
	//������������� �������� ������ � ����.
	//������� ������:������ ������ � ����� ������ � ����
	//�������� ������: ���������� �����
    friend std::ofstream & operator <<(std::ofstream & fout, const Group & group);
	//������������� �������� ����� �� �����.
	//������� ������:������ ������ � ����� ����� �� �����
	//�������� ������: ���������� �����
    friend std::ifstream & operator >> (std::ifstream & fin, Group & group);
};
#pragma endregion
#pragma region Audience
class Audience{
private:
    uint64 audienceNumber;
public:
	//�����������
    Audience(); 
	//����������
    ~Audience();
	//���������� ����� ���������.
	//������� � �������� ������:���.
    void show()const;
	// ���������� ����� ���������.
    uint64 get()const;
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::ostream & operator<<(std::ostream & out, const Audience & audience);
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::istream & operator >> (std::istream & in, Audience & audience);
	//������������� �������� ������ � ����.
	//������� ������:������ ������ � ����� ������ � ����
	//�������� ������: ���������� �����
    friend std::ofstream & operator <<(std::ofstream & fout, const Audience & audience);
	//������������� �������� ����� �� �����.
	//������� ������:������ ������ � ����� ����� �� �����
	//�������� ������: ���������� �����
    friend std::ifstream & operator >> (std::ifstream & fin, Audience & audience);
};
#pragma endregion
#pragma region Subject
class Subject{
private:
    std::string subjectName;
public:
	//�����������
    Subject();
	//����������
    ~Subject();
	//���������� �������� ��������.
	//������� � �������� ������:���.
    void show()const;
	//���������� �������� ��������.
    std::string get()const ;
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::ostream & operator<<(std::ostream & out, const Subject & subject);
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::istream & operator >> (std::istream & in, Subject & subject);
	//������������� �������� ������ � ����.
	//������� ������:������ ������ � ����� ������ � ����
	//�������� ������: ���������� �����
    friend std::ofstream & operator <<(std::ofstream & fout, const Subject & subject);
	//������������� �������� ����� �� �����.
	//������� ������:������ ������ � ����� ����� �� �����
	//�������� ������: ���������� �����
    friend std::ifstream & operator >> (std::ifstream & fin, Subject & subject);
};
#pragma endregion
#pragma region Speciality
class Speciality{
private:
    std::string specialityName;
public:
	//�����������
    Speciality();
	//����������
    ~Speciality();
	//���������� �������� �������������.
	//������� � �������� ������:���.
    void show()const;
	//���������� �������� �������������.
    std::string get()const;
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::ostream & operator<<(std::ostream & out, const Speciality & speciality);
	//������������� �������� ����� � �������.
	//������� ������:������ ������ � ����� �����
	//�������� ������: ���������� �����
    friend std::istream & operator >> (std::istream & in, Speciality & speciality);
	//������������� �������� ������ � ����.
	//������� ������:������ ������ � ����� ������ � ����
	//�������� ������: ���������� �����
    friend std::ofstream & operator <<(std::ofstream & fout, const Speciality & speciality);
	//������������� �������� ����� �� �����.
	//������� ������:������ ������ � ����� ����� �� �����
	//�������� ������: ���������� �����
    friend std::ifstream & operator >> (std::ifstream & fin, Speciality & speciality);
};
#pragma endregion
#pragma endregion
#pragma region Groups,Audiences,Subjects,Specialities
#pragma region Groups
class Groups{
public:
	// �����������
    Groups();
	//����������
    ~Groups();
	// ������� �� ������� �������� �����.
    void showGroups() const;
	// ������������� �������� [].
	// ������� ������:������ ��������
	// �������� ������: ������ ���� Group.
    Group& operator [] (const int number) const;
	// ������� ������:���
	// �������� ������:������ �������
    int getGroupsSize() const;
	// ��������� � ������� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� � �������� ������: ���
    void setGroups();
	// ��������� �� ����� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� ������:�������� ����� �����
	// �������� ������:���
    void setGroups(std::ifstream & fin);
	// ������� � ���� ����������� �������, � ��� ��������.
	// ������� ������: �������� ����� ������
	// �������� ������:���
    void outGroups(std::ofstream & fout) const;
private:
    Group *groups;
    int groupsSize;
};
#pragma endregion

#pragma region Audiences
class Audiences {
public:
	// �����������
    Audiences();
	//����������
    ~Audiences();
	// ������� �� ������� ������ ���������.
    void showAudiences() const;
	// ������������� �������� [].
	// ������� ������:������ ��������
	// �������� ������: ������ ���� Audience.
    Audience& operator [] (const int number) const;
	// ������� ������:���
	// �������� ������:������ �������
    int getAudiencesSize() const;
	// ��������� � ������� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� � �������� ������: ���
    void setAudiences();
	// ��������� �� ����� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� ������:�������� ����� �����
	// �������� ������:���
    void setAudiences(std::ifstream & fin);
	// ������� � ���� ����������� �������, � ��� ��������.
	// ������� ������: �������� ����� ������
	// �������� ������:���
    void outAudiences(std::ofstream & fout) const;
private:
    Audience *audiences;
    int audiencesSize;
};
#pragma endregion
#pragma region Subjects
class Subjects {
public:
	// �����������
    Subjects();
	//����������
    ~Subjects();
	// ������� �� ������� �������� ���������.
    void showSubjects()const;
	// ������������� �������� [].
	// ������� ������:������ ��������
	// �������� ������: ������ ���� Subject.
    Subject& operator [] (const int number) const;
	// ������� ��������� �������� � ���������� ������� � ������� ������������ ��������� � ������� compare.
    void sortSubjects();
	// ������� ������:���
	// �������� ������:������ �������
    int getSubjectsSize() const;
	// ��������� � ������� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� � �������� ������: ���
    void setSubjects();
	// ��������� �� ����� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� ������:�������� ����� �����
	// �������� ������:���
    void setSubjects(std::ifstream & fin);
	// ������� � ���� ����������� �������, � ��� ��������.
	// ������� ������: �������� ����� ������
	// �������� ������:���
    void outSubjects(std::ofstream & fout) const;
private:
    Subject *subjects;
    int subjectsSize;
};
#pragma endregion
#pragma region Specialities
class Specialities {
public:
	// �����������
    Specialities();
	//����������
    ~Specialities();
	// ������� �� ������� �������� ��������������.
    void showSpecialities() const;
	// ������������� �������� [].
	// ������� ������:������ ��������
	// �������� ������: ������ ���� Speciality.
    Speciality& operator [] (const int number) const;
	// ��������� � ������� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� � �������� ������: ���
    void setSpecialities();
	// ��������� �� ����� ����������� �������, �������� ������ � ��������� ��� �������.
	// ������� ������:�������� ����� �����
	// �������� ������:���
    void setSpecialities(std::ifstream & fin);
	// ������� � ���� ����������� �������, � ��� ��������.
	// ������� ������: �������� ����� ������
	// �������� ������:���
    void outSpecialities(std::ofstream & fout) const;
	// ������� ��������� ������������� � ���������� ������� � ������� ������������ ��������� � ������� compare.
    void sortSpecialities();
	// ������� ������:���
	// �������� ������:������ �������
    int getSpecialitiesSize() const;
private:
    Speciality *specialities;
    int specialitiesSize;
};
#pragma endregion
#pragma endregion