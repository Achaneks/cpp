#include <iostream>
#include <fstream>
#include <string>

int sum(int a,int b)
{
    return a + b;
}

int ft_m(int a,int b)
{
    return (a * b);
}


int main(int ac , char *av[])
{
    int (*ptr_to_fun[2])(int a,int b) = {&sum,&ft_m};

    std::cout << (ptr_to_fun[1])(8 ,6) << std::endl;

}