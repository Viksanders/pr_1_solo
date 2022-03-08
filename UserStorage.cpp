#pragma once
#include "UserStorage.h"

UserStorage::UserStorage()
{
    std::cout << "User storage " << this << " created\n";
}

UserStorage::~UserStorage()
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        delete m_storage[i];
    }
    std::cout << "User storage " << this << " deleted\n";
}

bool UserStorage::IsLoginFree(std::string name)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetName() == name) return false;
    }
    return true;
}

void UserStorage::AddUser(std::string name, std::string password)
{
    if (IsLoginFree(name))  //������������ �������� ���� ������ ������������� � ����������� ��������
    {
        m_storage.push_back(new User(name, password));
    }
    else
    {
        std::cout << "\nAlready exists!\n";
        return;
    }
}

int UserStorage::GetIDbyName(std::string name)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetName() == name) return m_storage[i]->GetID();
    }
    return -1;  //���� ��� ������ ������������, �� ������ ID �������� -1
}

int UserStorage::GetUsersNumber() { return m_storage.size(); }

void UserStorage::PrintUserList()
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        std::cout << m_storage[i]->GetName() << " Online: " << m_storage[i]->GetStatus() << "\n";
    }
}

User* UserStorage::getUser(int ID)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetID() == ID) return m_storage[i];
    }
    return nullptr;     //������ ������� ���� ������ ����� ���!!!
}

User* UserStorage::getUser(std::string name)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetName() == name) return m_storage[i];
    }
    return nullptr;     //������ ������� ���� ������ ����� ���!!!
}

bool UserStorage::isPasswordCorrect(std::string name, std::string password)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetName() == name) return (m_storage[i]->GetPassword() == password) ? true : false;
    }
    return false;
}

void UserStorage::setStatusByName(std::string name, bool status)
{
    for (size_t i = 0; i < m_storage.size(); ++i)
    {
        if (m_storage[i]->GetName() == name) m_storage[i]->SetStatus(status);
    }
    return;
}
