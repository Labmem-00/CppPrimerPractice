#include"salesdate.h"
int main()
{
    std::vector<salesdate>books;
    salesdate btemp;
    int n,count=0;
    std::string temp=books[0].bookNo;
    std::cin>>n;
    std::cout<<"需要输入的销售记录数量: ";
    while (n!=0)
    {
        std::cout<<std::endl<<n<<"bookNo: ";
        std::cin>>btemp.bookNo;
        std::cout<<std::endl<<n<<"units_sold: ";
        std::cin>>btemp.units_sold;
        std::cout<<std::endl<<n<<"revenue: ";
        std::cin>>btemp.revenue;
        books.push_back(btemp);
        --n;
    }
    for(int i=0;i<books.size();++i)
    {
        if(temp!=books[i].bookNo)
        {
            std::cout<<temp<<"has "<<count<<" salesdate";
            temp=books[i].bookNo;
            count=0;
        }
        count++;
    }
}