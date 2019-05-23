// test_solution.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
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

	InMemoryStorage ims_int;
	
	ims_int.begin_tx();
	ims_int.push_back(&input);
	ims_int.end_tx();

	ims_int.begin_tx();
	ims_int.pop_front(&output);
	ims_int.end_tx();

	printf("[%d] : [%d]\n", input, output);
}