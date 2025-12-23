//
//  main.cpp
//  Exercise 4
//
//  Created by Akhil Muthya Narayanachary on 24/10/25.
//


#include <iostream>
#include "Point.hpp"
#include "string"

/**
 Before copy constructor is added:
    - Constructor: Called 2 times
    - Destructor: Called 6 times
 After Copy constructor is added:
    - Constructor: Called 6 times
    - Destructor: Called 6 times
 
 After Distance method took const reference
    - Constructor Called 2 times
    - Destructor: Called 2 times
 
 */

int main(int argc, const char * argv[]) {
    double x1,y1,x2,y2;
    // Get the X and Y coordinates
    std::cout << "Please enter the x coordinates for the first point: ";
    std::cin >> x1;
    std::cout << "Please enter the y coordinates for the first point: ";
    std::cin >> y1;
    std::cout << "Please enter the x coordinates for the second point: ";
    std::cin >> x2;
    std::cout << "Please enter the y coordinates for the second point: ";
    std::cin >> y2;
    
    // Default Constructor
    Point p1;
    Point p2;
    // Set using X and Y
    p1.X(x1); p1.Y(y1);
    p2.X(x2); p2.Y(y2);
    
    // Print using string representation and getters for first point
    std::cout << "String representation for Point 1: " << p1.ToString() << std::endl;
    std::cout << "X Coordinate for Point 1: " << p1.X() << std::endl;
    std::cout << "Y Coordiante for Point 1: " << p1.Y() << std::endl;
    
    // Print using string representation and getters for first point
    std::cout << "String representation for Point 2: " << p2.ToString() << std::endl;
    std::cout << "X Coordinate for Point 2: " << p2.X() << std::endl;
    std::cout << "Y Coordiante for Point 2: " << p2.Y() << std::endl;
    
    // Distance of each of the points from the origin
    std::cout << "Distance of Point 1 from the origin: " << p1.Distance() << std::endl;
    std::cout << "Distance of Point 2 from the origin: " << p2.Distance() << std::endl;
    
    // Distance of the points from each other
    std::cout << "Distance of Point 1 from Point 2: " << p1.Distance(p2) << std::endl;
    std::cout << "Distance of Point 1 from Point 2: " << p1.Distance(p2) << std::endl;
    
    // Check if both are equal
    std::cout << "Check if the distances are equal: " << ((p1.Distance(p2) == p2.Distance(p1)) ? "true" : "false") << std::endl;
    
    const Point cp(1.5, 3.9);
//    cp.X(1.52); Causes errors
    std::cout << "Const point x coordinate is: " << cp.X() <<std::endl;
    return 0;
}

