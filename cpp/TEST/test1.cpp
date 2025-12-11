#include <iostream>
#include <fstream>
#include <string>

class ClapTrap {
    protected : 
        std::string name;
        int ep;
        int hp;
        int dmg;
    public :
        ClapTrap(std::string nam):name(nam) {
            ep = 10;
            hp = 10;
            dmg = 0;
        };
        ClapTrap (sting )
        void attack(const std::string& target){std::cout <<target << std::endl;};
        void takeDamage(unsigned int amount){std::cout << "damage"<<std::endl};
        void beRepaired(unsigned int amount){std};
};
class ScavTrap: virtual public ClapTrap {

    public :
        ScaveTrape(): ClapTrap()
        };
        void guardGate();
};

class FragTrap:public  ClapTrap{

    public :
        ScaveTrape(): ClapTrap()
        };
        void guardGate();
};


class DiamondTrap: virtual public FragTrap, public ScavTrap
{

}

int main()
{
   test ana;
    std::cout <<test::b << std::endl;
}
