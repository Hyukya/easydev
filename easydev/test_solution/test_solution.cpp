// test_solution.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "..\\easydev\DataStorage.h"
#include "..\\easydev\InMemoryStorage.h"

#ifdef _DEBUG
#ifdef _WIN32
#pragma comment(lib, "..\\Debug\\easydev.lib")
#else
#pragma comment(lib, "..\\x64\\Debug\\easydev.lib")
#endif
#else
#ifdef _WIN32
#pragma comment(lib, "..\\Release\\easydev.lib")
#else
#pragma comment(lib, "..\\x64\\Release\\easydev.lib")
#endif
#endif

int main()
{
    std::cout << "Hello World!\n";
	int input = 1;
	int output = 0;
	printf("[%d] : [%d]\n", input, output);
	
	DataStorage *ds = new DataStorage(new InMemoryStorage());
	ds->push_back(new Integer32(input));

	DataType *i_out;
	ds->pop_front(&i_out);

	output = *reinterpret_cast<Integer32*>(i_out);
	printf("[%d] : [%d]\n", input, output);
}