#include<iostream>
#include<string>
struct Sale_data
{
    Sale_data() = default;
    Sale_data(const std::string &s): bookNo(s){}
    Sale_data(const std::string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p*n){}
    Sale_data(std::istream &is);
    std::string bookNo;
    unsigned units_sold =0 ;
    double revenue=0.0;
    Sale_data& combine (const Sale_data&);
    double avg_price() const {return revenue/units_sold;}
    std::string isbn() const {return bookNo;}
};
std::istream &read(std::istream &is, Sale_data &item);
std::ostream &print(std::ostream &os, const Sale_data &item);
Sale_data add(const Sale_data &lhs,const Sale_data&rhs);