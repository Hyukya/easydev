// test_solution.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "..\\easydev\Task.h"
#include "..\\easydev\DataStorage.h"
#include "..\\easydev\InMemoryStorage.h"

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
void Test_Storage() {
	Storage *ss = nullptr;
	_ASSERT(ss == nullptr);
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
void Test_DataStorage() {
	InMemoryStorage is;
	DataStorage ds(&is);
	ds.begin_tx();
	Integer32 *push_data = new Integer32(1);
	ds.push_back(push_data);
	//TODO
	//Integer32 *pop_data = nullptr;
	DataType *pop_data = nullptr;
	ds.pop_front(&pop_data);
	ds.end_tx();
	_ASSERT(*reinterpret_cast<Integer32*>(pop_data) == 1);
}
int main()
{
	Test_Task();
	Test_Storage();
	Test_DataType();
	Test_DataStorage();
	return 0;
}