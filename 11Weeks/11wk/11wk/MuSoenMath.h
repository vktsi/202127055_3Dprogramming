#include <iostream>
#pragma once

using namespace std;

// (1) �������, ������ķ� �ʱ�ȭ�ϴ� �Լ� �ۼ� - mat3
class mat3
{
	
public:
	int num[3][3] = {}; //2���� 4x4 ���, 0���� ����

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
	// 0���� �ʱ�ȭ

	void print();

	//mat3 �� mat3�� ������
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
	int num[4][4] {}; //2���� 4x4 ���, 0���� ����

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

	void print();

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

void mat3::print() //���
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

void mat4::print() //���
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
