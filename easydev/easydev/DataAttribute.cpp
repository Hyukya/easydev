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

const std::string& DataAttribute::GetName() const
{
    return this->name_;
}