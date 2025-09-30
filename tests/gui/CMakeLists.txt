qt_add_executable(test_gui
  main_window.test.cpp

)
add_test(NAME test_gui COMMAND test_gui)

target_link_libraries(test_gui
  PRIVATE
  config
  gui
  Qt::Test
)
