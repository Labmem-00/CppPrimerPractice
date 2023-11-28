#include"Sale_data.h"
int main()
{
    Sale_data total;
    if(read(std::cin,total)){
        Sale_data trans;
        while(read(std::cin,trans)){
            if(total.isbn()==trans.isbn())
                total.combine(trans);
            else{
                print(std::cout,total)<<std::endl;
                total =trans;
            }
        }
        print(std::cout,total);
    }else{
        std::cerr << "No data?"<<std::endl;
    }
}