#pragma once
#include <iostream>
#include <vector>
#include <string>

class ChatBox
{
public:
    ChatBox();
    ~ChatBox();
    void sendMsg(std::string msg);  //����� ������ msg � ������ ����� m_messages
    void showChatAll();             //�������� � ������� ���� ������ m_messages
    void showChatLast();            //�������� � ������� ������ ��������� ��������� (����� �� ������������...)
private:
    std::vector<std::string> m_messages;    //������ ���������
};

