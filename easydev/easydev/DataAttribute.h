#pragma once

#include <string>

class DataAttribute
{
public:
	DataAttribute(const std::string& name);
	virtual ~DataAttribute();
private:
    std::string name_;
};

