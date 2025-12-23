//
//  Point.hpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "string"

class Point {
    double m_x;
    double m_y;
    
public:
    // Init constructor
    Point();
    
    // init destructor
    ~Point();
    
    // Getters
    double GetX();
    double GetY();
    
    // setters
    void SetX(double newX);
    void SetY(double newY);
    
    // ToString
    std::string ToString();
};

#endif

