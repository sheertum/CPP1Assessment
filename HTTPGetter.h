#pragma once

#include <string>
#include <curl/curl.h>
#include <memory>

class HTTPGetter {
public:
	HTTPGetter();
	// virtual ~HTTPGetter();
	std::string getStringData(std::string URL);
	std::unique_ptr<CURL, void(*)(CURL*)> _curl;
};
