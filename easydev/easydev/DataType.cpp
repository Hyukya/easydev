#include "DataType.h"

DataType::DataType(const DataAttribute& data_attribute) : data_attribute_(data_attribute)
{
}

DataType::~DataType()
{}

DataType& DataType::operator=(const int& rvalue)
{
	this->data_attribute_.SetData(&rvalue, sizeof(int));
	return *this;
}

bool DataType::operator==(const int& right) const
{
	const int left = *reinterpret_cast<const int*>(this->data_attribute_.GetData());
	return left == right;
}

const std::string& DataType::GetName() const
{
	return this->data_attribute_.GetName();
}