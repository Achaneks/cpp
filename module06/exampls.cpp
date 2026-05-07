#include <iostream>
#include <typeinfo>
using namespace std;

// class ineteger
// {
// public:
// int x_in;
// ineteger(int x = 5): x_in(x){cout << "constructor called" << endl;};

//     operator string(){
//         cout << "operator conversion called" << endl;
//         return to_string(x_in);
//     }
// };
class A
{
    public:
        virtual void print(){cout << "AAA\n";}
    
};

class B : public A
{
    public:
        void print(){cout << "BBB\n";}
};

class C : public A
{
    public:
        void print(){cout << "CCC\n";}
};

int main()
{
    // char a = 'f';
    // char *c = &a; 
    // int *b = (int *)(c);

    // cout << *b << endl;
    // cout << *c << endl;

    // ineteger i(250);
    // string s = static_cast<string>(i);
    // cout << i.x_in << endl;
    // cout << s << endl;
    // int a = 1631674946;
    // char* b = reinterpret_cast<char*>(&a);

    // // cout << *(b + 4) << endl;
    // int *ptr = reinterpret_cast<int *>(b);

    // cout << *ptr << endl;

    //------------------------------------

//    {
//     A* x = new B();
//     // cout << typeid(x).name()<< endl;
//     B* y = dynamic_cast<B*>(x);
//     // cout << typeid(y).name()<< endl;
//     y->print();
//     C* z = dynamic_cast<C*>(x);
//     // cout << typeid(z).name()<< endl;
//     if (!z)
//         cout << "cast failed\n";
//     else
//         z->print();
//     }
//     cout << "\n----------------\n";
//     {
//         B f;
//         &x = f;
//         B &y = dynamic_cast<B&>(x);
//         y.print(); 
//         try
//         {
//             C& z = dynamic_cast<C&>(x);
//             z.print();
//         }
//         catch(std::exception &e)
//         {
//             cout << e.what() << " error"  << endl;
//         }
//     }
// }