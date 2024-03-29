#ifndef tp_utils_Resources_h
#define tp_utils_Resources_h

#include "tp_utils/Globals.h"

#include <unordered_map>
#include <string>
#include <sstream>

namespace tp_utils
{

//##################################################################################################
struct TP_UTILS_EXPORT Resource
{
  const char* data{nullptr};
  size_t size{0};
};

//##################################################################################################
struct TP_UTILS_EXPORT ResourceStream :public std::istringstream
{
  //################################################################################################
  ResourceStream(const Resource& resource);
};

//##################################################################################################
std::unordered_map<std::string, Resource>& resources();

//##################################################################################################
Resource TP_UTILS_EXPORT resource(const std::string& name);

//##################################################################################################
std::string TP_UTILS_EXPORT resourceString(const std::string& name);

//##################################################################################################
void TP_UTILS_EXPORT addResource(const std::string& name,  const char* data, size_t size);

//##################################################################################################
void TP_UTILS_EXPORT writeResource(const std::string& from, const std::string& to);

}

#endif
