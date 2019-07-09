#pragma once
#include "DataType.h"

class Storage {
public:
	virtual void BeginTransaction() = 0;
	virtual void EndTransaction() = 0;

	// space size of Storage
	virtual uint64_t Size() = 0;
	// DataType counts in Storage
	virtual uint64_t Count() = 0;

	// interface for queue
	virtual void Push(const DataType&) = 0;
	virtual const DataType& Front() = 0;
	virtual void Pop() = 0;
};
