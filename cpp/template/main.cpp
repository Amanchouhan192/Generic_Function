#include <iostream>

using namespace std;
template <class x>
x big(x a , x b)
{
    if(a>b)
        return(a);
    else
        return(b);

}

int main()
{   cout<<"biger is "<<big(5.6,8.9)<<endl;
    cout<<"biger is "<<big(6,9)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
