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
CMAKE_SOURCE_DIR = "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Association.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Association.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Association.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Association.dir/flags.make

CMakeFiles/Association.dir/main.cpp.o: CMakeFiles/Association.dir/flags.make
CMakeFiles/Association.dir/main.cpp.o: ../main.cpp
CMakeFiles/Association.dir/main.cpp.o: CMakeFiles/Association.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Association.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Association.dir/main.cpp.o -MF CMakeFiles/Association.dir/main.cpp.o.d -o CMakeFiles/Association.dir/main.cpp.o -c "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/main.cpp"

CMakeFiles/Association.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Association.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/main.cpp" > CMakeFiles/Association.dir/main.cpp.i

CMakeFiles/Association.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Association.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/main.cpp" -o CMakeFiles/Association.dir/main.cpp.s

CMakeFiles/Association.dir/TBook.cpp.o: CMakeFiles/Association.dir/flags.make
CMakeFiles/Association.dir/TBook.cpp.o: ../TBook.cpp
CMakeFiles/Association.dir/TBook.cpp.o: CMakeFiles/Association.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Association.dir/TBook.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Association.dir/TBook.cpp.o -MF CMakeFiles/Association.dir/TBook.cpp.o.d -o CMakeFiles/Association.dir/TBook.cpp.o -c "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TBook.cpp"

CMakeFiles/Association.dir/TBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Association.dir/TBook.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TBook.cpp" > CMakeFiles/Association.dir/TBook.cpp.i

CMakeFiles/Association.dir/TBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Association.dir/TBook.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TBook.cpp" -o CMakeFiles/Association.dir/TBook.cpp.s

CMakeFiles/Association.dir/TReader.cpp.o: CMakeFiles/Association.dir/flags.make
CMakeFiles/Association.dir/TReader.cpp.o: ../TReader.cpp
CMakeFiles/Association.dir/TReader.cpp.o: CMakeFiles/Association.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Association.dir/TReader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Association.dir/TReader.cpp.o -MF CMakeFiles/Association.dir/TReader.cpp.o.d -o CMakeFiles/Association.dir/TReader.cpp.o -c "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TReader.cpp"

CMakeFiles/Association.dir/TReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Association.dir/TReader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TReader.cpp" > CMakeFiles/Association.dir/TReader.cpp.i

CMakeFiles/Association.dir/TReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Association.dir/TReader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/TReader.cpp" -o CMakeFiles/Association.dir/TReader.cpp.s

# Object files for target Association
Association_OBJECTS = \
"CMakeFiles/Association.dir/main.cpp.o" \
"CMakeFiles/Association.dir/TBook.cpp.o" \
"CMakeFiles/Association.dir/TReader.cpp.o"

# External object files for target Association
Association_EXTERNAL_OBJECTS =

Association: CMakeFiles/Association.dir/main.cpp.o
Association: CMakeFiles/Association.dir/TBook.cpp.o
Association: CMakeFiles/Association.dir/TReader.cpp.o
Association: CMakeFiles/Association.dir/build.make
Association: CMakeFiles/Association.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Association"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Association.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Association.dir/build: Association
.PHONY : CMakeFiles/Association.dir/build

CMakeFiles/Association.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Association.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Association.dir/clean

CMakeFiles/Association.dir/depend:
	cd "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association" "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association" "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug" "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug" "/mnt/c/Users/bvbcl/Documents/Inżynieria oprogramowania/Lab3/Association/cmake-build-debug/CMakeFiles/Association.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Association.dir/depend

