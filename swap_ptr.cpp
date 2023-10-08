/*exp9_4-Swapping using pointer*/
# include <iostream>
using namespace std;

void swap(int *a,int *b)
{  int temp;
   temp=*a;
   *a=*b;
   *b=temp;   }

int main()
{
    int a=2;
    int b=5;
    swap(&a,&b);
    cout<<"After swapping-"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}
/*output:
After swapping-
5
2 */