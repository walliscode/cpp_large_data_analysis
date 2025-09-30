#include "config.cpp"
#include "directory_paths.h"
#include <filesystem>

namespace config {
////////////////////////////////////////////////////////////
const std::filesystem::path getDataFolder() { return "/home/bwallis/projects/walliscode/cpp_large_data_analysis/data"; };

/////////////////////////////////////////////////
const std::filesystem::path getUIDataFolder() { return getDataFolder() / "ui"; }
} // namespace config
