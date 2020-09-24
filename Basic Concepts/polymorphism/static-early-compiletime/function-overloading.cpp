
/*
Author: Gideon Asare
Topic : static polymorphism, function Overloading
Date : 24th September 2020
Email: kofiowusu847@gmail.com
Language: C++
*/
/*
    function overridding occurs when a function has the same name, different  parameters 
    
*/
#include <iostream>

using namespace std;

class Parent{
    public:
    int sum(int length, int width){
       int total = length+width;
       return total;
    }
 int sum(int length, int width, int mass){
       int total = length+width+mass;
       return total;
    }
};

int main()
{
  Parent p;
  cout <<"the first sum  function is called: \t"<< p.sum(10,50) << endl; // 
   cout<<"the second sum  function is called: \t" << p.sum(10,50,20); 
   return 0;
}