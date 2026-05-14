#include <iostream>

void fun(int &a, int &b){
    a = b;
}
void fun1(int &a, int &b){
    a = b;
}
int main(){
    printf("%p\n", fun);
    printf("%p\n", fun1);

}