/* MyObject.cpp */

#include "MyObject.h"

MyObject::MyObject(int x, int y) { _x = x; _y = y; }
int MyObject::getX() { return _x; }
int MyObject::getY() { return _y; }
void MyObject::setX(int x) { _x = x; }
void MyObject::setY(int y) { _y = y; }
