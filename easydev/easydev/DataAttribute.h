#pragma once

#include <string>

class DataAttribute
{
public:
	DataAttribute(const std::string& name, const uint64_t& size);
	virtual ~DataAttribute();
private:
    std::string name_;
	uint64_t size_;
	void* data_;
};

