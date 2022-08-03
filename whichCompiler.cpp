//#include <iostream>
#include <cstdio>
char messages[][23] =
{
  "This is Clang (or EDG)",
  "This is GCC",
  "This is MSVC",
};

int count;
struct X { ~X() { ++count; } };

int main() 
{
  {
    X& a = (X() = X());
    count = 0;
  }
  puts(messages[count]);
}
