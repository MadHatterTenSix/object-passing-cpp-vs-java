/* AnotherClass.java */

public class AnotherClass {

  public AnotherClass() {
    MyObject myObject = new MyObject(1, 2);
    attemptToModifyObject(myObject);
    System.out.println("x=" + myObject.getX() + ", y=" + myObject.getY());
  }

  private void attemptToModifyObject(MyObject myObject) {
    myObject.setX(3456);
    myObject.setY(5897);
  }

}
