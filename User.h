#pragma once

class User
{
public:
    User(std::string login, std::string password) : m_login(login), m_password(password)
    {
        ID = ID_count; ++ID_count; m_status = false; std::cout << "USER constructor " << this << " called\n";
    };
    virtual ~User() { std::cout << "USER destructor " << this << " called\n"; }  //����� �����������? ����� ����� ����� Moderator ������������ (�� ��� �� �����)
    std::string GetName() { return m_login; };    //������ ���
    std::string GetPassword() { return m_password; };                   //������ ������ (����� ��� ������� �������)
    void SetPassword(std::string password) { m_password = password; };  //����� ������
    int GetID() { return ID; };                             //�������� ID ������������
    bool GetStatus() { return m_status; };                  //������ ������ ������������: ������ ��� �������
    void SetStatus(bool status) { m_status = status; };     //���������� ������ ������������: ������ ��� �������
private:
    std::string m_login;        //����� - ��� �� ���
    std::string m_password;     //������
    static int ID_count;        //������� ��� ��������� ID
    int ID;                     //���������� ID ������� ������������
    bool m_status;              //������ - ������ ������������ ��� �������
};
