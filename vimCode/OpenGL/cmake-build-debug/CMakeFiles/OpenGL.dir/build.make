# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/chamip/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chamip/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chamip/github/OutputDoc/vimCode/OpenGL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OpenGL.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/OpenGL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGL.dir/flags.make

CMakeFiles/OpenGL.dir/examGlfw.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/examGlfw.cpp.o: ../examGlfw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGL.dir/examGlfw.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGL.dir/examGlfw.cpp.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/examGlfw.cpp

CMakeFiles/OpenGL.dir/examGlfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/examGlfw.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/examGlfw.cpp > CMakeFiles/OpenGL.dir/examGlfw.cpp.i

CMakeFiles/OpenGL.dir/examGlfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/examGlfw.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/examGlfw.cpp -o CMakeFiles/OpenGL.dir/examGlfw.cpp.s

CMakeFiles/OpenGL.dir/glad.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/glad.c.o: ../glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/OpenGL.dir/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGL.dir/glad.c.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/glad.c

CMakeFiles/OpenGL.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGL.dir/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/glad.c > CMakeFiles/OpenGL.dir/glad.c.i

CMakeFiles/OpenGL.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/glad.c -o CMakeFiles/OpenGL.dir/glad.c.s

CMakeFiles/OpenGL.dir/OpenGL.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/OpenGL.c.o: ../OpenGL.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/OpenGL.dir/OpenGL.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGL.dir/OpenGL.c.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGL.c

CMakeFiles/OpenGL.dir/OpenGL.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGL.dir/OpenGL.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGL.c > CMakeFiles/OpenGL.dir/OpenGL.c.i

CMakeFiles/OpenGL.dir/OpenGL.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/OpenGL.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGL.c -o CMakeFiles/OpenGL.dir/OpenGL.c.s

CMakeFiles/OpenGL.dir/OpenGLLight.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/OpenGLLight.c.o: ../OpenGLLight.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/OpenGL.dir/OpenGLLight.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGL.dir/OpenGLLight.c.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLLight.c

CMakeFiles/OpenGL.dir/OpenGLLight.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGL.dir/OpenGLLight.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLLight.c > CMakeFiles/OpenGL.dir/OpenGLLight.c.i

CMakeFiles/OpenGL.dir/OpenGLLight.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/OpenGLLight.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLLight.c -o CMakeFiles/OpenGL.dir/OpenGLLight.c.s

CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o: ../OpenGLPlanet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLPlanet.c

CMakeFiles/OpenGL.dir/OpenGLPlanet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGL.dir/OpenGLPlanet.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLPlanet.c > CMakeFiles/OpenGL.dir/OpenGLPlanet.c.i

CMakeFiles/OpenGL.dir/OpenGLPlanet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/OpenGLPlanet.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLPlanet.c -o CMakeFiles/OpenGL.dir/OpenGLPlanet.c.s

CMakeFiles/OpenGL.dir/OpenGLsin.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/OpenGLsin.c.o: ../OpenGLsin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/OpenGL.dir/OpenGLsin.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGL.dir/OpenGLsin.c.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLsin.c

CMakeFiles/OpenGL.dir/OpenGLsin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGL.dir/OpenGLsin.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLsin.c > CMakeFiles/OpenGL.dir/OpenGLsin.c.i

CMakeFiles/OpenGL.dir/OpenGLsin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/OpenGLsin.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/OpenGLsin.c -o CMakeFiles/OpenGL.dir/OpenGLsin.c.s

CMakeFiles/OpenGL.dir/test.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/OpenGL.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGL.dir/test.cpp.o -c /home/chamip/github/OutputDoc/vimCode/OpenGL/test.cpp

CMakeFiles/OpenGL.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chamip/github/OutputDoc/vimCode/OpenGL/test.cpp > CMakeFiles/OpenGL.dir/test.cpp.i

CMakeFiles/OpenGL.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chamip/github/OutputDoc/vimCode/OpenGL/test.cpp -o CMakeFiles/OpenGL.dir/test.cpp.s

# Object files for target OpenGL
OpenGL_OBJECTS = \
"CMakeFiles/OpenGL.dir/examGlfw.cpp.o" \
"CMakeFiles/OpenGL.dir/glad.c.o" \
"CMakeFiles/OpenGL.dir/OpenGL.c.o" \
"CMakeFiles/OpenGL.dir/OpenGLLight.c.o" \
"CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o" \
"CMakeFiles/OpenGL.dir/OpenGLsin.c.o" \
"CMakeFiles/OpenGL.dir/test.cpp.o"

# External object files for target OpenGL
OpenGL_EXTERNAL_OBJECTS =

OpenGL: CMakeFiles/OpenGL.dir/examGlfw.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/glad.c.o
OpenGL: CMakeFiles/OpenGL.dir/OpenGL.c.o
OpenGL: CMakeFiles/OpenGL.dir/OpenGLLight.c.o
OpenGL: CMakeFiles/OpenGL.dir/OpenGLPlanet.c.o
OpenGL: CMakeFiles/OpenGL.dir/OpenGLsin.c.o
OpenGL: CMakeFiles/OpenGL.dir/test.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/build.make
OpenGL: CMakeFiles/OpenGL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable OpenGL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGL.dir/build: OpenGL
.PHONY : CMakeFiles/OpenGL.dir/build

CMakeFiles/OpenGL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGL.dir/clean

CMakeFiles/OpenGL.dir/depend:
	cd /home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chamip/github/OutputDoc/vimCode/OpenGL /home/chamip/github/OutputDoc/vimCode/OpenGL /home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug /home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug /home/chamip/github/OutputDoc/vimCode/OpenGL/cmake-build-debug/CMakeFiles/OpenGL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGL.dir/depend

