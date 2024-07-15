#include <iostream>
using namespace std;
/*
void myFunction() {
  cout << "I just got executed!";
}
int main() {
  myFunction(); // call the function
  return 0;
}
*/

/*
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
*/
/*
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}
*/
/*
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}
int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}
*/

/*
int myFunction(int x) {
  return 5 + x;
}
int main() {
  cout << myFunction(3);
  return 0;
}
*/
// Friend function
class Box
{
private:
  int length;

public:
  Box() : length(0) {}
  friend int printLength(Box); // friend function
};
int printLength(Box b)
{
  b.length += 10;
  return b.length;
}
int main()
{
  Box b;
  cout << "Length of box: " << printLength(b) << endl;
  return 0;
}
