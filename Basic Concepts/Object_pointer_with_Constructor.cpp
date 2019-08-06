

/*
    Author : Gideon Asare
    Date : 30th January 2018
    Topic : Object Pointer with Constructor
    Language : C++

*/
#include <iostream>

using namespace std;

class Human{
private:
    int age;
public:
    Human(int Age){

     age = Age;

    }

    int getAge(){

    return age;
    }
};


int main()
{
   Human human[4] = {Human(6),Human(7),Human(8),Human(9)}; // Array
   Human *hptr;  //introducing the pointer
   hptr = human; //assigning the pointer to the object


   for(int x = 0; x<4; x++){
    cout << (hptr+x)->getAge() << endl; // iterating the array doing some pointer arithmetics
   }


/*
   cout << human[0].getAge(); // outputs 9
   cout << human[1].getAge(); // outputs 7
   cout << human[2].getAge(); // outputs 8
   cout << human[3].getAge(); // outputs 9
*/
    return 0;
}
