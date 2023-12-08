#include <iostream>
using namespace std;
int count=0;
class A{
    public:
        A(){
            count++;
            cout<<"No. of objects created : "<<count<<endl;
        };
        ~A(){
            cout<<"No. of Objects Destroyed : "<<count<<endl;
            count--;
        };
};

int main()
{
    cout<<"Enter Main";
    A a1, a2, a3, a4, a5, a6, a7, a8;
    {
        cout<<"Enter block 1 : "<<endl;
        A a9;
    }
    cout<<"Re-Enter main : "<<endl;
    return 0;
}
