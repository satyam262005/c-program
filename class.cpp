// #include<iostream>
// using namespace  std;
// class test
// {
//     public:
//     int val;
//     void show()
//     {
//         cout<<"value:"<<val<<endl;
//     }
// };
// int main ()
// {
//     test t1,a2;
//     t1.val=9;
//     a2.val=26;
//     t1.show();
//     a2.show();

//     return 0;
// }
  
#include<iostream>
using namespace  std;
class outer {
    public:
    class inner {
    public:
    void display ()
    { 
 std :: cout << "Inner class\n";
    }
};
};
int main ()
{
    outer t1,a2;


 return 0;
}
