cpp_skeleton
============

Because I've spent too much time writing CMake files at the start of projects.

usage
=====

Just check out this repository, and you have a basic C++ project set up and ready with CMake / Boost-Test (1.54).

The project includes:
* A "shared" `include` directory
* A submodule within `src` (`module_1`)
** Compiled to static and shared libraries
* Two test submodules
** One tests `module_1`
** One is a trivial failing test
* A test runner

Run the tests with:

    mkdir build
    cd build
    cmake ..
    test/test
    
You should see a failing test.
