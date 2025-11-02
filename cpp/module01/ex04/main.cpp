/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achanek <achanek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:41:05 by achanek           #+#    #+#             */
/*   Updated: 2025/11/02 21:57:19 by achanek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Replace.hpp"


static bool readFileToString(const std::string &filename, std::string &out) {
    std::ifstream in(filename.c_str(), std::ios::in | std::ios::binary);
    if (!in) return false;
    out.assign((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    return true;
}

static bool writeStringToFile(const std::string &filename, const std::string &content) {
    std::ofstream out(filename.c_str(), std::ios::out | std::ios::binary | std::ios::trunc);
    if (!out) return false;
    out << content;
    return true;
}



int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty()) {
        std::cerr << "Error: s1 must not be empty\n";
        return 1;
    }
    std::string content;
    if (!readFileToString(filename, content)) {
        std::cerr << "Error: cannot open input file '" << filename << "'\n";
        return 1;
    }
    std::string replaced = replaceAll(content, s1, s2);
    std::string outname = filename + ".replace";
    if (!writeStringToFile(outname, replaced)) {
        std::cerr << "Error: cannot write to output file '" << outname << "'\n";
        return 1;
    }
    return 0;
}
