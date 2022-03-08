#pragma once
#include <iostream>
#include <vector>
#include <string>

class ChatBox
{
public:
    ChatBox();
    ~ChatBox();
    void sendMsg(std::string msg);  //кладёт строку msg в массив строк m_messages
    void showChatAll();             //печатает в консоль весь массив m_messages
    void showChatLast();            //печатает в консоль только последнее сообщение (метод не используется...)
private:
    std::vector<std::string> m_messages;    //массив сообщений
};

