# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/geniusrabbit/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/geniusrabbit/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4301.33/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/flags.make

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/flags.make
CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o   -c "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/main.c"

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/main.c" > CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.i

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/main.c" -o CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.s

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.requires:

.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.requires

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.provides: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/build.make CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.provides.build
.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.provides

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.provides.build: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o


# Object files for target 25_Reverse_Nodes_in_k_Group
25_Reverse_Nodes_in_k_Group_OBJECTS = \
"CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o"

# External object files for target 25_Reverse_Nodes_in_k_Group
25_Reverse_Nodes_in_k_Group_EXTERNAL_OBJECTS =

25_Reverse_Nodes_in_k_Group: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o
25_Reverse_Nodes_in_k_Group: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/build.make
25_Reverse_Nodes_in_k_Group: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 25_Reverse_Nodes_in_k_Group"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/build: 25_Reverse_Nodes_in_k_Group

.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/build

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/requires: CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/main.c.o.requires

.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/requires

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/cmake_clean.cmake
.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/clean

CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/depend:
	cd "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group" "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group" "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug" "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug" "/home/geniusrabbit/home/CLionProjects/LeetCode/25-Reverse Nodes in k-Group/cmake-build-debug/CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/25_Reverse_Nodes_in_k_Group.dir/depend

