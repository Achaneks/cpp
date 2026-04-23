#include <iostream>

class A{
    private:
        int b;
    public:
        virtual void ft_print_ms(){
            std::cout << "hello from a" << std::endl;
        };
        ~A(){

        }
};

class B : public A {
    private :
        char *aa = new char[10];
    public:
    void ft_print_ms(){
        std::cout << "hello from b" << std::endl;
    }
    ~B(){
        delete aa;
    }
};


int main(){
    A *ana =  new B;
    (*ana).ft_print_ms();
    delete ana;
}