#pragma once

template<class _T>
class Storage {
public:
	Storage() {}
	virtual ~Storage() {}
	
	virtual void begin_tx() final {
		this->_begin_tx();
	}
	virtual bool push_back(const _T* data) final {
		return this->_push_back(data);
	}
	virtual bool pop_front(_T* data) final {
		return this->_pop_front(data);
	}
	virtual void end_tx() final {
		this->_end_tx();
	}
private:
	virtual void _begin_tx() = 0;
	virtual bool _push_back(const _T* data) = 0;
	virtual bool _pop_front(_T* data) = 0;
	virtual void _end_tx() = 0;
};