
/*
Author: Gideon Asare
Topic : static polymorphism, function Overridding
Date : 24th September 2020
Email: kofiowusu847@gmail.com
Language: C++
*/
/*
    function overridding occurs when a function has the same name, same  parameters from the base class and has to use inheritence cancept
    
*/
#include <iostream>

using namespace std;

class Parent{
    public:
    void show(){  // overridding function
        cout << "Base" <<  endl;
    };
};

class Child:public Parent{  /* Derived/ Child class inheriting from Base  Parent class*/                          
    public:
    void show(){  // overridding function
        cout << "Derived" <<  endl;
    }
    
};
int main()
{
  Parent p;
  p.show();
  Child c; // prints "Base"
  c.show(); // prints "Derived"
   return 0;
}