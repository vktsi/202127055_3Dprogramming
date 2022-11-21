#include <iostream>
#pragma once

using namespace std;


class vec3 //3*1 백터 클래스
{
public:
	float x, y, z;

	vec3() //0으로 초기화
	{
	}

	vec3(float x, float y, float z) //x y z 값을 입력하여 생성
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

float radians(float degree)
{
	return degree * PI / 180;
}

// 단위행렬, 단위행렬로 초기화하는 함수 작성 - mat3
class mat3 //3*3 행렬
{
public:

	//0으로 초기화
	float num[3][3] = {};

	//0으로 초기화
	mat3()
	{
	}

	//값을 넣어 사용하기 위해 float으로 초기화
	mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		num[0][0] = a;
		num[0][1] = b;
		num[0][2] = c;
		num[1][0] = d;
		num[1][1] = e;
		num[1][2] = f;
		num[2][0] = g;
		num[2][1] = h;
		num[2][2] = i;
	}

	//mat3 를 mat3 와 곱연산
	mat3 operator*(mat3 mat)
	{
		mat3 result;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.num[i][j] += (num[i][j] * mat.num[j][i]);
			}
		}

		return result;
	}

	//mat3 를 vec3 와 곱연산
	vec3 operator*(vec3 vec)
	{
		vec3 result;

		result.x = (num[0][0] * vec.x) + (num[1][0] * vec.y) + (num[2][0] * vec.z);
		result.y = (num[0][1] * vec.x) + (num[1][1] * vec.y) + (num[2][1] * vec.z);
		result.z = (num[0][2] * vec.x) + (num[1][2] * vec.y) + (num[2][2] * vec.z);

		return result;
	}

	//mat3 과 mat3을 나누기
	mat3 operator/(mat3 mat)
	{
		mat3 result;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.num[i][j] += (num[i][j] / mat.num[j][i]);
			}
		}

		return result;
	}

	//mat3 과 mat3을 빼기
	mat3 operator-(mat3 mat)
	{
		mat3 result;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.num[i][j] += (num[i][j] - mat.num[j][i]);
			}
		}

		return result;
	}

	//mat3 과 mat3을 더하기
	mat3 operator+(mat3 mat)
	{
		mat3 result;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result.num[i][j] += (num[i][j] + mat.num[j][i]);
			}
		}

		return result;
	}
};

// (1) 단위행렬, 단위행렬로 초기화하는 함수 작성 - mat4
class mat4
{

public:
	int num[4][4]{}; //2차원 4x4 행렬, 0으로 생성

	mat4()
	{
		num[0][0] = 1;
		num[0][1] = 0;
		num[0][2] = 0;
		num[0][3] = 0;

		num[1][0] = 0;
		num[1][1] = 1;
		num[1][2] = 0;
		num[1][3] = 0;

		num[2][0] = 0;
		num[2][1] = 0;
		num[2][2] = 1;
		num[2][3] = 0;

		num[3][0] = 0;
		num[3][1] = 0;
		num[3][2] = 0;
		num[3][3] = 1;
	}
	// 0으로 초기화

	//mat4 와 mat4 를 곱연산
	mat4 operator*(mat4 mat)
	{
		mat4 result;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				result.num[i][j] += (num[i][j] * mat.num[j][i]);
			}
		}

		return result;
	}

	//mat4 와 mat4 를 나누기
	mat4 operator/(mat4 mat)
	{
		mat4 result;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				result.num[i][j] += (num[i][j] / mat.num[j][i]);
			}
		}

		return result;
	}

	//mat4 와 mat4 를 빼기
	mat4 operator-(mat4 mat)
	{
		mat4 result;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				result.num[i][j] += (num[i][j] - mat.num[j][i]);
			}
		}

		return result;
	}

	//mat4 와 mat4 를 더하기
	mat4 operator+(mat4 mat)
	{
		mat4 result;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				result.num[i][j] += (num[i][j] + mat.num[j][i]);
			}
		}

		return result;
	}
};


//(2) - 전치행렬 3x3
class trans3 {
public:

	int num[3][3]; // 3x3으로 생성
	int a; //행렬을 저장할 함수

	void Transpose() {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a = num[i][j];
				num[i][j] = num[j][i];
				num[j][i] = a;
			}
		}
	}
};
