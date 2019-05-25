#include "DataType.h"

DataType::DataType(std::string name)
{
	this->name = name;
}

DataType::DataType() { this->name = ""; }
DataType::DataType(const DataType&) {}
DataType & DataType::operator=(const DataType &) { return *this; }
DataType::~DataType() {}


Integer32::Integer32()
{
	this->name = "Integer32";
	this->data = 0;
}

Integer32::Integer32(const int32_t i32_t)
{
	this->name = "Integer32";
	this->data = i32_t;
}

Integer32::operator int()
{
	return this->data;
}

Integer32::~Integer32()
{
}
