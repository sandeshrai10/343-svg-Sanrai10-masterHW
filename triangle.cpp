#include "triangle.h"
#include <fstream>

// operator<< equivalent to write the object out
std::ostream &Triangle::write(std::ostream &out) const {
  out << "      <polygon ";
  out << "points=\"" << x1 << "," << y1 << " " << x2 << "," << y2 << " " << x3
      << "," << y3 << "\" ";
  out << "fill=\"" << color << "\" ";
  out << "/>" << std::endl;

  return out;
}

// operator>> equivalent to read the object contents
std::istream &Triangle::read(std::istream &in) {
  in >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> color;
  return in;
}
