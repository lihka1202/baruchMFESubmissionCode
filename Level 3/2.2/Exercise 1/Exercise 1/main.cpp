//
//  main.cpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

#include <iostream>
#include "Point.hpp"

int main(int argc, const char * argv[]) {
    double x,y;
    // Get the X and Y coordinates
    std::cout << "Please enter the x coordinate: ";
    std::cin >> x;
    std::cout << "Please enter the y coordinate: ";
    std::cin >> y;
    
    // Default Constructor
    Point p;
    
    // Set using X and Y
    p.SetX(x); p.SetY(y);
    
    // Print using string representation and getters
    std::cout << "String representation: " << p.ToString() << std::endl;
    std::cout << "X Coordinate: " << p.GetX() << std::endl;
    std::cout << "Y Coordiante: " << p.GetY() << std::endl;
    return 0;
}
