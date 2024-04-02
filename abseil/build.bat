IF "%~1"=="" (
  echo "First argument must be the build configuration (e.g. Debug, Release)"
  exit 1
)
IF "%1" == "Debug" (
  echo "DEBUG build configuration selected"

  :: Got an error about RuntimeLibrary mismiatch of MT_StaticRelease doesn't match value MTd_StaticDebug? Start here
  :: If you get an error about _ITERATOR_DEBUG_LEVEL mismatch, you're mixing Debug and Release builds together
  set CMAKE_MSVC_RUNTIME_LIBRARY="MultiThreadedDebug"
  set BUILD_CONFIG="Debug"
  set CMAKE_CXX_FLAGS="-DCMAKE_CXX_FLAGS_DEBUG=/MTd -DCMAKE_CXX_FLAGS=/MTd"
) else (
  echo "RELEASE build configuration selected"

  :: Got an error about RuntimeLibrary mismiatch of MT_StaticRelease doesn't match value MTd_StaticDebug? Start here
  :: If you get an error about _ITERATOR_DEBUG_LEVEL mismatch, you're mixing Debug and Release builds together
  set CMAKE_MSVC_RUNTIME_LIBRARY="MutliThreaded"
  set BUILD_CONFIG="Release"
  set CMAKE_CXX_FLAGS="-DCMAKE_CXX_FLAGS_RELEASE=/MT -DCMAKE_CXX_FLAGS=/MT"
)

IF "%~2"=="" (
  echo "No MSVC devenv passed"
  exit 2
)	

cd ..\abseil\abseil-cpp

mkdir build
mkdir build\%1
cd build\%1

IF %ERRORLEVEL% NEQ 0 (
  echo "Pre-build failure - Failed to enter build directory"
  exit %ERRORLEVEL%
)

set CMake="%2\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set CMake=%CMake:"=%

echo "CMake location: %CMake%"

"%CMake%" ../.. -DCMAKE_INSTALL_PREFIX=../../../%BUILD_CONFIG%/ -DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=ON -DCMAKE_CXX_STANDARD=20 -DCMAKE_BUILD_TYPE=%BUILD_CONFIG% -DCMAKE_MSVC_RUNTIME_LIBRARY=%CMAKE_MSVC_RUNTIME_LIBRARY% %CMAKE_CXX_FLAGS%

IF %ERRORLEVEL% NEQ 0 (
  echo "Pre-build failure - Previous command execution failed."
  exit %ERRORLEVEL%
)

:: To install a single target/lib
:: "%CMake%" --build . --config %BUILD_CONFIG% --target absl/flags/flags_parse --parallel %NUMBER_OF_PROCESSORS%
"%CMake%" --build . --config %BUILD_CONFIG% --parallel %NUMBER_OF_PROCESSORS%

IF %ERRORLEVEL% NEQ 0 (
  echo "Build failure - Previous command execution failed."
  exit %ERRORLEVEL%
)

"%CMake%" --build . --config %BUILD_CONFIG% --target install

IF %ERRORLEVEL% NEQ 0 (
  echo "Build failure - Installation failed"
  exit %ERRORLEVEL%
)

echo "Build success!"
exit 0
