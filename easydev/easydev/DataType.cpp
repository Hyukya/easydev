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

DataType* DataType::GetInstance(const DataAttribute::DATA_TYPE& data_type)
{
	uint32_t size;
	
	switch (data_type)
	{
	case DataAttribute::DATA_TYPE::UINT32_T:
		size = 4;
		break;
	case DataAttribute::DATA_TYPE::INT32_T:
		size = 4;
		break;
	case DataAttribute::DATA_TYPE::UINT64_T:
		size = 8;
		break;
	case DataAttribute::DATA_TYPE::INT64_T:
		size = 8;
		break;
	case DataAttribute::DATA_TYPE::STRING:
		size = 0;
		break;
	default:
		break;
	}
	DataAttribute data_attribute(data_type, size);

	return new DataType(data_attribute);
}
