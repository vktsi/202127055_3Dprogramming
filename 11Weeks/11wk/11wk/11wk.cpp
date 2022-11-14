#include <iostream>
#include "MuSoenMath.h"

using namespace std;

int main()
{
    mat3 m3;
    mat4 m4;
    cout << "" << endl;
    cout << "(1) 단위행렬로 초기화" << endl;
    cout << "----------------------" << endl;
    cout << "         mat3         " << endl;
    cout << "" << endl;
    m3.print();
    cout << "" << endl;
    cout << "----------------------" << endl;
    cout << "         mat4         " << endl;
    cout << "" << endl;
    m4.print();


    trans3 t3 = { 1, 0, 0,
                  0, 1, 0,
                  3, 5, 1 };

    cout << "" << endl;
    cout << "(2) 전치행렬 만들기" << endl;
    cout << "----------------------" << endl;
    cout << "         mat3         " << endl;
    cout << "" << endl;
    t3.print();
}
