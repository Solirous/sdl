# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Phuongtoe\scoop\apps\cmake\3.25.2\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Phuongtoe\scoop\apps\cmake\3.25.2\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl

# Include any dependencies generated for this target.
include CMakeFiles/nerd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nerd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nerd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nerd.dir/flags.make

CMakeFiles/nerd.dir/main.cpp.obj: CMakeFiles/nerd.dir/flags.make
CMakeFiles/nerd.dir/main.cpp.obj: main.cpp
CMakeFiles/nerd.dir/main.cpp.obj: CMakeFiles/nerd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nerd.dir/main.cpp.obj"
	C:\Users\Phuongtoe\scoop\apps\mingw\current\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nerd.dir/main.cpp.obj -MF CMakeFiles\nerd.dir\main.cpp.obj.d -o CMakeFiles\nerd.dir\main.cpp.obj -c C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\main.cpp

CMakeFiles/nerd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nerd.dir/main.cpp.i"
	C:\Users\Phuongtoe\scoop\apps\mingw\current\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\main.cpp > CMakeFiles\nerd.dir\main.cpp.i

CMakeFiles/nerd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nerd.dir/main.cpp.s"
	C:\Users\Phuongtoe\scoop\apps\mingw\current\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\main.cpp -o CMakeFiles\nerd.dir\main.cpp.s

# Object files for target nerd
nerd_OBJECTS = \
"CMakeFiles/nerd.dir/main.cpp.obj"

# External object files for target nerd
nerd_EXTERNAL_OBJECTS =

nerd.exe: CMakeFiles/nerd.dir/main.cpp.obj
nerd.exe: CMakeFiles/nerd.dir/build.make
nerd.exe: SDL/lib/libSDL2.dll.a
nerd.exe: CMakeFiles/nerd.dir/linkLibs.rsp
nerd.exe: CMakeFiles/nerd.dir/objects1
nerd.exe: CMakeFiles/nerd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nerd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nerd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nerd.dir/build: nerd.exe
.PHONY : CMakeFiles/nerd.dir/build

CMakeFiles/nerd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nerd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nerd.dir/clean

CMakeFiles/nerd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl C:\Users\Phuongtoe\OneDrive\Desktop\code\realsdl\CMakeFiles\nerd.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nerd.dir/depend

