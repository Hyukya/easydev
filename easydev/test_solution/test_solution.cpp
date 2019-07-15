// test_solution.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "../easydev/Task.h"
#include "../easydev/InMemoryStorage.h"

#ifdef _DEBUG
#ifdef WIN32
#pragma comment(lib, "..\\Debug\\easydev.lib")
#else
#pragma comment(lib, "..\\x64\\Debug\\easydev.lib")
#endif
#else
#ifdef WIN32
#pragma comment(lib, "..\\Release\\easydev.lib")
#else
#pragma comment(lib, "..\\x64\\Release\\easydev.lib")
#endif
#endif

void Test_Task()
{
	Task *t = nullptr;
	_ASSERT(t == nullptr);
}
void Test_DataType()
{
	DataAttribute data_attribute("uint32_t", 4);
	DataType dt(data_attribute);
	dt = 1;
	_ASSERT(dt == 1);
}
void Test_Storage()
{
}
int main()
{
	Test_Task();
	Test_Storage();
	Test_DataType();
	return 0;
}