# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/geniusrabbit/下载/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/geniusrabbit/下载/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/437PathSum_III.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/437PathSum_III.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/437PathSum_III.dir/flags.make

CMakeFiles/437PathSum_III.dir/main.c.o: CMakeFiles/437PathSum_III.dir/flags.make
CMakeFiles/437PathSum_III.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/437PathSum_III.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/437PathSum_III.dir/main.c.o   -c /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/main.c

CMakeFiles/437PathSum_III.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/437PathSum_III.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/main.c > CMakeFiles/437PathSum_III.dir/main.c.i

CMakeFiles/437PathSum_III.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/437PathSum_III.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/main.c -o CMakeFiles/437PathSum_III.dir/main.c.s

CMakeFiles/437PathSum_III.dir/main.c.o.requires:

.PHONY : CMakeFiles/437PathSum_III.dir/main.c.o.requires

CMakeFiles/437PathSum_III.dir/main.c.o.provides: CMakeFiles/437PathSum_III.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/437PathSum_III.dir/build.make CMakeFiles/437PathSum_III.dir/main.c.o.provides.build
.PHONY : CMakeFiles/437PathSum_III.dir/main.c.o.provides

CMakeFiles/437PathSum_III.dir/main.c.o.provides.build: CMakeFiles/437PathSum_III.dir/main.c.o


# Object files for target 437PathSum_III
437PathSum_III_OBJECTS = \
"CMakeFiles/437PathSum_III.dir/main.c.o"

# External object files for target 437PathSum_III
437PathSum_III_EXTERNAL_OBJECTS =

437PathSum_III: CMakeFiles/437PathSum_III.dir/main.c.o
437PathSum_III: CMakeFiles/437PathSum_III.dir/build.make
437PathSum_III: CMakeFiles/437PathSum_III.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 437PathSum_III"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/437PathSum_III.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/437PathSum_III.dir/build: 437PathSum_III

.PHONY : CMakeFiles/437PathSum_III.dir/build

CMakeFiles/437PathSum_III.dir/requires: CMakeFiles/437PathSum_III.dir/main.c.o.requires

.PHONY : CMakeFiles/437PathSum_III.dir/requires

CMakeFiles/437PathSum_III.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/437PathSum_III.dir/cmake_clean.cmake
.PHONY : CMakeFiles/437PathSum_III.dir/clean

CMakeFiles/437PathSum_III.dir/depend:
	cd /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug /home/geniusrabbit/CLionProjects/LeetCode/437PathSum-III/cmake-build-debug/CMakeFiles/437PathSum_III.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/437PathSum_III.dir/depend

