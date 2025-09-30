add_executable(data_analysis_app
  main.cpp
)
target_link_libraries(data_analysis_app
  PRIVATE
  Qt6::Widgets
  gui
)
