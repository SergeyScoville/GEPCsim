# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_SOURCE_DIR = /afs/cern.ch/user/s/sscovill/GEPCsim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /afs/cern.ch/user/s/sscovill/GEPCsim/build

# Include any dependencies generated for this target.
include CMakeFiles/GEPCsim.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GEPCsim.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GEPCsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GEPCsim.dir/flags.make

CMakeFiles/GEPCsim.dir/src/main.cxx.o: CMakeFiles/GEPCsim.dir/flags.make
CMakeFiles/GEPCsim.dir/src/main.cxx.o: /afs/cern.ch/user/s/sscovill/GEPCsim/src/main.cxx
CMakeFiles/GEPCsim.dir/src/main.cxx.o: CMakeFiles/GEPCsim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/afs/cern.ch/user/s/sscovill/GEPCsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GEPCsim.dir/src/main.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GEPCsim.dir/src/main.cxx.o -MF CMakeFiles/GEPCsim.dir/src/main.cxx.o.d -o CMakeFiles/GEPCsim.dir/src/main.cxx.o -c /afs/cern.ch/user/s/sscovill/GEPCsim/src/main.cxx

CMakeFiles/GEPCsim.dir/src/main.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEPCsim.dir/src/main.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /afs/cern.ch/user/s/sscovill/GEPCsim/src/main.cxx > CMakeFiles/GEPCsim.dir/src/main.cxx.i

CMakeFiles/GEPCsim.dir/src/main.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEPCsim.dir/src/main.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /afs/cern.ch/user/s/sscovill/GEPCsim/src/main.cxx -o CMakeFiles/GEPCsim.dir/src/main.cxx.s

CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o: CMakeFiles/GEPCsim.dir/flags.make
CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o: /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data.cxx
CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o: CMakeFiles/GEPCsim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/afs/cern.ch/user/s/sscovill/GEPCsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o -MF CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o.d -o CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o -c /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data.cxx

CMakeFiles/GEPCsim.dir/src/tob_data.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEPCsim.dir/src/tob_data.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data.cxx > CMakeFiles/GEPCsim.dir/src/tob_data.cxx.i

CMakeFiles/GEPCsim.dir/src/tob_data.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEPCsim.dir/src/tob_data.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data.cxx -o CMakeFiles/GEPCsim.dir/src/tob_data.cxx.s

CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o: CMakeFiles/GEPCsim.dir/flags.make
CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o: /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data_cp.cxx
CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o: CMakeFiles/GEPCsim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/afs/cern.ch/user/s/sscovill/GEPCsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o -MF CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o.d -o CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o -c /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data_cp.cxx

CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data_cp.cxx > CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.i

CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /afs/cern.ch/user/s/sscovill/GEPCsim/src/tob_data_cp.cxx -o CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.s

# Object files for target GEPCsim
GEPCsim_OBJECTS = \
"CMakeFiles/GEPCsim.dir/src/main.cxx.o" \
"CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o" \
"CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o"

# External object files for target GEPCsim
GEPCsim_EXTERNAL_OBJECTS =

GEPCsim: CMakeFiles/GEPCsim.dir/src/main.cxx.o
GEPCsim: CMakeFiles/GEPCsim.dir/src/tob_data.cxx.o
GEPCsim: CMakeFiles/GEPCsim.dir/src/tob_data_cp.cxx.o
GEPCsim: CMakeFiles/GEPCsim.dir/build.make
GEPCsim: CMakeFiles/GEPCsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/afs/cern.ch/user/s/sscovill/GEPCsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GEPCsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GEPCsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GEPCsim.dir/build: GEPCsim
.PHONY : CMakeFiles/GEPCsim.dir/build

CMakeFiles/GEPCsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GEPCsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GEPCsim.dir/clean

CMakeFiles/GEPCsim.dir/depend:
	cd /afs/cern.ch/user/s/sscovill/GEPCsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /afs/cern.ch/user/s/sscovill/GEPCsim /afs/cern.ch/user/s/sscovill/GEPCsim /afs/cern.ch/user/s/sscovill/GEPCsim/build /afs/cern.ch/user/s/sscovill/GEPCsim/build /afs/cern.ch/user/s/sscovill/GEPCsim/build/CMakeFiles/GEPCsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GEPCsim.dir/depend

