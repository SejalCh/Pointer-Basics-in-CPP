/*Exp-9-Pointer basics
exp9_1-To create a pointer and display value and address od a variable */
# include <iostream>
using namespace std;

int main() 
{
    int a=10;
    int *ptr;/*Creating a pointer*/
    ptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;/*address of the variable*/
    *ptr=20;/*Changing the value of the variable on the same address*/
    cout<<a<<endl;
    cout<<&a;
}
/*Output:
10
0x61ff08
20
0x61ff08*/