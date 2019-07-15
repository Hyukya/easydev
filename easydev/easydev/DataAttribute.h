#pragma once

#include <stdint.h>
#include <string>

class DataAttribute
{
public:
	DataAttribute(const std::string& name, const uint32_t& size);
	virtual ~DataAttribute();
	DataAttribute(const DataAttribute& source);

	const std::string& GetName() const;

	const void* GetData() const;
	void SetData(const void* data, const uint32_t size);

private:
	DataAttribute() = delete;
private:
	std::string name_;
	uint32_t size_;
	void* data_;
};

