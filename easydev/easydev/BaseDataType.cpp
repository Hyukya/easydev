#include "BaseDataType.h"

Integer32::Integer32() {
	Integer32::Integer32(0);
}

Integer32::Integer32(const int32_t i32_t) {
	this->name = "Integer32";
	this->data = i32_t;
}

Integer32::~Integer32() {}

Integer32::operator int()
{
	return this->data;
}

Integer64::Integer64() {
	Integer64::Integer64(0);
}

Integer64::Integer64(const int64_t int64_t) {
	this->name = "Integer64";
	this->data = int64_t;
}

Integer64::~Integer64() {}

Integer64::operator long long() {
	return this->data;
}

String::String() {
	String("");
}

String::~String() {}

String::String(const std::string string) {
	this->name = "String";
	this->data = string;
}

String::operator std::string() {
	return this->data;
}