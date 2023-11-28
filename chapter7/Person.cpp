#include"Person.h"
std::istream& read(std::istream is,Person &item)
{
    std::cout<<std::endl<<"input name address ";
    is>>item.name>>item.address;
    return is;
}
std::ostream& print(std::ostream os, Person &item)
{
    os<<"name: "<<item.name<<" address: "<<item.address;
    return os;
}