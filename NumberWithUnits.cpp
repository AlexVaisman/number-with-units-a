#include "NumberWithUnits.hpp"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>


using namespace ariel;
namespace ariel{
    NumberWithUnits temp(8,"km");//ONLY FOR PART 1 DELETE FOR PART 2

    NumberWithUnits::NumberWithUnits(double value_in , std::string unit_in){
    };

     void NumberWithUnits::read_units(std::ifstream& file){
    };

    const NumberWithUnits operator+ (const NumberWithUnits& a, const NumberWithUnits& b){
        return a;
    };
    NumberWithUnits& NumberWithUnits::operator+= ( const NumberWithUnits& b){
        return temp;
    };
    NumberWithUnits& NumberWithUnits::operator+ (){
        return temp;;
    };
    NumberWithUnits& NumberWithUnits::operator++(){
        return temp;;
    }; //prefix
    const NumberWithUnits NumberWithUnits::operator++(int){
        return temp;;
    }; //postfix

    const NumberWithUnits operator- (const NumberWithUnits& a, const NumberWithUnits& b){
        return temp;;
    };
    NumberWithUnits& NumberWithUnits::operator-= ( const NumberWithUnits& b){
        return temp;;};
    NumberWithUnits& NumberWithUnits::operator- (){
        return temp;;};
    NumberWithUnits& NumberWithUnits::operator--(){
        return temp;;}; //prefix
    const NumberWithUnits NumberWithUnits::operator--(int){
        return temp;;}; //postfix


    bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){return true;};
    bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b){return true;};
    bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b){return true;};
    bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b){return true;};
    bool operator<(const NumberWithUnits& a, const NumberWithUnits& b){return true;};
    bool operator>(const NumberWithUnits& a, const NumberWithUnits& b){return true;};


    const NumberWithUnits operator* (const NumberWithUnits& a, const double& b){
        return temp;;
    };
    const NumberWithUnits operator* (const double& a, const NumberWithUnits& b){
        return temp;;
    };

    std::ostream& operator<< (std::ostream& os, const NumberWithUnits& a){
        return os;
    };
    std::istream& operator>> (std::istream& is, const NumberWithUnits& a){
        return is;
    };
  
};



