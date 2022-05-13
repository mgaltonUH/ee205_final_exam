///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Mariko Galton <mgalton@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Shape.h"

class Rectangle : Shape {
protected:
    double length;
    double width;
public:
    double newLength;
    double validatenewLength();
    double newWidth;
    double validatenewWidth();
public:
    double getLength();
    double getWidth();
public:
    double compute_area();

};

