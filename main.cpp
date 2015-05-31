/* main.cpp */

#include <iostream>
#include "MyObject.h"

void attemptToModifyObject(MyObject myObject);

int main()
{
  MyObject myObject(1, 2);
  attemptToModifyObject(myObject);
  std::cout << "x=" << myObject.getX() << ", y=" << myObject.getY() << std::endl;
  return 0;
}

void
attemptToModifyObject(MyObject myObject)
{
  myObject.setX(3456);
  myObject.setY(5897);
}
