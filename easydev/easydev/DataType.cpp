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

DataType* DataType::GetInstance(const DATA_TYPE& data_type)
{
	std::string name;
	uint32_t size;
	
	switch (data_type)
	{
	case DATA_TYPE::UINT32_T:
		name = "uint32_t";
		size = 4;
		break;
	case DATA_TYPE::INT32_T:
		name = "int32_t";
		size = 4;
		break;
	case DATA_TYPE::UINT64_T:
		name = "uint64_t";
		size = 8;
		break;
	case DATA_TYPE::INT64_T:
		name = "int64_t";
		size = 8;
		break;
	case DATA_TYPE::STRING:
		name = "string";
		size = 0;
		break;
	default:
		break;
	}
	DataAttribute data_attribute(name, size);

	return new DataType(data_attribute);
}
