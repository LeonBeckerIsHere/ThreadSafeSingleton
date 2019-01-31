//File: ThreadSafeSingeton.cpp
//Author: Leon Becker
//E-mail: leonalexbecker@gmail.com
#include "stdafx.h"
#include "ThreadSafeSingleton.h"

ThreadSafeSingleton& ThreadSafeSingleton::getInstance(){
 //Once this method is called the single instance of ThreadSafeSingleton is created
 //Static data initializes only once inside of a method
 static ThreadSafeSingleton instance;
 return instance;
}

std::string ThreadSafeSingleton::getObjectMessage() {
	return message;
}

void ThreadSafeSingleton::setObjectMessage(std::string inputMessage) {
	message = inputMessage;
}