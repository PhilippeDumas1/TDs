#include <stdio.h>
#define _USE_MATH_DEFINES // for C with VS
#include <math.h>
#include "shape_cpp.hpp"

unsigned Shape_cpp::global_count_ = 0;

Shape_cpp::Shape_cpp() {}

Shape_cpp::~Shape_cpp() {}

//---Rectangle--//

Rectangle::Rectangle(const float &length, const float &width): Shape_cpp()
{ // or : length_(length), width_(width) {

    this->length_ = length; // or length_ = length; (see below)
    width_ = width;
}

float Rectangle::get_area()
{
    return length_ * width_;
}

void Rectangle::print_data()
{
    printf("Shape type : Rectangle with sides : %f %f\n",
           length_, width_);
}

//---Square---//

Square_as_Shape::Square_as_Shape(const float &length): Shape_cpp()
{
    this->length_ = length;
}

float Square_as_Shape::get_area()
{
    return length * length;
}

void Square_as_Shape::print_data()
{
    printf("Shape type : Square with sides : %f\n", length_);
}

//---Triangle---//

Triangle::Triangle(const float &length_side1, const float &length_side2, const float &length_side3) : length_side1_(length_side1), length_side2_(length_side2), length_side3_(length_side3)
{
    this->length_side1_ = length_side1;
    this->length_side2_ = length_side2;
    this->length_side3_ = length_side3;
}

float Triangle::get_area()
{
    float a = length_side1_;
    float b = length_side2_;
    float c = length_side3_;
    float d = (a + b + c) / 2.f;
    return sqrtf(d * (d - a) * (d - b) * (d - c));
}

void Triangle::print_data()
{
    printf("Shape type : Triangle with sides : %f %f %f\n",
           length_side1_, length_side2_, length_side3_);
}

Circle::Circle(const float &radius) : radius_(radius)
{
    this->radius_ = radius;
}
float Circle::get_area()
{
    return (float)M_PI * radius_ * radius_;
}

void Circle::print_data()
{
    printf("Shape type : Circle with radius : %f\n",
           radius_);
}