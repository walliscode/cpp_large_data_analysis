/////////////////////////////////////////////////
/// @file
/// @brief Implements functions to handle the generation of the main window
/////////////////////////////////////////////////

/////////////////////////////////////////////////
/// Headers
/////////////////////////////////////////////////
#include "main_window.h"
#include "data_driven_configuration.h"
#include <QTabBar>

namespace data_analysis_app::gui {

/////////////////////////////////////////////////
void configure_main_window(QMainWindow &main_window) {
  // main window specific configuration
  main_window.setWindowTitle("Data Analysis Application");
  main_window.resize(800, 600);

  // configure the central widget
  configure_central_widget(main_window);
}

/////////////////////////////////////////////////
void configure_central_widget(QMainWindow &main_window) {
  // create a tab bar as central widget
  QTabBar *tab_bar = new QTabBar();

  // configure the tab bar
  configure_main_tab_bar(*tab_bar);

  // set the tab bar as central widget
  main_window.setCentralWidget(tab_bar);
}

/////////////////////////////////////////////////
void configure_main_tab_bar(QTabBar &tab_bar) {
  std::vector<std::string> tab_names = GetMainTabNames();
  for (const auto &name : tab_names) {
    tab_bar.addTab(QString::fromStdString(name));
  }
}
} // namespace data_analysis_app::gui
