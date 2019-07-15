#include "DataType.h"

DataType::DataType(const DataAttribute& data_attribute) : data_attribute_(data_attribute)
{
}

DataType::~DataType()
{}

const std::string& DataType::GetName() const
{
	return this->data_attribute_.GetName();
}