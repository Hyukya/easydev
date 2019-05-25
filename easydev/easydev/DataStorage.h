#pragma once
#include "DataType.h"
#include "Storage.h"
class DataStorage
{
public:
	DataStorage(Storage* storage) {
		this->s = storage;
	}
	virtual ~DataStorage() {}
public:
	virtual void begin_tx() final {
		this->s->begin_tx();
	}
	virtual bool push_back(DataType* data) final {
		return this->s->push_back((void*)data);
	}
	virtual bool pop_front(DataType** data) final {
		return this->s->pop_front((void**)data);
	}
	virtual void end_tx() final {
		this->s->end_tx();
	}
private:
	DataStorage() {}
	Storage *s;
};