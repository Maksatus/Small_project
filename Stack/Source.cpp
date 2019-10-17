#include <iostream>
#include <cassert>
#include <iomanip>
#include <clocale>

using namespace std;

template<class T> class stack
{
private:
	T* stackPtr;                     
	const int size;
	int top;
public:
	stack(int = 0);                  
	stack(const stack<T>&);     
	~stack();                         

	inline void push(const T&);     // ��������� ������� � ������� �����
	inline T pop();                   // ������� ������� �� ������� ����� � ������� ���
	inline void printStack();         // ����� ����� �� �����
	inline const T& Peek(int) const; // n-� ������� �� ������� �����
	inline int getStackSize() const;  // �������� ������ �����
	inline T* getPtr() const;         // �������� ��������� �� ����
	inline int getTop() const;        // �������� ����� �������� �������� � �����
};
template <class T>
stack<T>::stack(int maxSize) : size(maxSize)
{
	stackPtr = new T[size]; 
	top = 0;
}
template <class T> stack<T>::stack(const stack<T>& otherStack) : size(otherStack.getStackSize())
{
	stackPtr = new T[size]; 
	top = otherStack.getTop();

	for (int i = 0; i < top; i++)
		stackPtr[i] = otherStack.getPtr()[i];
}
template <class T> stack<T>::~stack()
{
	delete[] stackPtr; 
}
template <class T> inline void stack<T>::push(const T& value)
{
	assert(top < size); 
	stackPtr[top++] = value; 
}
template <class T> inline T stack<T>::pop()
{
	assert(top > 0); 
	stackPtr[--top];
	return stackPtr[top];
}

template <class T> inline const T& stack<T>::Peek(int nom) const
{
	assert(nom <= top);
	return stackPtr[top - nom];
}
template <class T> inline void stack<T>::printStack()
{
	for (int i = top - 1; i >= 0; i--)
		cout << "|" << setw(4) << stackPtr[i] << endl;
}

template <class T> inline int stack<T>::getStackSize() const
{
	return size;
}
template <class T> inline T* stack<T>::getPtr() const
{
	return stackPtr;
}
template <class T> inline int stack<T>::getTop() const
{
	return top;
}

int main()
{
	setlocale(LC_ALL,"RU");
	int n;
	cout << "���-�� ��: ";	cin >> n;
	stack<char> stackSymbol(n);
	int ct = 0;
	char ch;

	while (ct++ < n)
	{
		cin >> ch;
		stackSymbol.push(ch);
	}

	cout << endl;
	stackSymbol.printStack(); 

	cout << "\n\n������ ������� �� �����\n";
	stackSymbol.pop();

	stackSymbol.printStack();

	stack<char> newStack(stackSymbol);

	cout << "\n\n�������� ����������� �����������!\n";
	newStack.printStack();

	cout << "������ � ������� �������: " << newStack.Peek(2) << endl;

	return 0;
}