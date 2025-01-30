# Changelog

## [1.0.0] - 2025-01-30

### Project Structure
- Reorganized project into a proper directory structure (src/, include/, lib/, obj/, tests/)
- Moved all source files to src/ directory
- Moved header file to include/ directory

### Build System
- Added comprehensive Makefile with targets:
  - `make all`: Build the static library
  - `make main`: Build the example program
  - `make test`: Build and run tests
  - `make clean/fclean`: Cleanup targets
  - `make re`: Rebuild everything

### Code Improvements
- Fixed compilation warnings in functions.c (unsigned integer constant)
- Fixed pointer casting issues in functions2.c using uintptr_t
- Updated main.c with better examples
- Added proper error handling in buffer operations

### Documentation
- Created comprehensive README.md with:
  - Project structure documentation
  - Feature list
  - Build instructions
  - Usage examples
  - Testing information
  
### Testing
- Added test suite in tests/test_printf.c
- Implemented comparison tests with standard printf

### Version Control
- Added .gitignore file for C project
- Organized ignored files by category:
  - Build artifacts
  - IDE files
  - OS-specific files
  - Debug files
  - Temporary files

### Bug Fixes
- Fixed integer overflow in binary conversion
- Improved pointer address handling
- Added buffer overflow protection
