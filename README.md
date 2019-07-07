# csvparser

## Project structure

### Directories
- `src`: All source code for entire project, except tests
- `lib`: Static libraries (.a)
- `test`: Tests source-code

### Module strucuture in `src`

This project is organized by modules. Each module is represented by a folder in `src` dir. There can be several modules, but only one will be the main module. The 'main module' is from where the binary target (executable) will be generated. In this current structure, we allow only one binary target (executable) for the entire project. The other non-main modules are called 'library modules'.

The other modules will generate each a static library. Every compilation will update the files in `lib` dir with the `.a` file for correponding library.

The headers for each module are store in `includes` subdirectory. The main module will have access to its headers and all the library modules (other modules) headers. Library modules, on the other hand, will only have access to its headers.

It is encouraged to not create other subdirectories on the modules. Instead, if there is an urgent need to create more folders or the module is too big, a new module should be created and funcionality should be splitted and restructured.

#### Creating new library module

1. Create a new folder for the new module
1. Create a CMakeLists.txt for it
1. Add `add_library` to include the target for the module and `target_include_directories` with the private includes
1. Set `_PATH` and `_SOURCES` variables with corresponding values
1. Add `add_subdirectory` option with path to new library module on root CMakeLists.txt
1. Include a new line for main module in CMakeLists.txt for including headers with `target_include_directories` and sources with `find_library`

### Conventions

- File names: snake_case
- Variable names: Camel case. Classes start with uppercase, variable and functions with lowercase, constants with all uppercase
- Module names: Lowercase

### Future improvements

- Have the inclusion of a new module more rubust with less or no configuration
- Have all sources on the compilation without the need of setting `_SOURCES` in each module
