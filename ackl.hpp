/*
 * Copyright (c) 2026 Kumamiee
 * Released under the MIT License
 * Requirement: C++11 or later
 */
 //Dev by Kumamiee
#ifndef K_CACLIBRARY_K //K_CACLIBRARY_K
#define K_CACLIBRARY_K
#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <sstream>
#include <chrono>
namespace ackl {
    enum class ynoutput {yes, no, empty, invalid};
inline void cinallclear() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    inline ynoutput yncheck() {
        std::string yninputcac1;
        std::getline(std::cin, yninputcac1);
        if (yninputcac1 == "y" || yninputcac1 == "Y") {
            return ynoutput::yes;
        } 
        else if (yninputcac1 == "n" || yninputcac1 == "N") {
            return ynoutput::no;
        } 
        else if (yninputcac1.empty()) {
            return ynoutput::empty;
        }
        else {
            return ynoutput::invalid;
        } 
    } 

    inline void ifsallclear(std::ifstream& ifsac) {
        ifsac.close();
        ifsac.clear();
    } 
    
    inline void allclearsstream(std::stringstream& ssac) {
        ssac.str("");
        ssac.clear();
    } 
    inline unsigned long long gettimelong() {
        auto timeackl = std::chrono::system_clock::now();
        auto durationackl = timeackl.time_since_epoch();
        return std::chrono::duration_cast<std::chrono::milliseconds>(durationackl).count();
    }
    
} //ackl end

#endif //END:K_CACLIBRARY_K
//devstart 2026/5/26
//devlastes 2026/6/10
