#include "DataAttribute.h"

DataAttribute::DataAttribute(const std::string& name, const uint32_t& size) : name_(name), size_(size)
{
    if(0 != this->size_)
    {
        this->data_ = new char[this->size_];
    }
    else
    {
        this->data_ = nullptr;
    }
}

DataAttribute::~DataAttribute()
{
    if(nullptr != this->data_)
    {
        delete [] this->data_;
        this->data_ = nullptr;
    }
}

DataAttribute::DataAttribute(const DataAttribute& source)
{
	this->name_ = source.name_;
	this->size_ = source.size_;
	if (0 != this->size_)
	{
		this->data_ = new char[this->size_];
		memcpy(this->data_, source.data_, this->size_);
	}
	else
	{
		this->data_ = nullptr;
	}
}

const std::string& DataAttribute::GetName() const
{
    return this->name_;
}