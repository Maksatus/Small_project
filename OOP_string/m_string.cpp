#include "m_string.h"

m_string::m_string()
{
	str = nullptr;
}

m_string::m_string(const char* str)
{
	creation(str);
}

m_string::m_string(const m_string& other)
{
	creation(other.str);
}
m_string::~m_string()
{
	delete[] this->str;
}
//операции
m_string& m_string::operator =(const m_string& other)
{
	if (this->str != nullptr)
	{
		delete[] str;
	}
	creation(other.str);
	
	return *this;
}

m_string m_string::operator +(const m_string& other)
{
	m_string sum_str;	
	size_t sum = m_strlen(other.str) + m_strlen(this->str);
	size_t s_other = m_strlen(other.str);
	size_t s_this = m_strlen(this->str);
	
	sum_str.str = new char[sum + 3];
	
	size_t i = 0;
	
	for (; i < s_this; i++)
	{
		sum_str.str[i] = this->str[i];
	}	
	
	for (size_t j = 0; j < s_other; j++,i++)
	{
		sum_str.str[i] = other.str[j];
	}

	sum_str.str[sum] = '\0';

	return sum_str;
}


//функции
size_t m_strlen(const char* str)
{
	size_t i = 0;
	while (*str++)
	{
		i++;
	}
	return i;
}

void m_string::creation(const char* str)
{
	size_t length = m_strlen(str);
	this->str = new char[length + 1];

	for (size_t i = 0; i < length; i++)
	{
		this->str[i] = str[i];
	}

	this->str[length] = '\0';
}