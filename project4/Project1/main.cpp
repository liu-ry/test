#include<iostream>
using namespace std;

/*  File name:  Test4
**  Author:  ������
**  Time:  2021/8/3
**  Description:  �����Լ��ı�׼�������Mycout���Գ����������Ƚ������������
*/

class Complex
{
public:
    double real;
    double imag;
    Complex(double x, double y)
    {
        real = x;
        imag = y;
    }
};

class Mycout
{
public:
    Mycout& operator << (char c) {
        printf("%c", c);
        return *this;
    }
    Mycout& operator << (int n) {
        printf("%d", n);
        return *this;
    }
    Mycout& operator << (double d) {
        printf("%f", d);
        return *this;
    }
    Mycout& operator << (const char* s) {
        printf("%s", s);
        return *this;
    }
    Mycout& operator << (Complex x) {
        printf("%f + %f i", x.imag,x.real);
        return *this;
    }
    Mycout& operator<<(void(*Endl)())
    {
        (*Endl)();
        return *this;
    }
};

void Endl() 
{
    printf("\r\n");
}

int main() {
    Mycout myout;
    char test1 = 'a';
    int test2 = 100;
    double test3 = 100.12345;
    const char* test4 = "test";
    Complex test5(123.123, 789.789);
    myout << test1 << Endl; 
    myout << test2 << Endl;
    myout << test3 << Endl;
    myout << test4 << Endl;
    myout << test5 << Endl;

    system("pause");
    return 0;
}