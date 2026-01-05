#include <iostream>
#include <fstream>
#include <string>

class a {
    protected:
        char * name = new char(10);
    public :
        a(){std::cout << "a constructor called" << std::endl;};
        virtual ~a(){delete name;std::cout << "a destructor called " << std::endl; };
        virtual void ft_print_message() = 0;

};
class b: public a{
    char *next = new char(10);
        public :
    b(){std::cout << "b constructor called" << std::endl;};
    ~b(){
        delete next;
        std::cout << "b destructor called " << std::endl; };
    void ft_print_message(){std::cout << "hello how are you" << std::endl;}
};

int main(){
    b first;
}
