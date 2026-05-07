#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &other){(void)other;}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){(void)other;return *this;}
ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(const std::string &literal){

    
    if (literal.empty())
    {
        std::cerr << "invalid input" << std::endl;
        return;
    }
    if (literal.size() == 1 && !isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "char : " << c << std::endl;
        std::cout << "int : "<< static_cast<int>(c) << std::endl;
        std::cout << "char : " << static_cast<float>(c)<< ".0f"<< std::endl;
        std::cout << "char : " << static_cast<double>(c)<< ".0"<< std::endl;
        return ;
    }
    size_t i = 0;
    while (i < literal.size())
    {
        if (isdigit(literal[i])){
            i++;
        }
        else if (literal[i] == 'f'){
            std::cerr << "invalid input" << std::endl;
            return;
        }
        else 
            break;
    }
    char *str;
    double var = strtod(literal.c_str(), &str);
    if (*str && (*str != 'f' || *(str + 1))){
         std::cerr << "invalid input" << std::endl;
        return;
    }
    std::cout << "char : ";
    if (std::isnan(var) || std::isinf(var) || var < 0 || var > 127){
        std::cout << "impossible" << std::endl;
    } 
    else if (var < 32 || var == 127)
    {
        std::cout << "non displayable" << std::endl;
    }
    else 
        std::cout << "'" << static_cast<char>(var) << std::endl;
    
    std::cout << "int : ";
    if (std::isnan(var) || std::isinf(var) || var < INT_MIN || var > INT_MAX){
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << static_cast<int>(var) << std::endl;

    std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(var) << "f" << std::endl;
    std::cout << "double : " << var << std::endl;
}


/// ""
/// "a" ou "*" size 1 non digit
/// 122f
/// "38.5" ou "115.5f" valid
// "jdshfksd" ou "47.5fgg" non valid
/// 

/// strtod(c_str, **) 
