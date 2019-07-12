#pragma once

#include "DataAttribute.h"

class DataType {
public:
	DataType(const DataAttribute& data_attribute);
	virtual ~DataType();

	std::string GetName();

private:
	DataAttribute data_attribute_;
};