#pragma once

#include "DataAttribute.h"

class DataType {
public:
	virtual ~DataType();

	static DataType* GetInstance(const DataAttribute::DATA_TYPE& data_type);

	const DataAttribute::DATA_TYPE GetType();

private:
	DataType(const DataAttribute& data_attribute);
private:
	DataAttribute data_attribute_;
};