#pragma once
#include <iostream>
#include <vector>
#include "User.h"

class UserStorage   //Всё для чего нужен этот контейнер - переводить имена пользователей в их ID
{                   //чтобы потом по ID обращаься к ячейкам двумерного массива для доступа к ЛС, ну и хранить список всех юзеров и добавлять их туда
public:
    UserStorage();
    ~UserStorage();
    bool IsLoginFree(std::string name); //возвращает логическое значение о том, что логин свободен
    void AddUser(std::string name, std::string password);   //Добавляет пользователя при регистрации, УДАЛЕНИЕ ПОКА НЕ РЕАЛИЗОВАНО
    int GetIDbyName(std::string name);   //Ищет пользователя по имени и возвращает его ID. Если такого юзера нет
                                        //То возвращает -1
    int GetUsersNumber();       //возвращает количество пользователей
    void PrintUserList();       //вывести на экран имена всех пользователей, ТОЛЬКО ДЛЯ ДЕБАГА
    User* getUser(int ID);      //выдать указатель на пользователя по его ID
    User* getUser(std::string name);    //перегрузка для выдаче по имени для метода выше
    bool isPasswordCorrect(std::string name, std::string password);
    void setStatusByName(std::string name, bool status);
private:
    std::vector<User*> m_storage;
};
