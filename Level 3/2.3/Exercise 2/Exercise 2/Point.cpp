//
//  Point.cpp
//  Exercise 2
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

#include "Point.hpp"
#include "sstream"
#include "cmath"
#include "iostream"


// Default Constructor
Point::Point() {
    m_x = 0.0;
    m_y = 0.0;
    std::cout << "[CONSTRUCTOR]" << std::endl;
}

Point::~Point() {
    std::cout << "[DESTRUCTOR]" << std::endl;
}

// Fill Copy Constructor
Point::Point(const Point &pt) {
    std::cout << "[CONSTRUCTOR]" << std::endl;
    this->m_x = pt.m_x;
    this->m_y = pt.m_y;
}

double Point::GetX() const {
    return m_x;
}

double Point::GetY() const {
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

// Distance from Origin
double Point::DistanceOrigin() {
    return std::sqrt( (this->m_x * this->m_x) + (this->m_y * this->m_y) );
}

// Distance from another point
double Point::Distance(const Point &p) const {
    return std::sqrt((this->m_x - p.GetX())*(this->m_x - p.GetX()) + (this->m_y - p.GetY())*(this->m_y - p.GetY()));
}
