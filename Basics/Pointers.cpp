#include <iostream>

void pointer_basics_1();
void pointer_basics_2();
void pointer_basics_3();

int main()
{
    std::cout << std::endl << "############## Pointer Basics - 1 ##############" << std::endl;

    pointer_basics_1(); //Pointers are variables that store the address of other variables

    std::cout << std::endl << "############## Pointer Arithmetic ##############" << std::endl;

    pointer_basics_2(); //Pointer arithmetic

    std::cout << std::endl << "############## Pointer Types ##############" << std::endl;

    pointer_basics_3(); //Pointer types
}

void pointer_basics_1() 
{
    int a; //Variable a of type int (assume address 204)
    int *p; //Pointer variable that points to an integer (assume address 64)
    p = &a; //Pointer variable p points to the address of variable a (64 -> 204)
    a = 5;

    std::cout << "address of p: " << p << std::endl; //Will print the value of p (i.e. 204)
    std::cout << "address of a: " << &a << std::endl; //Will print the address of p (i.e. 204)
    std::cout << "address of p: " << &p << std::endl; //Will print the address of p (i.e. 64)
    std::cout << "value p points to: " << *p << std::endl; //Will print the value of a (i.e. 5) Known as deferencing
    *p = 8; //Value at a will be 8
    std::cout << "value at address p is: " << *p << std::endl; //Will print the value of a (i.e. 8)
}

void pointer_basics_2() //Pointer arithmetic
{
    int a = 10;
    int *p;
    p = &a;
    std::cout << "address of p: " << p << std::endl; //If p is 2002
    std::cout << "value at address p: " << *p << std::endl; //If p is 2002
    std::cout << "size of int is: " << sizeof(int) << std::endl;
    std::cout << "address of p+1 is: " << p + 1 << std::endl; //p+1 is 2006 (int takes up 4 bytes)
    std::cout << "value at address p+1 is: " << *(p + 1) << std::endl; //p+1 is 2006 (int takes up 4 bytes)
}

void pointer_basics_3()
{
    std::cout << "size of int is: " << sizeof(int) << std::endl;
    std::cout << "size of char is: " << sizeof(char) << std::endl;
    std::cout << "size of float is: " << sizeof(float) << std::endl;
    std::cout << "size of long is: " << sizeof(long) << std::endl;
    std::cout << "size of double is: " << sizeof(double) << std::endl;

    int a = 1025;
    int *p;
    p = &a;
    std::cout << "Address = " << p << ", value = " << *p << std::endl;
    char *p0;
    p0 = (char*)p; //Typecasting
    std::cout << "Address = " << p0 << ", value = " << *p0 << std::endl;
    std::cout << "Address = " << p0+1 << ", value = " << *(p0+1) << std::endl;

    // 1025 = 00000000 00000000 00000100 00000001
}
