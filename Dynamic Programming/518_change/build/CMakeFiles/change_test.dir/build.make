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
CMAKE_SOURCE_DIR = "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build"

# Include any dependencies generated for this target.
include CMakeFiles/change_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/change_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/change_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/change_test.dir/flags.make

CMakeFiles/change_test.dir/tests/change_test.cpp.o: CMakeFiles/change_test.dir/flags.make
CMakeFiles/change_test.dir/tests/change_test.cpp.o: ../tests/change_test.cpp
CMakeFiles/change_test.dir/tests/change_test.cpp.o: CMakeFiles/change_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/change_test.dir/tests/change_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/change_test.dir/tests/change_test.cpp.o -MF CMakeFiles/change_test.dir/tests/change_test.cpp.o.d -o CMakeFiles/change_test.dir/tests/change_test.cpp.o -c "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/tests/change_test.cpp"

CMakeFiles/change_test.dir/tests/change_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/change_test.dir/tests/change_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/tests/change_test.cpp" > CMakeFiles/change_test.dir/tests/change_test.cpp.i

CMakeFiles/change_test.dir/tests/change_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/change_test.dir/tests/change_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/tests/change_test.cpp" -o CMakeFiles/change_test.dir/tests/change_test.cpp.s

CMakeFiles/change_test.dir/src/change.cpp.o: CMakeFiles/change_test.dir/flags.make
CMakeFiles/change_test.dir/src/change.cpp.o: ../src/change.cpp
CMakeFiles/change_test.dir/src/change.cpp.o: CMakeFiles/change_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/change_test.dir/src/change.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/change_test.dir/src/change.cpp.o -MF CMakeFiles/change_test.dir/src/change.cpp.o.d -o CMakeFiles/change_test.dir/src/change.cpp.o -c "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/src/change.cpp"

CMakeFiles/change_test.dir/src/change.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/change_test.dir/src/change.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/src/change.cpp" > CMakeFiles/change_test.dir/src/change.cpp.i

CMakeFiles/change_test.dir/src/change.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/change_test.dir/src/change.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/src/change.cpp" -o CMakeFiles/change_test.dir/src/change.cpp.s

# Object files for target change_test
change_test_OBJECTS = \
"CMakeFiles/change_test.dir/tests/change_test.cpp.o" \
"CMakeFiles/change_test.dir/src/change.cpp.o"

# External object files for target change_test
change_test_EXTERNAL_OBJECTS =

../change_test: CMakeFiles/change_test.dir/tests/change_test.cpp.o
../change_test: CMakeFiles/change_test.dir/src/change.cpp.o
../change_test: CMakeFiles/change_test.dir/build.make
../change_test: CMakeFiles/change_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../change_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/change_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/change_test.dir/build: ../change_test
.PHONY : CMakeFiles/change_test.dir/build

CMakeFiles/change_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/change_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/change_test.dir/clean

CMakeFiles/change_test.dir/depend:
	cd "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change" "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change" "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build" "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build" "/home/zcc/git/leetcode-practice/Dynamic Programming/518_change/build/CMakeFiles/change_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/change_test.dir/depend
