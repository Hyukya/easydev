#pragma once

#include "DataAttribute.h"

class DataType {
public:
	enum class DATA_TYPE {
		UINT32_T,
		INT32_T,
		UINT64_T,
		INT64_T,
		STRING,
		END_DATA_TYPE
	};
public:
	virtual ~DataType();

	static DataType* GetInstance(const DATA_TYPE& data_type);

	std::string GetName();

private:
	DataType(const DataAttribute& data_attribute);
private:
	DataAttribute data_attribute_;
};