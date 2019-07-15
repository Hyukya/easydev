#include "DataAttribute.h"

DataAttribute::DataAttribute(const DATA_TYPE& type, const uint32_t& size) : type_(type), size_(size)
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

const DataAttribute::DATA_TYPE& DataAttribute::GetType() const
{
    return this->type_;
}