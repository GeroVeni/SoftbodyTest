#include <SFML/Graphics.hpp>
#include "spring.hpp"
#include "point.hpp"
#include "shape.hpp"

Shape::Shape () { }

Shape::Shape (const std::vector<Point> & points) :
  points(points) { }

void Shape::update (double dt) {
  for (Point & p : points) {
    p.resetForce();
  }

  for (Spring & s : springs) {
    s.applyForce();
  }

  for (Point & p : points) {
    p.update(dt);
  }
}

void Shape::render (sf::RenderWindow &) {
  
}
