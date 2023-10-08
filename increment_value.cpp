/*exp9_2-Increment of a value using pointer*/
# include <iostream>
using namespace std;

void inc(int *a)
{ ++*a;}

int main() 
{
   int a=2;
   inc(&a);
   cout<<"Incremented value:"<<a<<endl;
}
/*Output:
Incremented value:3*/