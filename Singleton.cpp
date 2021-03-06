//File: Singleton.cpp
//Author: Leon Becker
//E-mail: leonalexbecker@gmail.com
#include "stdafx.h"
#include "ThreadSafeSingleton.h"

int main()
{
	//Show that the ThreadSafeSingleton can be accessed
	ThreadSafeSingleton::getInstance().setObjectMessage("Hello World!");
	std::cout << ThreadSafeSingleton::getInstance().getObjectMessage() << std::endl;
	ThreadSafeSingleton::getInstance().setObjectMessage("Changed Message!");
	std::cout << ThreadSafeSingleton::getInstance().getObjectMessage() << std::endl;


	std::cin.get();
    return 0;
}

