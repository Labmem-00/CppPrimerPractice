#include"Sale_data.h"
int main()
{
    Sale_data a=Sale_data();
    Sale_data b=Sale_data("123456");
    Sale_data c=Sale_data("123456",5,20);
    Sale_data d=Sale_data(std::cin);
    print(std::cout,a)<<std::endl;
    print(std::cout,b)<<std::endl;
    print(std::cout,c)<<std::endl;
    print(std::cout,d)<<std::endl;
}