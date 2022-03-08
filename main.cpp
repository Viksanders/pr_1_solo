#include <iostream>
#include <vector>
#include <string>
#include "LinkStorage.h"
#include "ChatBox.h"
#include "User.h"
#include "UserStorage.h"
#include "Shell.h"

int main()
{
    Shell sh;
    sh.work();

    /*  //Тестирование класса чатбокса
    ChatBox test;
    test.showChatAll();
    test.showChatLast();
    test.sendMsg("123456");
    test.sendMsg("qwerty");
    test.sendMsg("abcdefgh123456789!@#$%^&*()-+");
    std::cout << "\n-----------------\n";
    test.showChatAll();
    test.showChatLast();
    std::cout << "\n-----------------\n";
    //*/

    /*      //Тест классов Юзер и Контейнер Юзеров
    UserStorage st;
    std::cout << "Total: " << st.GetUsersNumber() << " users\n";
    st.AddUser("aaa", "bbb"); st.AddUser("bbb", "asd"); st.AddUser("cde", "cde"); st.AddUser("aaa", "cde"); 
    st.getUser(0)->SetStatus(true); st.getUser("cde")->SetStatus(true);
    std::cout << "Total: " << st.GetUsersNumber() << " users\n";
    std::cout << "GET ID BY NAME TEST FOR aaa: " << st.GetIDbyName("aaa") << "\n";
    std::cout << "GET ID BY NAME TEST FOR bbb: " << st.GetIDbyName("bbb") << "\n";
    std::cout << "GET ID BY NAME TEST FOR cde: " << st.GetIDbyName("cde") << "\n";
    std::cout << "GET ID BY NAME TEST FOR 12avc: " << st.GetIDbyName("12avc") << "\n";
    st.PrintUserList();
    std::cout << "Total: " << st.GetUsersNumber() << " users\n";
    //*/
    
    /*      //Тест контейнера взаимосвязей
    LinkStorage<staticInt> test;
    std::cout << "Выведем пустой контейнер:\n";
    test.PrintAddresses();
    
    std::cout << "\n\nДобавим одного пользователя:\n";
    test.AddUser();
    test.PrintAddresses();
    
    std::cout << "\n\nДобавим ЕЩЁ одного пользователя 1:\n";
    test.AddUser();
    test.PrintAddresses();
    
    std::cout << "\n\nДобавим ЕЩЁ одного пользователя 2:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\nДобавим ЕЩЁ одного пользователя 3:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\nДобавим ЕЩЁ одного пользователя 4:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\nВыведем данные\n";
    test.PrintData();
    
    std::cout << "\n\nФункция Get\n";
    std::cout << *test.GetMain() << "\n";
    std::cout << *test.Get(2, 4) << "\n";
    std::cout << *test.Get(4, 2) << "\n";
    //*/

    return 0;
}
