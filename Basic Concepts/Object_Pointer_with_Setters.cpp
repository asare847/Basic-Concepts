/*
Author: Gideon Asare
Topic : Object pointer with setters
Date : 28th January 2018
Email: kofiowusu847@gmail.com
Language: C++
*/

#include <iostream>
using namespace std;

// Object pointer using the setter with pointer
class Human{
private:
    int age;

public:
    void set_age(int Age);
    int  get_age();
};

void Human::set_age(int Age){
    age = Age;
}

int Human::get_age(){
    return age;
}

int main()
{
      Human human[4]; // Creating Object Array
      Human *hptr;
      hptr = human;
   /*  */ 
   (hptr+0)->set_age(6);//setting at the index[0]
   (hptr+1)->set_age(7);//setting at the index[1]
   (hptr+2)->set_age(8);//setting at the index[2]
   (hptr+3)->set_age(9);//setting at the index[3]

 for (int i = 0; i <4;i++){
   cout << (hptr+i)->get_age(); // iterating the array
 }
    //
  /*  uncomment this out to get the same result
   cout << human[0].getAge(); // outputs 6
   cout << human[1].getAge(); // outputs 7
   cout << human[2].getAge(); // outputs 8
   cout << human[3].getAge(); // outputs 9
   */

}
