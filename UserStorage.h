#pragma once
#include <iostream>
#include <vector>
#include "User.h"

class UserStorage   //�� ��� ���� ����� ���� ��������� - ���������� ����� ������������� � �� ID
{                   //����� ����� �� ID ��������� � ������� ���������� ������� ��� ������� � ��, �� � ������� ������ ���� ������ � ��������� �� ����
public:
    UserStorage();
    ~UserStorage();
    bool IsLoginFree(std::string name); //���������� ���������� �������� � ���, ��� ����� ��������
    void AddUser(std::string name, std::string password);   //��������� ������������ ��� �����������, �������� ���� �� �����������
    int GetIDbyName(std::string name);   //���� ������������ �� ����� � ���������� ��� ID. ���� ������ ����� ���
                                        //�� ���������� -1
    int GetUsersNumber();       //���������� ���������� �������������
    void PrintUserList();       //������� �� ����� ����� ���� �������������, ������ ��� ������
    User* getUser(int ID);      //������ ��������� �� ������������ �� ��� ID
    User* getUser(std::string name);    //���������� ��� ������ �� ����� ��� ������ ����
    bool isPasswordCorrect(std::string name, std::string password);
    void setStatusByName(std::string name, bool status);
private:
    std::vector<User*> m_storage;
};
