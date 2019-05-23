#pragma once

class Task
{
public:
	Task() {}
	virtual ~Task(){}
	virtual void run() final {
		this->preprocess();
		this->process();
		this->postprocess();
	}
private:
	virtual void preprocess() = 0;
	virtual void process() = 0;
	virtual void postprocess() = 0;
};