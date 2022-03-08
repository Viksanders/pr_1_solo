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

    /*  //������������ ������ ��������
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

    /*      //���� ������� ���� � ��������� ������
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
    
    /*      //���� ���������� ������������
    LinkStorage<staticInt> test;
    std::cout << "������� ������ ���������:\n";
    test.PrintAddresses();
    
    std::cout << "\n\n������� ������ ������������:\n";
    test.AddUser();
    test.PrintAddresses();
    
    std::cout << "\n\n������� �٨ ������ ������������ 1:\n";
    test.AddUser();
    test.PrintAddresses();
    
    std::cout << "\n\n������� �٨ ������ ������������ 2:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\n������� �٨ ������ ������������ 3:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\n������� �٨ ������ ������������ 4:\n";
    test.AddUser();
    test.PrintAddresses();

    std::cout << "\n\n������� ������\n";
    test.PrintData();
    
    std::cout << "\n\n������� Get\n";
    std::cout << *test.GetMain() << "\n";
    std::cout << *test.Get(2, 4) << "\n";
    std::cout << *test.Get(4, 2) << "\n";
    //*/

    return 0;
}
