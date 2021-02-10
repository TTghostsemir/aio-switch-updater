#pragma once

#define ON              1
#define OFF             0

#include "json.hpp"

void downloadFile(const char *url, const char *output, int api);
std::vector<std::pair<std::string, std::string>> getLinks(const char *url);
std::string fetchTitle(const char *url);
std::string downloadPage(const char* url, std::vector<std::string> headers = {}, std::string body = "");
nlohmann::json getRequest(std::string url, std::vector<std::string> headers = {}, std::string body = "");