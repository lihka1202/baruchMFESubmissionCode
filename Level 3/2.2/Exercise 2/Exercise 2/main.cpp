//
//  main.cpp
//  Exercise 2
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

#include <iostream>
#include "Point.hpp"
#include "string"

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
    p1.SetX(x1); p1.SetY(y1);
    p2.SetX(x2); p2.SetY(y2);
    
    // Print using string representation and getters for first point
    std::cout << "String representation for Point 1: " << p1.ToString() << std::endl;
    std::cout << "X Coordinate for Point 1: " << p1.GetX() << std::endl;
    std::cout << "Y Coordiante for Point 1: " << p1.GetY() << std::endl;
    
    // Print using string representation and getters for first point
    std::cout << "String representation for Point 2: " << p2.ToString() << std::endl;
    std::cout << "X Coordinate for Point 2: " << p2.GetX() << std::endl;
    std::cout << "Y Coordiante for Point 2: " << p2.GetY() << std::endl;
    
    // Distance of each of the points from the origin
    std::cout << "Distance of Point 1 from the origin: " << p1.DistanceOrigin() << std::endl;
    std::cout << "Distance of Point 2 from the origin: " << p2.DistanceOrigin() << std::endl;
    
    // Distance of the points from each other
    std::cout << "Distance of Point 1 from Point 2: " << p1.Distance(p2) << std::endl;
    std::cout << "Distance of Point 1 from Point 2: " << p1.Distance(p2) << std::endl;
    
    // Check if both are equal
    std::cout << "Check if the distances are equal: " << ((p1.Distance(p2) == p2.Distance(p1)) ? "true" : "false") << std::endl;
    return 0;
}
