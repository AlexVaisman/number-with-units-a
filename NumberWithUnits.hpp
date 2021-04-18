#pragma once
#include <string>
#include <map>
#include <iostream>




namespace ariel{



    class NumberWithUnits{
        private:
        static std::map<double ,std::string > unit_map;
        public:
        NumberWithUnits(double value_in , std::string unit_in);
        static void read_units(std::ifstream&  file);


        //Operators
        //Plus (+) operators
        friend const NumberWithUnits operator+ (const NumberWithUnits& a, const NumberWithUnits& b);
        NumberWithUnits& operator+= ( const NumberWithUnits& b);
        NumberWithUnits& operator+ ();
        NumberWithUnits& operator++(); //prefix
        const NumberWithUnits operator++(int); //postfix

        //Minus (-)operators
        friend const NumberWithUnits operator- (const NumberWithUnits& a, const NumberWithUnits& b);
        NumberWithUnits& operator-= ( const NumberWithUnits& b);
        NumberWithUnits& operator- ();
        NumberWithUnits& operator--(); //prefix
        const NumberWithUnits operator--(int); //postfixvvv

        //Comparison operators
        friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator<(const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator>(const NumberWithUnits& a, const NumberWithUnits& b);
        
        //Multiplication 
        friend const NumberWithUnits operator* (const NumberWithUnits& a, const double& b);
        friend const NumberWithUnits operator* (const double& a, const NumberWithUnits& b);

        //Input/Output
        friend std::ostream& operator<< (std::ostream& os, const NumberWithUnits& a);
        friend std::istream& operator>> (std::istream& is, const NumberWithUnits& a);

    };

}

