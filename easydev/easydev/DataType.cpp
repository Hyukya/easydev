#include "DataType.h"

DataType::DataType(const DataAttribute& data_attribute) : data_attribute_(data_attribute)
{
}

DataType::~DataType()
{}

std::string DataType::GetName()
{
	return this->data_attribute_.GetName();
}
