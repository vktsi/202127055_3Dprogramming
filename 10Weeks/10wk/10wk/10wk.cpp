#include <iostream>
#include "MuSoenMath.h"

using namespace std;

//vec3(float 3*1) -> 2차원좌표 + 동차좌표

//mat3(float 3*3) -> 2차원 행렬

int main()
{
    const double PI = 3.1415926; // Rotate를 위한 PI

    vec3 v = vec3(1,1,1); // 백터값

    //3, 5 이동
    mat3 Translate = mat3( 1, 0, 0, 
                           0, 1, 0, 
                           3, 5, 1 );

    //30도 이동
    mat3 Rotate = mat3(std::cos(30 * PI / 180), -std::sin(30 * PI / 180), 0,
                       std::sin(30 * PI / 180), std::cos(30 * PI / 180), 0,
                       0, 0, 1);

    //2배로 커짐
    mat3 Scale = mat3 ( 2, 0, 0,
						0, 2, 0,
						0, 0, 1 );

    vec3 p = Translate * Rotate * Scale * v;   // 3,5 이동 | 30도 회전 | 2배 확대

    cout << "X = " << p.x << " Y = " << p.y << " Z = " << p.z << endl; //X Y Z 결과값
}
