#include"Sale_data.h"
Sale_data& Sale_data::combine(const Sale_data& rhs)
{
    if(bookNo==rhs.bookNo)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }
    else{
    
        std::cout<<"different isbn";
        return *this;
    }
}
std::istream &read(std::istream &is, Sale_data &item)
{
    //read需要对实参数值进行修改，所以需要将形参设置为普通引用
    double price=0;
    std::cout<<"输入 书号 销售数量 单价"<<std::endl;
    is >> item.bookNo >> item.units_sold >>price;
    item.revenue =price * item.units_sold;
    return is;
}
std::ostream &print(std::ostream &os, const Sale_data &item)
{
    //print不需要对实参数值进行修改，为了提高程序灵活性设置const形参
    os << "书号：" <<item.isbn() << " 销售数量："<<item.units_sold
        << " 总销售额：" <<item.revenue<< " 平均价格：" <<item.avg_price() ;
    return os;
}
Sale_data add(const Sale_data &lhs,const Sale_data&rhs)
{
    Sale_data sum=lhs;
    sum.combine(rhs);
    return sum;
}