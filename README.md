# Threading-Workshop
Repository for threading workshop.

# Building
At first, user need to prepare propper environent. It can be done 2 ways:

 - first, by usage VM image given by author.
 - prepare by its own.

Enviromnent shall contain:

 - Compiler with c++20 support
 - CMake
 - git
 
All examples are tested on Lubuntu with gcc 12.3 support.
 
To build a repository just follow standard CMAKE project build procedure. As an example:

  - git clone https://github.com/PiotrWi/Threading-Workshop.git
  - cd Threading-Workshop
  - mkdir build
  - cd build
  - cmake ..
  - make all
 
