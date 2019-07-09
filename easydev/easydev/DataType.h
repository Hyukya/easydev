#pragma once
#include <string>

class DataType {
public:
	DataType();
	virtual ~DataType();

	std::string GetName();
protected:
	std::string name_;
private:
	DataType(const DataType&);
};