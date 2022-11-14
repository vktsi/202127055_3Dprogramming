#include <iostream>
#pragma once

using namespace std;

// (1) 단위행렬, 단위행렬로 초기화하는 함수 작성 - mat3
class mat3
{
	
public:
	int num[3][3] = {}; //2차원 4x4 행렬, 0으로 생성

	mat3()
	{
		num[0][0] = 1;
		num[0][1] = 0;
		num[0][2] = 0;

		num[1][0] = 0;
		num[1][1] = 1;
		num[1][2] = 0;

		num[2][0] = 0;
		num[2][1] = 0;
		num[2][2] = 1;
	}
	// 0으로 초기화

	void print();

	//mat3 과 mat3을 곱연산
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
	int num[4][4] {}; //2차원 4x4 행렬, 0으로 생성

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

	void print();

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

void mat3::print() //출력
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}
}

void mat4::print() //출력
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}
}

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
	void print();
};

void trans3::print() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}
}
