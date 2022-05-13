#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include "Shape.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Square mySquare(2);
    std::cout << "The area of mySquare is: " << mySquare.compute_area() << std::endl;

    Rectangle myRectangle(2, 4);
    std::cout << "The area of myRectangle is: " << myRectangle.compute_area() << std::endl;
    return 0;
}

/* int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Just making sure!" << std::endl;
    return 0;
} */