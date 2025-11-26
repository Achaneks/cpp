#include <iostream>
#include <fstream>
#include <string>

class test {
    private : 
        static int b;
    public :
        test() {};
        int ga() {return b;}
        void ttt(){std::cout << this << std::endl;}

};

int test::b = 10;

int main()
{
    // int test::b = 20;
    // test aa;
    // aa.ttt();
    std::cout << std::endl;
}
