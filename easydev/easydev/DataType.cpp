#include "DataType.h"

DataType::DataType(std::string name) { this->name = name; }
DataType::DataType() { DataType(""); }
DataType::~DataType() {}
DataType::DataType(const DataType&) {}
DataType& DataType::operator=(const DataType &) { return *this; }

#include "DataType.h"

DataType::DataType(std::string name)
{
	this->name_ = name;
}
DataType::~DataType()
{
}