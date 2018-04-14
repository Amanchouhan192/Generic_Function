#include <iostream>

using namespace std;
template<typename T>
class maths{

T second, first;
public:
maths(){}

maths(T a,T b){
 second = a;
 first = b;
}
void add();
void multiply();

};
template <typename T>
void maths<T>::add()
{
    cout<<"adding the result = "<<second + first<<endl;
}
template <typename T>
void maths<T>::multiply()
{
      cout<<"multiply  the result = "<<second*first<<endl;
}

int main()
{   maths<int> obj(10,20);
    obj.add();
    obj.multiply();

    return 0;
}
