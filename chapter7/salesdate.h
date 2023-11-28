#include<iostream>
#include<string>
#include<vector>
struct salesdate
{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
void insert(std::vector<std::string>bookNos,salesdate book);

