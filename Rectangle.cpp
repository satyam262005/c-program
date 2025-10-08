#include<iostream>
#include<string.h>
using namespace std;
class Rectangle{
    
    int Length, Breadth;
    public:
    Rectangle( int l , int b)
    {
        Length=l;
        Breadth=b;
    }
    void area()
    {
        cout<<"Area="<<Length*Breadth<<endl;

    }
    void perimeter()
    {
        cout<<"Perimeter"<<2*(Length+Breadth)<<endl;
    }
    void isSquare()
    {
        (Length=Breadth)?printf("Is a Square"):printf("Not a Square") ;
    }
};
int main(){
    Rectangle r1(3,4);
