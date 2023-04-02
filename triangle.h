/**
 * SVG Triangle
 **/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Triangle : public SVG {
public:
  // operator<< equivalent to write the object out
  ostream &write(std::ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(std::istream &in) override;

private:
  // coordinates for the three vertices of the triangle
  int x1{0}, y1{0};
  int x2{0}, y2{0};
  int x3{0}, y3{0};

  // color of the triangle
  string color{"black"};
};
#endif
