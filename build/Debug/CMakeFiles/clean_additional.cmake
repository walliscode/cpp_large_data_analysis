# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "tests/gui/CMakeFiles/test_gui_autogen.dir/AutogenUsed.txt"
  "tests/gui/CMakeFiles/test_gui_autogen.dir/ParseCache.txt"
  "tests/gui/test_gui_autogen"
  )
endif()
