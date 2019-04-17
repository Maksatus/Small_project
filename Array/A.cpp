#include "A.h"
A::A() {}

A::A(int n)
{
	count = n;
	arr = new int[n];
}
void A::redrand() {
	for (int i = 0; i < count; i++)
		arr[i] = rand() % 10;
}

void A::output() 
{
	for (int i=0;i<count;i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void A::spread() {
	for (int i = 0; i < count; i++) {
		int j = rand() % count;
		int temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
}
void A::equaly() {
	int temp=0;
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (arr[i] == arr[j]) {
				temp++;
				break;
			}
		}
	}
	std::cout <<"Number of equal elements "<<count-temp << std::endl;
}
A::~A()
{
	delete[]arr;
}
