# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rubensalazar/Desktop/CMPR131/data_structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rubensalazar/Desktop/CMPR131/data_structures/build

# Include any dependencies generated for this target.
include CMakeFiles/data_structures.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/data_structures.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/data_structures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/data_structures.dir/flags.make

CMakeFiles/data_structures.dir/codegen:
.PHONY : CMakeFiles/data_structures.dir/codegen

CMakeFiles/data_structures.dir/src/main.cpp.o: CMakeFiles/data_structures.dir/flags.make
CMakeFiles/data_structures.dir/src/main.cpp.o: /Users/rubensalazar/Desktop/CMPR131/data_structures/src/main.cpp
CMakeFiles/data_structures.dir/src/main.cpp.o: CMakeFiles/data_structures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/rubensalazar/Desktop/CMPR131/data_structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/data_structures.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/data_structures.dir/src/main.cpp.o -MF CMakeFiles/data_structures.dir/src/main.cpp.o.d -o CMakeFiles/data_structures.dir/src/main.cpp.o -c /Users/rubensalazar/Desktop/CMPR131/data_structures/src/main.cpp

CMakeFiles/data_structures.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/data_structures.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubensalazar/Desktop/CMPR131/data_structures/src/main.cpp > CMakeFiles/data_structures.dir/src/main.cpp.i

CMakeFiles/data_structures.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/data_structures.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubensalazar/Desktop/CMPR131/data_structures/src/main.cpp -o CMakeFiles/data_structures.dir/src/main.cpp.s

CMakeFiles/data_structures.dir/src/LinkedList.cpp.o: CMakeFiles/data_structures.dir/flags.make
CMakeFiles/data_structures.dir/src/LinkedList.cpp.o: /Users/rubensalazar/Desktop/CMPR131/data_structures/src/LinkedList.cpp
CMakeFiles/data_structures.dir/src/LinkedList.cpp.o: CMakeFiles/data_structures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/rubensalazar/Desktop/CMPR131/data_structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/data_structures.dir/src/LinkedList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/data_structures.dir/src/LinkedList.cpp.o -MF CMakeFiles/data_structures.dir/src/LinkedList.cpp.o.d -o CMakeFiles/data_structures.dir/src/LinkedList.cpp.o -c /Users/rubensalazar/Desktop/CMPR131/data_structures/src/LinkedList.cpp

CMakeFiles/data_structures.dir/src/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/data_structures.dir/src/LinkedList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubensalazar/Desktop/CMPR131/data_structures/src/LinkedList.cpp > CMakeFiles/data_structures.dir/src/LinkedList.cpp.i

CMakeFiles/data_structures.dir/src/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/data_structures.dir/src/LinkedList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubensalazar/Desktop/CMPR131/data_structures/src/LinkedList.cpp -o CMakeFiles/data_structures.dir/src/LinkedList.cpp.s

CMakeFiles/data_structures.dir/src/Queue.cpp.o: CMakeFiles/data_structures.dir/flags.make
CMakeFiles/data_structures.dir/src/Queue.cpp.o: /Users/rubensalazar/Desktop/CMPR131/data_structures/src/Queue.cpp
CMakeFiles/data_structures.dir/src/Queue.cpp.o: CMakeFiles/data_structures.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/rubensalazar/Desktop/CMPR131/data_structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/data_structures.dir/src/Queue.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/data_structures.dir/src/Queue.cpp.o -MF CMakeFiles/data_structures.dir/src/Queue.cpp.o.d -o CMakeFiles/data_structures.dir/src/Queue.cpp.o -c /Users/rubensalazar/Desktop/CMPR131/data_structures/src/Queue.cpp

CMakeFiles/data_structures.dir/src/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/data_structures.dir/src/Queue.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rubensalazar/Desktop/CMPR131/data_structures/src/Queue.cpp > CMakeFiles/data_structures.dir/src/Queue.cpp.i

CMakeFiles/data_structures.dir/src/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/data_structures.dir/src/Queue.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rubensalazar/Desktop/CMPR131/data_structures/src/Queue.cpp -o CMakeFiles/data_structures.dir/src/Queue.cpp.s

# Object files for target data_structures
data_structures_OBJECTS = \
"CMakeFiles/data_structures.dir/src/main.cpp.o" \
"CMakeFiles/data_structures.dir/src/LinkedList.cpp.o" \
"CMakeFiles/data_structures.dir/src/Queue.cpp.o"

# External object files for target data_structures
data_structures_EXTERNAL_OBJECTS =

data_structures: CMakeFiles/data_structures.dir/src/main.cpp.o
data_structures: CMakeFiles/data_structures.dir/src/LinkedList.cpp.o
data_structures: CMakeFiles/data_structures.dir/src/Queue.cpp.o
data_structures: CMakeFiles/data_structures.dir/build.make
data_structures: CMakeFiles/data_structures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/rubensalazar/Desktop/CMPR131/data_structures/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable data_structures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/data_structures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/data_structures.dir/build: data_structures
.PHONY : CMakeFiles/data_structures.dir/build

CMakeFiles/data_structures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/data_structures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/data_structures.dir/clean

CMakeFiles/data_structures.dir/depend:
	cd /Users/rubensalazar/Desktop/CMPR131/data_structures/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rubensalazar/Desktop/CMPR131/data_structures /Users/rubensalazar/Desktop/CMPR131/data_structures /Users/rubensalazar/Desktop/CMPR131/data_structures/build /Users/rubensalazar/Desktop/CMPR131/data_structures/build /Users/rubensalazar/Desktop/CMPR131/data_structures/build/CMakeFiles/data_structures.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/data_structures.dir/depend

