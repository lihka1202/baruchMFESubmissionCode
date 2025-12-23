//
//  Point.cpp
//  Exercise 5
//
//  Created by Akhil Muthya Narayanachary on 24/10/25.
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

Point::Point(double newX, double newY) {
    m_x = newX;
    m_y = newY;
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

double Point::X() const {
    return m_x;
}

double Point::Y() const {
    return m_y;
}

void Point::X(double newX) {
    m_x = newX;
}

void Point::Y(double newY) {
    m_y = newY;
}

std::string Point::ToString() const {
    std::ostringstream oss;
    oss << "Point(" << m_x << ", " << m_y << ")";
    return oss.str();
}

// Distance from Origin
double Point::Distance() const {
    return std::sqrt( (this->m_x * this->m_x) + (this->m_y * this->m_y) );
}

// Distance from another point
double Point::Distance(const Point &p) const {
    return std::sqrt((this->m_x - p.X())*(this->m_x - p.X()) + (this->m_y - p.Y())*(this->m_y - p.Y()));
}

