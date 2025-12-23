//
//  Point.hpp
//  Exercise 4
//
//  Created by Akhil Muthya Narayanachary on 24/10/25.
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
    Point(double newX, double newY);
    
    // init destructor
    ~Point();
    
    // Init Copy Constructor
    Point(const Point &pt);
    
    // Getters
    double X() const;
    double Y() const;
    
    // setters
    void X(double newX);
    void Y(double newY);
    
    // ToString
    std::string ToString() const;
    
    // Distance from origin
    double Distance() const;
    
    // Distance from another point
    double Distance(const Point &p) const;
};

#endif
