# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zcc/git/leetcode-practice/2_addTwoNumbers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zcc/git/leetcode-practice/2_addTwoNumbers/build

# Include any dependencies generated for this target.
include CMakeFiles/addTwoNumbers_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/addTwoNumbers_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/addTwoNumbers_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/addTwoNumbers_test.dir/flags.make

CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o: CMakeFiles/addTwoNumbers_test.dir/flags.make
CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o: ../tests/addTwoNumbers_test.cpp
CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o: CMakeFiles/addTwoNumbers_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zcc/git/leetcode-practice/2_addTwoNumbers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o -MF CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o.d -o CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o -c /home/zcc/git/leetcode-practice/2_addTwoNumbers/tests/addTwoNumbers_test.cpp

CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zcc/git/leetcode-practice/2_addTwoNumbers/tests/addTwoNumbers_test.cpp > CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.i

CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zcc/git/leetcode-practice/2_addTwoNumbers/tests/addTwoNumbers_test.cpp -o CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.s

CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o: CMakeFiles/addTwoNumbers_test.dir/flags.make
CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o: ../src/addTwoNumbers.cpp
CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o: CMakeFiles/addTwoNumbers_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zcc/git/leetcode-practice/2_addTwoNumbers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o -MF CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o.d -o CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o -c /home/zcc/git/leetcode-practice/2_addTwoNumbers/src/addTwoNumbers.cpp

CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zcc/git/leetcode-practice/2_addTwoNumbers/src/addTwoNumbers.cpp > CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.i

CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zcc/git/leetcode-practice/2_addTwoNumbers/src/addTwoNumbers.cpp -o CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.s

# Object files for target addTwoNumbers_test
addTwoNumbers_test_OBJECTS = \
"CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o" \
"CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o"

# External object files for target addTwoNumbers_test
addTwoNumbers_test_EXTERNAL_OBJECTS =

../addTwoNumbers_test: CMakeFiles/addTwoNumbers_test.dir/tests/addTwoNumbers_test.cpp.o
../addTwoNumbers_test: CMakeFiles/addTwoNumbers_test.dir/src/addTwoNumbers.cpp.o
../addTwoNumbers_test: CMakeFiles/addTwoNumbers_test.dir/build.make
../addTwoNumbers_test: CMakeFiles/addTwoNumbers_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zcc/git/leetcode-practice/2_addTwoNumbers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../addTwoNumbers_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addTwoNumbers_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/addTwoNumbers_test.dir/build: ../addTwoNumbers_test
.PHONY : CMakeFiles/addTwoNumbers_test.dir/build

CMakeFiles/addTwoNumbers_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/addTwoNumbers_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/addTwoNumbers_test.dir/clean

CMakeFiles/addTwoNumbers_test.dir/depend:
	cd /home/zcc/git/leetcode-practice/2_addTwoNumbers/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zcc/git/leetcode-practice/2_addTwoNumbers /home/zcc/git/leetcode-practice/2_addTwoNumbers /home/zcc/git/leetcode-practice/2_addTwoNumbers/build /home/zcc/git/leetcode-practice/2_addTwoNumbers/build /home/zcc/git/leetcode-practice/2_addTwoNumbers/build/CMakeFiles/addTwoNumbers_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/addTwoNumbers_test.dir/depend
