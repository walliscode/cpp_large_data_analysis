add_library(gui
  main_window.cpp
  data_driven_configuration.cpp
)

target_include_directories(gui
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(gui
  PUBLIC
  config
  Qt6::Widgets
)
