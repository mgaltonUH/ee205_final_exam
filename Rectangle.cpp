///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <iostream>
#include "Rectangle.h"



int main() {
    int area;
    int length;
    int width;

    double validatenewLength {
        if(newLength <= 0) {
            throw std::invalid_argument("length must be > 0")
        } else {
            return true;
        }
    };
    double validatenewWidth {
        if(newWidth <= 0) {
            throw std::invalid_argument("Width must be > 0")
        }
        else {
            return true;
        }
    };
double compute_area {

};
}