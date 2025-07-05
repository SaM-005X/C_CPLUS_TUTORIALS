# Agent Guidelines for C_CPLUS_TUTORIALS

## Build/Test Commands
- Compile C files: `gcc filename.c -o filename.exe`
- Run executable: `./filename.exe` (Linux/Mac) or `filename.exe` (Windows)
- Compile with debugging: `gcc -g filename.c -o filename.exe`
- For multiple files: `gcc file1.c file2.c -o program.exe`

## Codebase Structure
- **C_PROG_TUTORIAL/**: Main C tutorial directory with 8 subdirectories
  - **BASIC_C/**: Introductory concepts (intro, variables, data types)
  - **OPERATORS_C/**: Arithmetic, logical, assignment operators
  - **CONDITIONAL_STATEMENTS_C/**: If-else, switch statements
  - **LOOPS_C/**: While, for, do-while loops
  - **FUNCTIONS_C/**: Function definitions, prototypes, parameters
  - **ARRAYS_C/**: Array operations and examples
  - **STRUCTS_C/**: Structure definitions and usage
  - **QUESTION_C/**: Practice problems and test files

## Code Style Guidelines
- Use `#include<stdio.h>` format for headers
- Follow standard C naming: lowercase with underscores
- Include descriptive comments explaining concepts
- Use `int main()` with `return 0;` for program entry
- Bracket style: opening brace on same line for functions
- Educational focus: include detailed explanatory comments
