// // C++ Program to cast
// // class object to string
// // object
// #include <iostream>
// #include <string>
// using namespace std;

// // new class
// class integer {
//     int x;

// public:
//     // constructor
//     integer(int x_in = 1000)
//         : x{ x_in }
//     {
//         cout << "Constructor Called" << endl;
//       cout << x_in << std::endl;
//     }

//     // user defined conversion operator to string type
//     operator string()
//     {
//         cout << "Conversion Operator Called" << endl;
//         return to_string(x);
//     }
// };

// // Driver code
// int main()
// {
//     integer objj;
//     integer obj(3);
//     string str = obj;
//     obj = 20;
//     string str3 = obj;
//     cout << "--------- "<< str3 << std::endl;

//     // using static_cast for typecasting
//     string str2 = static_cast<string>(obj);
//     obj = static_cast<integer>(30);

//     return 0;
// }

// C++ Program to demonstrate
// static_cast
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
//     float f = 3.5;

//     // Implicit type case
//     // float to int
//     int a = f;
//     cout <<std::fixed << "The Value of a: " << a;

//     // using static_cast for float to int
//     float b = static_cast<float>(a);
//     cout << std::fixed <<"\nThe Value of b: " << b << std::endl;
// }

// C++ program to demonstrate 
// static_cast to cast 'to and 
// from' the void pointer
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
//   int i = 10;
// //   char h = 'h';


//   void* v = static_cast<void*>(&i);
//   int* ip = static_cast<int*>(v);
//   cout << *ip << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// // Base Class declaration
// class Base {
// public:
//     virtual void print() {
//         cout << "Base" << endl;
//     }
// };

// // Derived1 class declaration
// class Derived1 : public Base {
// public:
//     void print() {
//         cout << "Derived1" << endl;
//     }
// };

// int main() {
//     Derived1 d1;

//     // Base class pointer holding
//     // Derived1 Class object
//     Base* bp = &d1;

//     // Dynamic_casting
//     Derived1* dp2 = dynamic_cast<Derived1*>(bp);
//     if (dp2 == nullptr)
//         cout << "Casting Failed" << endl;
//     else
//         cout << "Casting Successful" << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// // Non-polymorphic base class
// class Base {
// public:
//     void print() {
//         cout << "Base" << endl;
//     }
// };

// class Derived1 : public Base {
// public:
//     void print() {
//         cout << "Derived1" << endl;
//     }
// };

// int main() {
//     Derived1 d1;
//     Base* bp = &d1;

//     // Dynamic_casting
//     Derived1* dp2 = dynamic_cast<Derived1*>(bp);
//     if (dp2 == nullptr)
//         cout << "Casting Failed" << endl;
//     else
//         cout << "Casting Successful" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

class Base {
    virtual void print() {
        cout << "Base" << endl;
    }
};

// Derived1 class declaration
class Derived1 : public Base {
    void print() {
        cout << "Derived1" << endl;
    }
};

// Derived2 class declaration
class Derived2 : public Base {
    void print() {
        cout << "Derived2" << endl;
    }
};

int main() {
    Derived1 d1;
    Base* bp = &d1;


    // Dynamic Casting
    // Derived2* dp2 = dynamic_cast<Derived2*>(bp);
      Derived1* dp2 = dynamic_cast<Derived1*>(bp);

    // Exception handling block
    if (dp2 == nullptr)
        cout << "Casting Failed" << endl;
    else
        cout << "Casting Successful" << endl;
    try {
        Derived2& r1 = dynamic_cast<Derived2&>(d1);
    }
    catch (std::exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}




// C++ Program demonstrate if the cast
// fails and new_type is a reference
// type it throws an exception
// #include <exception>
// #include <iostream>
// using namespace std;

// class Base {
//     virtual void print() {
//         cout << "Base" << endl;
//     }
// };

// class Derived1 : public Base {
//     void print() {
//         cout << "Derived1" << endl;
//     }
// };

// class Derived2 : public Base {
//     void print() {
//         cout << "Derived2" << endl;
//     }
// };

// int main() {
//     Derived1 d1;
//     Base* bp = dynamic_cast<Base*>(&d1);

//     // Type casting
//     Derived1* dp2 = dynamic_cast<Derived1*>(bp);

//     // Exception handling block
//     try {
//         Derived2& r1 = dynamic_cast<Derived2&>(d1);
//     }
//     catch (std::exception& e) {
//         cout << e.what() << endl;
//     }

//     return 0;
// }