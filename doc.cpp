#include<iostream>
using namespace std;
class Rectangle {
    public:
    float length;
    float breadth;
    float calculateArea()
        {
            return(length*breadth);
        }
    
};
int main()
{
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout<<"Area of r1 ="<<r1.calculateArea();
    Rectangle r2 ;
    r2.length = 5;
    r2.breadth = 10;
    cout<<"Area of r2="<<r2.calculateArea();
    return(0);
}/*
PS D:\Pooja160> cd "d:\Pooja160\" ; if ($?) { g++ welcome.cpp -o welcome } ; if ($?) { .\welcome }
Area of r1 =200Area of r2=50
PS D:\Pooja160> 
*/