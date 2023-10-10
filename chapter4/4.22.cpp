#include<iostream>
#include<vector>
using namespace std;
string grade1(int grade)
{
     string finalgrade;
     finalgrade=(grade<60)?"fail"
                :(60<grade&&grade<75||grade==60)?"low pass"
                    :(75<grade&&grade<90||grade==75)?"pass"
                        :"high pass";
    return finalgrade;
}
string grade2(int grade)
{
    string finalgrade;
    if(grade<60)
        finalgrade="fail";
    else if(60<grade&&grade<75||grade==60)
        finalgrade="low pass";
    else if(75<grade&&grade<90||grade==75)
        finalgrade="pass";
    else 
        finalgrade="high pass";
    return finalgrade;
}
int main()
{
    int grade;
    string finalgrade;
    while (cin>>grade){
       finalgrade=grade2(grade);
    cout<<finalgrade<<endl;  
    }   
    return 0;
} 
//其实给嵌套条件运算符分好层，可读性也不会很差（