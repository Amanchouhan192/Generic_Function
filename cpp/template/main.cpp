#include <iostream>
#include<conio.h>

using namespace std;
class complex{
private:
    int a , b;
public:
    void setData(int x, int y)
    {
        a  = x;
        b  = y;
    }
void showData(){

     cout<<"addition of complex no is = "<<a<<"+"<<b<<"i"<<endl;

    }
complex add(complex c)
{
  complex temp;
  temp.a = a + c.a;
  temp.b = b + c.b;
  return(temp);


    }

};


int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3 = c1.add(c2);
    c3.showData();
    getch();
    return 0;
}
