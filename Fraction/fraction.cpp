#include "fraction.h"

	fraction::fraction() //�����������
	{
		x = 0; y = 1;
	}
	fraction::fraction(int a, int b) //����������
	{
		x = a;
		if (b != 0) y = b;
		else
		{
			std::cout << "error" << std::endl;
			exit(1);
		}
	}

    fraction fraction::add (fraction b) // �������� ������
	{
		fraction sum;
		sum.x = x * b.y + b.x*y;
		sum.y = y * b.y;
		int d = nod(sum.x, sum.y);
		sum.x = sum.x / d;
		sum.y = sum.y / d;
		return sum;
	}
	// ���������� ����������
	void fraction:: derive(fraction A)
	{
		std::cout << A.x<<std::endl;
		std::cout << '-' << std::endl;
		std::cout << A.y<<std::endl<<std::endl;
	}
	int fraction::nod(int a, int b) //NOD �������� �������
	{

		while (a != 0 && b != 0)
		{
			if (a > b)
				a = a % b;
			else
				b = b % a;
		}
		return a + b;
	}

	fraction fraction::multi(fraction c) //���������
	{
		fraction mul;
		mul.x=x*c.x;
		mul.y = y * c.y;
		int d = nod(mul.x, mul.y);
		mul.x = mul.x/d;
		mul.y =mul.y /d;
		return mul;
	}
	fraction fraction:: dir(fraction d)//�������
	{
		fraction dev;
		dev.x = x * d.y;
		dev.y = y * d.x;
		int dv = nod(dev.x, dev.y);
		dev.x = dev.x / dv;
		dev.y = dev.y / dv;
		return dev;
	}