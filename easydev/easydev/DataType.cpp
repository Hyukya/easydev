#include "DataType.h"

DataType::DataType(const DataAttribute& data_attribute) : data_attribute_(data_attribute)
{
}

DataType::~DataType()
{}

const DataAttribute::DATA_TYPE DataType::GetType()
{
	return this->data_attribute_.GetType();
}