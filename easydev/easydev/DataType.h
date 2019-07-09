#pragma once
#include <string>

class DataType {
public:
	DataType(std::string name);
	virtual ~DataType();
protected:
	std::string name_;
private:
	DataType() {}
	DataType(const DataType&) {}
	DataType& operator=(const DataType&) {}
};