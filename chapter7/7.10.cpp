//if语句中的条件部分连续读入data1和data2
//类似的可以对print进行套用连续输出data1和data2
#pragma once
#include"Sale_data.h"
int main()
{
    Sale_data data1,data2;
    if(read(read(std::cin,data1),data2))
    {
        print(print(std::cout,data1),data2);
    }
    else{
        std::cout<<"no data?";
    }
}