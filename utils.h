#pragma once

#include "Arduino.h"
#include <vector>

namespace utils
{
	std::vector<String> split(const String & val, char separator);
}
