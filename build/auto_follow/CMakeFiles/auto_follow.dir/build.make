# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/up2/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/up2/catkin_ws/build

# Include any dependencies generated for this target.
include auto_follow/CMakeFiles/auto_follow.dir/depend.make

# Include the progress variables for this target.
include auto_follow/CMakeFiles/auto_follow.dir/progress.make

# Include the compile flags for this target's objects.
include auto_follow/CMakeFiles/auto_follow.dir/flags.make

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o: auto_follow/CMakeFiles/auto_follow.dir/flags.make
auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o: /home/up2/catkin_ws/src/auto_follow/src/serial.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/up2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_follow.dir/src/serial.cc.o -c /home/up2/catkin_ws/src/auto_follow/src/serial.cc

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_follow.dir/src/serial.cc.i"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/up2/catkin_ws/src/auto_follow/src/serial.cc > CMakeFiles/auto_follow.dir/src/serial.cc.i

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_follow.dir/src/serial.cc.s"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/up2/catkin_ws/src/auto_follow/src/serial.cc -o CMakeFiles/auto_follow.dir/src/serial.cc.s

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.requires:

.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.requires

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.provides: auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.requires
	$(MAKE) -f auto_follow/CMakeFiles/auto_follow.dir/build.make auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.provides.build
.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.provides

auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.provides.build: auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o


auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o: auto_follow/CMakeFiles/auto_follow.dir/flags.make
auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o: /home/up2/catkin_ws/src/auto_follow/src/impl/unix.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/up2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_follow.dir/src/impl/unix.cc.o -c /home/up2/catkin_ws/src/auto_follow/src/impl/unix.cc

auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_follow.dir/src/impl/unix.cc.i"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/up2/catkin_ws/src/auto_follow/src/impl/unix.cc > CMakeFiles/auto_follow.dir/src/impl/unix.cc.i

auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_follow.dir/src/impl/unix.cc.s"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/up2/catkin_ws/src/auto_follow/src/impl/unix.cc -o CMakeFiles/auto_follow.dir/src/impl/unix.cc.s

auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.requires:

.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.requires

auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.provides: auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.requires
	$(MAKE) -f auto_follow/CMakeFiles/auto_follow.dir/build.make auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.provides.build
.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.provides

auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.provides.build: auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o


auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o: auto_follow/CMakeFiles/auto_follow.dir/flags.make
auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o: /home/up2/catkin_ws/src/auto_follow/src/impl/list_ports/list_ports_linux.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/up2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o -c /home/up2/catkin_ws/src/auto_follow/src/impl/list_ports/list_ports_linux.cc

auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.i"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/up2/catkin_ws/src/auto_follow/src/impl/list_ports/list_ports_linux.cc > CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.i

auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.s"
	cd /home/up2/catkin_ws/build/auto_follow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/up2/catkin_ws/src/auto_follow/src/impl/list_ports/list_ports_linux.cc -o CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.s

auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.requires:

.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.requires

auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.provides: auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.requires
	$(MAKE) -f auto_follow/CMakeFiles/auto_follow.dir/build.make auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.provides.build
.PHONY : auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.provides

auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.provides.build: auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o


# Object files for target auto_follow
auto_follow_OBJECTS = \
"CMakeFiles/auto_follow.dir/src/serial.cc.o" \
"CMakeFiles/auto_follow.dir/src/impl/unix.cc.o" \
"CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o"

# External object files for target auto_follow
auto_follow_EXTERNAL_OBJECTS =

/home/up2/catkin_ws/devel/lib/libauto_follow.so: auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o
/home/up2/catkin_ws/devel/lib/libauto_follow.so: auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o
/home/up2/catkin_ws/devel/lib/libauto_follow.so: auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o
/home/up2/catkin_ws/devel/lib/libauto_follow.so: auto_follow/CMakeFiles/auto_follow.dir/build.make
/home/up2/catkin_ws/devel/lib/libauto_follow.so: auto_follow/CMakeFiles/auto_follow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/up2/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library /home/up2/catkin_ws/devel/lib/libauto_follow.so"
	cd /home/up2/catkin_ws/build/auto_follow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/auto_follow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
auto_follow/CMakeFiles/auto_follow.dir/build: /home/up2/catkin_ws/devel/lib/libauto_follow.so

.PHONY : auto_follow/CMakeFiles/auto_follow.dir/build

auto_follow/CMakeFiles/auto_follow.dir/requires: auto_follow/CMakeFiles/auto_follow.dir/src/serial.cc.o.requires
auto_follow/CMakeFiles/auto_follow.dir/requires: auto_follow/CMakeFiles/auto_follow.dir/src/impl/unix.cc.o.requires
auto_follow/CMakeFiles/auto_follow.dir/requires: auto_follow/CMakeFiles/auto_follow.dir/src/impl/list_ports/list_ports_linux.cc.o.requires

.PHONY : auto_follow/CMakeFiles/auto_follow.dir/requires

auto_follow/CMakeFiles/auto_follow.dir/clean:
	cd /home/up2/catkin_ws/build/auto_follow && $(CMAKE_COMMAND) -P CMakeFiles/auto_follow.dir/cmake_clean.cmake
.PHONY : auto_follow/CMakeFiles/auto_follow.dir/clean

auto_follow/CMakeFiles/auto_follow.dir/depend:
	cd /home/up2/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/up2/catkin_ws/src /home/up2/catkin_ws/src/auto_follow /home/up2/catkin_ws/build /home/up2/catkin_ws/build/auto_follow /home/up2/catkin_ws/build/auto_follow/CMakeFiles/auto_follow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : auto_follow/CMakeFiles/auto_follow.dir/depend

