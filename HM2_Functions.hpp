#ifndef HM2_FUNC
#define HM2_FUNC

#include <iostream>
#include <cmath>
using namespace std;

string BasetoDec(string source, int base) {

    /* 
    BASE(2-9)-TO-DECIMAL CONVERSION.
    Based on Demo 4.15.
    Modified to work for numbers of base 2 to base 9. 
    */

    string target = "";
    int digit = 0;
    int temp = 0;

    for (int i = 0; i < source.size(); i++) {

        digit = source[i] - '0';
        temp += digit * pow(base, source.size() - (i + 1));

    }

    target = to_string(temp);
    return target;

}

string DectoBase(string source, int base); // FIX

string DectoHex(string source); // FIX

string HextoOct(string source); // FIX

string HextoDec(string source); // FIX


#endif