#pragma once
#include "Storage.h"
#include <queue>
#include <mutex>

class InMemoryStorage : public Storage {
public:
	virtual void BeginTransaction();
	virtual void EndTransaction();

	// space size of Storage
	virtual uint64_t Size();
	// DataType counts in Storage
	virtual uint64_t Count();

	// interface for queue
	virtual void Push(const DataType&);
	virtual const DataType& Front();
	virtual void Pop();
private:
	std::queue<DataType> storage_;
	std::mutex mutex_;
};