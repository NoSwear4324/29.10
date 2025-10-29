#include <iostream>

namespace myns1 
{
    class myclass 
    {
    public:
        void show()const
        {
            using std::cout;
            cout << "Myclass from ns1";
        }
    };
}

namespace myns2
{
    class myclass
    {
    public:
        void show()const
        {
            using std::cout;
            cout << " Myclass from ns2";
        }
    };
}
int main()
{
    myns1::myclass a;
    myns2::myclass b;
    a.show();
    b.show();
}
