#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "LinkStorage.h"
#include "ChatBox.h"
#include "User.h"
#include "UserStorage.h"

enum STATE { MainMenu, Registration, LogInScreen, LogOutScreen, Typing, Exit };

class Shell
{
public:
    Shell();
    ~Shell();
    void close();           //������� �� �������� ����, ������������ ���� �� ������� ��� � ���, ��� ��� ����� �������
    bool isOpened();        //��������� ������ ����� ���������� ����
    void work();            //main loop
private:
    UserStorage m_users;
    LinkStorage<ChatBox> m_links;
    User* m_YOU;              //��������� �� �������� ������������� ������������
    ChatBox* m_CHAT;          //��������� �� ������� �������� ���
    bool m_active;          //���� ��� ��������� �������� ���� � ���, ��� ��� �� �������� � ��� ���� ���������

    STATE registration();    //����������� ������ �����
    STATE logIn();           //���� �� ������� �����
    STATE logOut();          //����� �� �������� �����
    STATE MainMenuFcn();
    STATE MsgOrCmd();        //���� ��������� ��� �������
};



