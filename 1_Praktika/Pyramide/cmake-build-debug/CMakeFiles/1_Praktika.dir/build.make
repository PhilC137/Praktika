# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:\Users\phili\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\phili\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_Praktika.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/1_Praktika.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/1_Praktika.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_Praktika.dir/flags.make

CMakeFiles/1_Praktika.dir/main.c.obj: CMakeFiles/1_Praktika.dir/flags.make
CMakeFiles/1_Praktika.dir/main.c.obj: D:/Studium_Informatik/3_Semester/Systemprogrammierung/Praktika/1_Praktika/main.c
CMakeFiles/1_Praktika.dir/main.c.obj: CMakeFiles/1_Praktika.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1_Praktika.dir/main.c.obj"
	C:\Users\phili\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/1_Praktika.dir/main.c.obj -MF CMakeFiles\1_Praktika.dir\main.c.obj.d -o CMakeFiles\1_Praktika.dir\main.c.obj -c D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\main.c

CMakeFiles/1_Praktika.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1_Praktika.dir/main.c.i"
	C:\Users\phili\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\main.c > CMakeFiles\1_Praktika.dir\main.c.i

CMakeFiles/1_Praktika.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1_Praktika.dir/main.c.s"
	C:\Users\phili\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\main.c -o CMakeFiles\1_Praktika.dir\main.c.s

# Object files for target 1_Praktika
1_Praktika_OBJECTS = \
"CMakeFiles/1_Praktika.dir/main.c.obj"

# External object files for target 1_Praktika
1_Praktika_EXTERNAL_OBJECTS =

1_Praktika.exe: CMakeFiles/1_Praktika.dir/main.c.obj
1_Praktika.exe: CMakeFiles/1_Praktika.dir/build.make
1_Praktika.exe: CMakeFiles/1_Praktika.dir/linkLibs.rsp
1_Praktika.exe: CMakeFiles/1_Praktika.dir/objects1.rsp
1_Praktika.exe: CMakeFiles/1_Praktika.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1_Praktika.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_Praktika.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_Praktika.dir/build: 1_Praktika.exe
.PHONY : CMakeFiles/1_Praktika.dir/build

CMakeFiles/1_Praktika.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_Praktika.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_Praktika.dir/clean

CMakeFiles/1_Praktika.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug D:\Studium_Informatik\3_Semester\Systemprogrammierung\Praktika\1_Praktika\cmake-build-debug\CMakeFiles\1_Praktika.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_Praktika.dir/depend

