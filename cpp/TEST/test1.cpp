#include <iostream>
#include <fstream>
#include <string>

class a{
    public:
        int var;
        a(){std::cout <<"the deffault constructor for a" << std::endl;};
};
class b: public a{
    public:
        b(){std::cout <<"the deffault constructor for b" << std::endl;};

};

class c: public b{};

int main(){
    // a t1;
    // b t2;
    c t3;
}
