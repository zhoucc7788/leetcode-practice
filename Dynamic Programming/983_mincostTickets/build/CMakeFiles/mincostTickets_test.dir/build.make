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
CMAKE_SOURCE_DIR = "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build"

# Include any dependencies generated for this target.
include CMakeFiles/mincostTickets_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mincostTickets_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mincostTickets_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mincostTickets_test.dir/flags.make

CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o: CMakeFiles/mincostTickets_test.dir/flags.make
CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o: ../tests/mincostTickets_test.cpp
CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o: CMakeFiles/mincostTickets_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o -MF CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o.d -o CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o -c "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/tests/mincostTickets_test.cpp"

CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/tests/mincostTickets_test.cpp" > CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.i

CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/tests/mincostTickets_test.cpp" -o CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.s

CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o: CMakeFiles/mincostTickets_test.dir/flags.make
CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o: ../src/mincostTickets.cpp
CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o: CMakeFiles/mincostTickets_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o -MF CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o.d -o CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o -c "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/src/mincostTickets.cpp"

CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/src/mincostTickets.cpp" > CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.i

CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/src/mincostTickets.cpp" -o CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.s

# Object files for target mincostTickets_test
mincostTickets_test_OBJECTS = \
"CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o" \
"CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o"

# External object files for target mincostTickets_test
mincostTickets_test_EXTERNAL_OBJECTS =

../mincostTickets_test: CMakeFiles/mincostTickets_test.dir/tests/mincostTickets_test.cpp.o
../mincostTickets_test: CMakeFiles/mincostTickets_test.dir/src/mincostTickets.cpp.o
../mincostTickets_test: CMakeFiles/mincostTickets_test.dir/build.make
../mincostTickets_test: CMakeFiles/mincostTickets_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../mincostTickets_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mincostTickets_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mincostTickets_test.dir/build: ../mincostTickets_test
.PHONY : CMakeFiles/mincostTickets_test.dir/build

CMakeFiles/mincostTickets_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mincostTickets_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mincostTickets_test.dir/clean

CMakeFiles/mincostTickets_test.dir/depend:
	cd "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets" "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets" "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build" "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build" "/home/zcc/git/leetcode-practice/Dynamic Programming/983_mincostTickets/build/CMakeFiles/mincostTickets_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mincostTickets_test.dir/depend

