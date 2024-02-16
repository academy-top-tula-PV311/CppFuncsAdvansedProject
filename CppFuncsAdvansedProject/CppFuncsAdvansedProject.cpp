#include <iostream>

template <typename A, typename B>
auto Sum(A a, B b)
{
    return a + b;
}

template <typename T1, typename T2>
auto Mult(T1 a, T2 b = 0)
{
    return a * b;
}


/*
int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}
*/



auto Sum(int a, int b, int c)
{
    return a + b + c;
}

template <typename T>
void ArrayPrint(T* array, int size);

void ArrayPrint(bool* array, int size);


int main()
{
    auto n{ 60 };
    char ch{ 'A' };
    std::cout << Sum<int, int>(20, 56.89) << "\n";
    //std::cout << Sum(5.6, 7.8) << "\n";
    //std::cout << Sum(45, 20, true) << "\n";
}

