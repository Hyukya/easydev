#include "InMemoryStorage.h"

void InMemoryStorage::BeginTransaction()
{
	this->mutex_.lock();
}

void InMemoryStorage::EndTransaction()
{
	this->mutex_.unlock();
}

uint64_t InMemoryStorage::Size()
{
	return 0;
}
uint64_t InMemoryStorage::Count()
{
	return this->storage_.size();
}

void InMemoryStorage::Push(const DataType& data_type)
{
	this->storage_.push(data_type);
}

const DataType& InMemoryStorage::Front()
{
	return this->storage_.front();
}

void InMemoryStorage::Pop()
{
	this->storage_.pop();
}