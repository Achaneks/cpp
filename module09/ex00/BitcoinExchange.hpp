#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdexcept>
#include <iostream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _database;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        void loadDatabase(const std::string& filename);
        void processInput(const std::string& filename);

    private:
        bool isValidDate(const std::string& date) const;
        bool isLeapYear(int year) const;
        bool parseValue(const std::string& str, double& value) const;
        double getExchangeRate(const std::string& date) const;
        std::string trim(const std::string& str) const;
};

#endif