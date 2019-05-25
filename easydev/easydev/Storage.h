#pragma once

class Storage {
public:
	virtual void begin_tx() = 0;
	virtual void end_tx() = 0;

	virtual bool push_back(void* data) = 0;
	virtual bool pop_front(void** data) = 0;
};
