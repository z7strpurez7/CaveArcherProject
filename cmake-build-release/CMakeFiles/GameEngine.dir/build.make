# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\alito\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.6682.181\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\alito\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.6682.181\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alito\dat220g19v\PlatformShooter2D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/GameEngine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameEngine.dir/flags.make

CMakeFiles/GameEngine.dir/main.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GameEngine.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\main.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\main.cpp

CMakeFiles/GameEngine.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\main.cpp > CMakeFiles\GameEngine.dir\main.cpp.i

CMakeFiles/GameEngine.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\main.cpp -o CMakeFiles\GameEngine.dir\main.cpp.s

CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.obj: ../Engine/AssetManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\Engine\AssetManager.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\AssetManager.cpp

CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\AssetManager.cpp > CMakeFiles\GameEngine.dir\Engine\AssetManager.cpp.i

CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\AssetManager.cpp -o CMakeFiles\GameEngine.dir\Engine\AssetManager.cpp.s

CMakeFiles/GameEngine.dir/Engine/Game.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/Engine/Game.cpp.obj: ../Engine/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GameEngine.dir/Engine/Game.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\Engine\Game.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\Game.cpp

CMakeFiles/GameEngine.dir/Engine/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/Engine/Game.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\Game.cpp > CMakeFiles\GameEngine.dir\Engine\Game.cpp.i

CMakeFiles/GameEngine.dir/Engine/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/Engine/Game.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\Game.cpp -o CMakeFiles\GameEngine.dir\Engine\Game.cpp.s

CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.obj: ../Engine/InputManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\Engine\InputManager.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\InputManager.cpp

CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\InputManager.cpp > CMakeFiles\GameEngine.dir\Engine\InputManager.cpp.i

CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\InputManager.cpp -o CMakeFiles\GameEngine.dir\Engine\InputManager.cpp.s

CMakeFiles/GameEngine.dir/States/StartScreen.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/StartScreen.cpp.obj: ../States/StartScreen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GameEngine.dir/States/StartScreen.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\StartScreen.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\StartScreen.cpp

CMakeFiles/GameEngine.dir/States/StartScreen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/StartScreen.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\StartScreen.cpp > CMakeFiles\GameEngine.dir\States\StartScreen.cpp.i

CMakeFiles/GameEngine.dir/States/StartScreen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/StartScreen.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\StartScreen.cpp -o CMakeFiles\GameEngine.dir\States\StartScreen.cpp.s

CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.obj: ../Engine/StateMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\Engine\StateMachine.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\StateMachine.cpp

CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\StateMachine.cpp > CMakeFiles\GameEngine.dir\Engine\StateMachine.cpp.i

CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\Engine\StateMachine.cpp -o CMakeFiles\GameEngine.dir\Engine\StateMachine.cpp.s

CMakeFiles/GameEngine.dir/States/MainMenu.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/MainMenu.cpp.obj: ../States/MainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GameEngine.dir/States/MainMenu.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\MainMenu.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\MainMenu.cpp

CMakeFiles/GameEngine.dir/States/MainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/MainMenu.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\MainMenu.cpp > CMakeFiles\GameEngine.dir\States\MainMenu.cpp.i

CMakeFiles/GameEngine.dir/States/MainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/MainMenu.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\MainMenu.cpp -o CMakeFiles\GameEngine.dir\States\MainMenu.cpp.s

CMakeFiles/GameEngine.dir/States/InGame.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/InGame.cpp.obj: ../States/InGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/GameEngine.dir/States/InGame.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\InGame.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\InGame.cpp

CMakeFiles/GameEngine.dir/States/InGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/InGame.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\InGame.cpp > CMakeFiles\GameEngine.dir\States\InGame.cpp.i

CMakeFiles/GameEngine.dir/States/InGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/InGame.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\InGame.cpp -o CMakeFiles\GameEngine.dir\States\InGame.cpp.s

CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.obj: ../States/Animations/Animation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Animations\Animation.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Animations\Animation.cpp

CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Animations\Animation.cpp > CMakeFiles\GameEngine.dir\States\Animations\Animation.cpp.i

CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Animations\Animation.cpp -o CMakeFiles\GameEngine.dir\States\Animations\Animation.cpp.s

CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.obj: ../States/Characters/Skeletons.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Characters\Skeletons.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Skeletons.cpp

CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Skeletons.cpp > CMakeFiles\GameEngine.dir\States\Characters\Skeletons.cpp.i

CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Skeletons.cpp -o CMakeFiles\GameEngine.dir\States\Characters\Skeletons.cpp.s

CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.obj: ../States/Characters/Archer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Characters\Archer.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Archer.cpp

CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Archer.cpp > CMakeFiles\GameEngine.dir\States\Characters\Archer.cpp.i

CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Characters\Archer.cpp -o CMakeFiles\GameEngine.dir\States\Characters\Archer.cpp.s

CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.obj: ../States/Collision/Collision.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Collision\Collision.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Collision\Collision.cpp

CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Collision\Collision.cpp > CMakeFiles\GameEngine.dir\States\Collision\Collision.cpp.i

CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Collision\Collision.cpp -o CMakeFiles\GameEngine.dir\States\Collision\Collision.cpp.s

CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.obj: ../States/Objects/bigRectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Objects\bigRectangle.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\bigRectangle.cpp

CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\bigRectangle.cpp > CMakeFiles\GameEngine.dir\States\Objects\bigRectangle.cpp.i

CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\bigRectangle.cpp -o CMakeFiles\GameEngine.dir\States\Objects\bigRectangle.cpp.s

CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.obj: CMakeFiles/GameEngine.dir/flags.make
CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.obj: ../States/Objects/movingRectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GameEngine.dir\States\Objects\movingRectangle.cpp.obj -c C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\movingRectangle.cpp

CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\movingRectangle.cpp > CMakeFiles\GameEngine.dir\States\Objects\movingRectangle.cpp.i

CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\alito\dat220g19v\PlatformShooter2D\States\Objects\movingRectangle.cpp -o CMakeFiles\GameEngine.dir\States\Objects\movingRectangle.cpp.s

# Object files for target GameEngine
GameEngine_OBJECTS = \
"CMakeFiles/GameEngine.dir/main.cpp.obj" \
"CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.obj" \
"CMakeFiles/GameEngine.dir/Engine/Game.cpp.obj" \
"CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/StartScreen.cpp.obj" \
"CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/MainMenu.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/InGame.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.obj" \
"CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.obj"

# External object files for target GameEngine
GameEngine_EXTERNAL_OBJECTS =

GameEngine.exe: CMakeFiles/GameEngine.dir/main.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/Engine/AssetManager.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/Engine/Game.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/Engine/InputManager.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/StartScreen.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/Engine/StateMachine.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/MainMenu.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/InGame.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Animations/Animation.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Characters/Skeletons.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Characters/Archer.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Collision/Collision.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Objects/bigRectangle.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/States/Objects/movingRectangle.cpp.obj
GameEngine.exe: CMakeFiles/GameEngine.dir/build.make
GameEngine.exe: CMakeFiles/GameEngine.dir/linklibs.rsp
GameEngine.exe: CMakeFiles/GameEngine.dir/objects1.rsp
GameEngine.exe: CMakeFiles/GameEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable GameEngine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GameEngine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameEngine.dir/build: GameEngine.exe

.PHONY : CMakeFiles/GameEngine.dir/build

CMakeFiles/GameEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GameEngine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GameEngine.dir/clean

CMakeFiles/GameEngine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\alito\dat220g19v\PlatformShooter2D C:\Users\alito\dat220g19v\PlatformShooter2D C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release C:\Users\alito\dat220g19v\PlatformShooter2D\cmake-build-release\CMakeFiles\GameEngine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameEngine.dir/depend

