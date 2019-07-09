#include "BaseDataType.h"

Integer32::Integer32() {
	Integer32::Integer32(0);
}

Integer32::Integer32(const int32_t i32_t) {
	this->name_ = "Integer32";
	this->data_ = i32_t;
}

Integer32::~Integer32() {}

Integer32::operator int()
{
	return this->data_;
}

Integer64::Integer64() {
	Integer64::Integer64(0);
}

Integer64::Integer64(const int64_t int64_t) {
	this->name_ = "Integer64";
	this->data_ = int64_t;
}

Integer64::~Integer64() {}

Integer64::operator long long() {
	return this->data_;
}

String::String() {
	String("");
}

String::~String() {}

String::String(const std::string string) {
	this->name_ = "String";
	this->data_ = string;
}

String::operator std::string() {
	return this->data_;
}