#include<iostream>
#include<string>
struct Person
{
    std::string name;
    std::string address;
    std::string isname() const {return name;}
    std::string isadd() const {return address;}//需要const,用以处理常量对象
};
std::istream& read(std::istream is,Person &item);
std::ostream& print(std::ostream os, Person &item);
