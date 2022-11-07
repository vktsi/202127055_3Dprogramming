#include <iostream>
#pragma once

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
};