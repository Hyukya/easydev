#pragma once
#include <string>

class DataType {
public:
	DataType();
	virtual ~DataType();
protected:
	std::string name_;
private:
	DataType(const DataType&);
	DataType& operator=(const DataType&);
};