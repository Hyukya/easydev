#pragma once

#include "DataAttribute.h"

class DataType {
public:
	DataType(const DataAttribute& data_attribute);
	virtual ~DataType();
	DataType& operator=(const int& rvalue);
	bool operator==(const int& right) const;

	const std::string& GetName() const;
private:
	DataType() = delete;
private:
	DataAttribute data_attribute_;
};