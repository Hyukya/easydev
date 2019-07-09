#include "DataType.h"

DataType::DataType()
{
	this->name_ = "DataType";
}

DataType::~DataType()
{}

DataType::DataType(const DataType&)
{}

std::string DataType::GetName()
{
	return this->name_;
}
