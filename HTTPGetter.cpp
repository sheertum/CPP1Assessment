#include "HTTPGetter.h"
#include <curl/curl.h>
#include <memory>
#include <iostream>

HTTPGetter::HTTPGetter() : _curl{curl_easy_init(), curl_easy_cleanup }
{
    
}

size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}

std::string HTTPGetter::getStringData(std::string URL_)
{
	//std::string URL = "https://student.aii.avans.nl/doc/rpbpolis1/cpp1/";
	std::string URL = "https://www.swiftcoder.nl/cpp1/";
    
    URL.append(URL_);

	if (!_curl.get())
	{
        throw "CurlBrokeException";
	}
    std::string response_string;
    std::string header_string;

    curl_easy_setopt(_curl.get(), CURLOPT_URL, URL.c_str());
    curl_easy_setopt(_curl.get(), CURLOPT_HTTPGET, 1);
    
    curl_easy_setopt(_curl.get(), CURLOPT_WRITEFUNCTION, writeFunction);
    curl_easy_setopt(_curl.get(), CURLOPT_WRITEDATA, &response_string);
    curl_easy_setopt(_curl.get(), CURLOPT_HEADERDATA, &header_string);
    try {
        curl_easy_perform(_curl.get());
    }
    catch(...) {
        std::cerr << "NO DATA RECEIVED" << std::endl;
        return "end";
    }

    std::string result {response_string};
    return result;
}