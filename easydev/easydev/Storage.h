#pragma once
#include "DataType.h"

class Storage {
public:
	virtual void begin_tx() = 0;
	virtual void end_tx() = 0;

	virtual bool push_back(const DataType&) = 0;
	virtual bool pop_front(DataType&) = 0;
};
