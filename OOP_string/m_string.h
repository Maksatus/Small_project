#pragma once

class  m_string
{
public:

	m_string();
	m_string(const char* str);
	m_string(const m_string& other);
	~m_string();
	m_string& operator =(const m_string& other);
	m_string operator +(const m_string& other);

private:
	char* str;
	void creation(const char* str);
};

size_t m_strlen(const char* str);
