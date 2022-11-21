#include <iostream>
#pragma once

using namespace std;


class vec3 //3*1 ���� Ŭ����
{
public:
	float x, y, z;

	vec3() //0���� �ʱ�ȭ
	{
	}

	vec3(float x, float y, float z) //x y z ���� �Է��Ͽ� ����
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

// �������, ������ķ� �ʱ�ȭ�ϴ� �Լ� �ۼ� - mat3
class mat3 //3*3 ���
{
public:

	//0���� �ʱ�ȭ
	float num[3][3] = {};

	//0���� �ʱ�ȭ
	mat3()
	{
	}

	//���� �־� ����ϱ� ���� float���� �ʱ�ȭ
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

	//mat3 �� mat3 �� ������
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

	//mat3 �� vec3 �� ������
	vec3 operator*(vec3 vec)
	{
		vec3 result;

		result.x = (num[0][0] * vec.x) + (num[1][0] * vec.y) + (num[2][0] * vec.z);
		result.y = (num[0][1] * vec.x) + (num[1][1] * vec.y) + (num[2][1] * vec.z);
		result.z = (num[0][2] * vec.x) + (num[1][2] * vec.y) + (num[2][2] * vec.z);

		return result;
	}

	//mat3 �� mat3�� ������
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

	//mat3 �� mat3�� ����
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

	//mat3 �� mat3�� ���ϱ�
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

// (1) �������, ������ķ� �ʱ�ȭ�ϴ� �Լ� �ۼ� - mat4
class mat4
{

public:
	int num[4][4]{}; //2���� 4x4 ���, 0���� ����

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
	// 0���� �ʱ�ȭ

	//mat4 �� mat4 �� ������
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

	//mat4 �� mat4 �� ������
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

	//mat4 �� mat4 �� ����
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

	//mat4 �� mat4 �� ���ϱ�
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


//(2) - ��ġ��� 3x3
class trans3 {
public:

	int num[3][3]; // 3x3���� ����
	int a; //����� ������ �Լ�

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
