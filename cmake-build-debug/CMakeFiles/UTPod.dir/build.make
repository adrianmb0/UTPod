# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/davidfernandez/EE312/UTPod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidfernandez/EE312/UTPod/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/UTPod.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UTPod.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UTPod.dir/flags.make

CMakeFiles/UTPod.dir/Song.cpp.o: CMakeFiles/UTPod.dir/flags.make
CMakeFiles/UTPod.dir/Song.cpp.o: ../Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidfernandez/EE312/UTPod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UTPod.dir/Song.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTPod.dir/Song.cpp.o -c /Users/davidfernandez/EE312/UTPod/Song.cpp

CMakeFiles/UTPod.dir/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTPod.dir/Song.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidfernandez/EE312/UTPod/Song.cpp > CMakeFiles/UTPod.dir/Song.cpp.i

CMakeFiles/UTPod.dir/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTPod.dir/Song.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidfernandez/EE312/UTPod/Song.cpp -o CMakeFiles/UTPod.dir/Song.cpp.s

CMakeFiles/UTPod.dir/UtPod.cpp.o: CMakeFiles/UTPod.dir/flags.make
CMakeFiles/UTPod.dir/UtPod.cpp.o: ../UtPod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidfernandez/EE312/UTPod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UTPod.dir/UtPod.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTPod.dir/UtPod.cpp.o -c /Users/davidfernandez/EE312/UTPod/UtPod.cpp

CMakeFiles/UTPod.dir/UtPod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTPod.dir/UtPod.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidfernandez/EE312/UTPod/UtPod.cpp > CMakeFiles/UTPod.dir/UtPod.cpp.i

CMakeFiles/UTPod.dir/UtPod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTPod.dir/UtPod.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidfernandez/EE312/UTPod/UtPod.cpp -o CMakeFiles/UTPod.dir/UtPod.cpp.s

CMakeFiles/UTPod.dir/utPod_driver.cpp.o: CMakeFiles/UTPod.dir/flags.make
CMakeFiles/UTPod.dir/utPod_driver.cpp.o: ../utPod_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidfernandez/EE312/UTPod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/UTPod.dir/utPod_driver.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTPod.dir/utPod_driver.cpp.o -c /Users/davidfernandez/EE312/UTPod/utPod_driver.cpp

CMakeFiles/UTPod.dir/utPod_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTPod.dir/utPod_driver.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidfernandez/EE312/UTPod/utPod_driver.cpp > CMakeFiles/UTPod.dir/utPod_driver.cpp.i

CMakeFiles/UTPod.dir/utPod_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTPod.dir/utPod_driver.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidfernandez/EE312/UTPod/utPod_driver.cpp -o CMakeFiles/UTPod.dir/utPod_driver.cpp.s

# Object files for target UTPod
UTPod_OBJECTS = \
"CMakeFiles/UTPod.dir/Song.cpp.o" \
"CMakeFiles/UTPod.dir/UtPod.cpp.o" \
"CMakeFiles/UTPod.dir/utPod_driver.cpp.o"

# External object files for target UTPod
UTPod_EXTERNAL_OBJECTS =

UTPod: CMakeFiles/UTPod.dir/Song.cpp.o
UTPod: CMakeFiles/UTPod.dir/UtPod.cpp.o
UTPod: CMakeFiles/UTPod.dir/utPod_driver.cpp.o
UTPod: CMakeFiles/UTPod.dir/build.make
UTPod: CMakeFiles/UTPod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/davidfernandez/EE312/UTPod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable UTPod"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UTPod.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UTPod.dir/build: UTPod

.PHONY : CMakeFiles/UTPod.dir/build

CMakeFiles/UTPod.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UTPod.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UTPod.dir/clean

CMakeFiles/UTPod.dir/depend:
	cd /Users/davidfernandez/EE312/UTPod/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidfernandez/EE312/UTPod /Users/davidfernandez/EE312/UTPod /Users/davidfernandez/EE312/UTPod/cmake-build-debug /Users/davidfernandez/EE312/UTPod/cmake-build-debug /Users/davidfernandez/EE312/UTPod/cmake-build-debug/CMakeFiles/UTPod.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UTPod.dir/depend

