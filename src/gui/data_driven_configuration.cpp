/////////////////////////////////////////////////
/// @file
/// @brief Implements functions dealing with data driven configuration
/////////////////////////////////////////////////

/////////////////////////////////////////////////
/// Headers
/////////////////////////////////////////////////

#include "data_driven_configuration.h"
#include "directory_paths.h"
#include <filesystem>

namespace data_analysis_app::gui {

/////////////////////////////////////////////////
std::vector<std::string> GetMainTabNames() {

  std::vector<std::string> tab_names;

  // get all direcories under the ui directory as tab names
  for (const auto &directory :
       std::filesystem::directory_iterator(config::getUIDataFolder())) {
    if (directory.is_directory()) {
      tab_names.push_back(directory.path().filename().string());
    }
  }

  return tab_names;
}
} // namespace data_analysis_app::gui
