//File: ThreadSafeSingleton.h
//Author: Leon Becker
//E-mail: leonalexbecker@gmail.com
#pragma once
#include "stdafx.h"

class ThreadSafeSingleton {
public:
	static ThreadSafeSingleton& getInstance();

	//Stop the Singletoon from being copied or moved
	ThreadSafeSingleton(ThreadSafeSingleton const&) = delete;
	ThreadSafeSingleton(ThreadSafeSingleton&&) = delete;
	ThreadSafeSingleton& operator=(ThreadSafeSingleton const&) = delete;
	ThreadSafeSingleton& operator=(ThreadSafeSingleton &&) = delete;

	//Generic functionality added to ensure the TSSingleton is working
	std::string getObjectMessage();
	void setObjectMessage(std::string inputMessage);

private:
	//Stop ThreadSafeSingleton from being contructed or deconstructed outside of the class
	ThreadSafeSingleton() {}
	~ThreadSafeSingleton() {}

	std::string message;
};