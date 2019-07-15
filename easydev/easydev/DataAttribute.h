#pragma once

#include <stdint.h>

class DataAttribute
{
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
	DataAttribute(const DATA_TYPE& type, const uint32_t& size);
	virtual ~DataAttribute();

	const DATA_TYPE& GetType() const;

private:
	DataAttribute() = delete;
private:
	DATA_TYPE type_;
	uint32_t size_;
	void* data_;
};

