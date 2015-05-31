/* MyObject.h */

#ifndef __MYOBJECT_H____9873243467898
#define __MYOBJECT_H____9873243467898

class MyObject
{
  
  public:
  
    MyObject(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    
  private:
  
    int _x;
    int _y;
    
};

#endif
