#include "utils.h"

std::vector<String> utils::split(const String & val, char separator)
{
	std::vector<String> ret;
	auto start = 0;
	auto pos = val.indexOf(separator);
	
	while(pos!= -1)
	{
		ret.push_back(val.substring(start, pos));
		start = pos + 1;
		pos = val.indexOf(separator, start);
	}
	
	if(start + 1 < val.length())
		ret.push_back(val.substring(start));
	
	return ret;
}
