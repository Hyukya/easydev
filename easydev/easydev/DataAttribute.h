#pragma once

#include <string>

class DataAttribute
{
public:
	DataAttribute(const std::string& name, const uint32_t& size);
	virtual ~DataAttribute();

	const std::string& GetName() const;

private:
	DataAttribute() {}
private:
    std::string name_;
	uint32_t size_;
	void* data_;
};

