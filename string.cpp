#include<iostream>
#include<string.h>
using namespace std;
class student{
    string name;
    int roll , marks;
    public:
    student(string s, int r , int m)
    {
        name=s;
        name=r;
        name=m;

    }
    void display()
    {
        cout<<"name = "<<name<<endl;
         cout<<"roll no. = "<<roll<<endl;
          cout<<"marks = "<<marks<<endl;

    }
};
int main(){
    student s1 ("satyam",110,65);
    s1.display();
    return 0;
}