#pragma once

#include <string>

class DataAttribute
{
public:
	DataAttribute(const std::string& name, const uint32_t& size);
	virtual ~DataAttribute();

	std::string GetName();
private:
    std::string name_;
	uint32_t size_;
	void* data_;
};

