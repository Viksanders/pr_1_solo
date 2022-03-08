#pragma once

class User
{
public:
    User(std::string login, std::string password) : m_login(login), m_password(password)
    {
        ID = ID_count; ++ID_count; m_status = false; std::cout << "USER constructor " << this << " called\n";
    };
    virtual ~User() { std::cout << "USER destructor " << this << " called\n"; }  //зачем виртуальный? Чтобы потом класс Moderator унаследовать (но это не точно)
    std::string GetName() { return m_login; };    //выдать имя
    std::string GetPassword() { return m_password; };                   //выдать пароль (нужна для верхних классов)
    void SetPassword(std::string password) { m_password = password; };  //смена пароля
    int GetID() { return ID; };                             //Получить ID пользователя
    bool GetStatus() { return m_status; };                  //Узнать статус пользоваетля: онлайн или оффлайн
    void SetStatus(bool status) { m_status = status; };     //Установить статус пользователя: онлайн или оффлайн
private:
    std::string m_login;        //логин - оно же имя
    std::string m_password;     //пароль
    static int ID_count;        //счетчик для установки ID
    int ID;                     //уникальный ID каждого пользователя
    bool m_status;              //Статус - онлайн пользователь или оффлайн
};
