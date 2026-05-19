#include "easyfind.hpp"
#include <vector>
#include <list>


int main(){
    std::vector<int> ve;
    try{
        for (int i = 0; i < 10 ; i++)
            ve.push_back(i);
        std::cout << *easyfind(ve,88) << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::list<int> li;
    try{
        for (int i = 0; i < 10 ; i++)
            li.push_back(i);
        std::cout << *easyfind(ve,9) << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}