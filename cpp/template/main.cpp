#include <iostream>

using namespace std;
template <class x, class y>
x big(x a , y b)
{
    if(a>b)
        return(a);
    else
        return(b);

}

int main()
{   cout<<"biger is "<<big(5.6,8.9)<<endl;
    cout<<"biger is "<<big(6,9)<<endl;
    cout<<"adding another placeholder"<<endl;
    cout<<"biger is "<<big(5,8.9)<<endl;

    return 0;
}
