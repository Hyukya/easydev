#pragma once
#include "DataType.h"
class Integer32 : public DataType {
public:
	Integer32();
	virtual ~Integer32();

	Integer32(const int32_t i32_t);
	operator int();
private:
	int32_t data_;
};

class Integer64 : public DataType {
public:
	Integer64();
	virtual ~Integer64();

	Integer64(const int64_t int64_t);
	operator long long();
private:
	int64_t data_;
};

class String : public DataType {
public:
	String();
	virtual ~String();

	String(const std::string string);
	operator std::string();
private:
	std::string data_;
};