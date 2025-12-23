//
//  Point.cpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

//#include "string"
#include "Point.hpp"
#include "sstream"


// Default Constructor
Point::Point() {
    m_x = 0.0;
    m_y = 0.0;
}

Point::~Point() {
    // Leave empty
}

double Point::GetX() {
    return m_x;
}

double Point::GetY() {
    return m_y;
}

void Point::SetX(double newX) {
    m_x = newX;
}

void Point::SetY(double newY) {
    m_y = newY;
}

std::string Point::ToString() {
    std::ostringstream oss;
    oss << "Point(" << m_x << ", " << m_y << ")";
    return oss.str();
}
