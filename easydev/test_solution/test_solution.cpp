// test_solution.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "../easydev/Task.h"
#include "../easydev/BaseDataType.h"
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

void Test_Task() {
	Task *t = nullptr;
	_ASSERT(t == nullptr);
}
void Test_DataType() {
	DataType dt;
	Integer32 int32;
	int32 = 1;
	_ASSERT(1 == int32);
	Integer64 int64;
	int64 = 1;
	_ASSERT(1 == int64);
	String string;
	string = std::string("string");
	_ASSERT(!std::string("string").compare(string));
}
void Test_Storage() {
	InMemoryStorage is;
	is.BeginTransaction();
	Integer32 push_data(1);
	is.Push(push_data);

	DataType pop_data;
	pop_data = is.Front();
	is.EndTransaction();
//	_ASSERT(pop_data == 1);
}
int main()
{
	Test_Task();
	Test_Storage();
	Test_DataType();
	return 0;
}