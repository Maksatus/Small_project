#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>

typedef struct {
	uint8_t* data;
	uint8_t lenght;
	uint8_t how_much;
}str_t;

str_t* string_create(uint8_t lenght) 
{
	str_t* string = (str_t*)malloc(sizeof(str_t));
	string->data = (uint8_t*)malloc(lenght);
	string->lenght = lenght;
	string->how_much = 0;
	return string;
}

void string_free(str_t* string) 
{
	free(string->data);
	free(string);
}

uint8_t string_lenght(str_t* string) 
{
	return string->lenght;
}

void print_string(str_t* string,FILE* file) 
{
	fwrite(string->data,sizeof(uint8_t),string->lenght,file);
}

str_t* string_dup(const char* str) 
{
	str_t* string = string_create((uint8_t)strlen(str));
	memcpy(string->data,str,string->lenght);
	string->how_much = string->lenght;
	return string;
}

str_t* string_concat(str_t*left,str_t* right)
{
	str_t* string = string_create(left->lenght + right->lenght);
	memcpy(string->data, left->data, left->lenght);
	memcpy(string->data+left->lenght, right->data, right->lenght);
	string->how_much = string->lenght;
	return string;
}

int main(int argc,char**argv)
{
	str_t* hello_world = string_dup("Hello world");
	print_string(hello_world,stdout);
	fprintf(stdout,"\n lenght = %d\n",string_lenght(hello_world));
	str_t* concatet = string_concat(hello_world,hello_world);
	print_string(concatet,stdout);
	string_free(concatet);
	string_free(hello_world);
	_getch();
	return 0;
}