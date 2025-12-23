//
//  Point.hpp
//  Exercise 7
//
//  Created by Akhil Muthya Narayanachary on 29/10/25.
//


#ifndef POINT_HPP
#define POINT_HPP

#include "string"

// normal inline for getters and default inline for setters

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
    
    // ToString
    std::string ToString() const;
    
    // Distance from origin
    double Distance() const;
    
    // Distance from another point
    double Distance(const Point &p) const;
    
    // default inline for the setters
    void X(double newX) {
        m_x = newX;
    }

    void Y(double newY) {
        m_y = newY;
    }
};

// Normal inline for the getters, since inline is explicitly mentioned
inline double Point::X() const {
    return m_x;
}

inline double Point::Y() const {
    return m_y;
}

#endif
