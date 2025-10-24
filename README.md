# Compiler-Project- — Phase 1 (Scanner)

Phase 1 of this compiler project implements the scanner (lexical analyzer). The scanner is written in C++ and targets C source input (specifically, the C code level as specified in the file target_level.c). The implementation utilizes a basic, compatible C token set of different classes; adjust the (keyword/operator/../ etc.) sets for a different standard as needed.


Phase 1 requirement


- Input: a C source file.
- Output: a `.txt` file that lists each token and its token class.
- Token output format
  Each line in the output file contains one token (per line) and structured as follows:

<KEYWORD, int>

<KEYWORD, main>

<SPECIAL CHARACTER, (>

<SPECIAL CHARACTER, )>

<SPECIAL CHARACTER, {>

......etc.

- No further compilation or code generation in this phase.

Repository layout (suggested)
- src/                 — C++ source code for the scanner
  - scanner.cpp
- target_level.c       — specifying the C-code-level we're targetting
-  examples/
   - example.c
   - example_tokens.txt
   - other code examples (only .c files) 
- README.md
- LICENSE
- .gitignore


Build and run (local)
1. Build:
   mkdir -p build
   g++ -std=c++17 -O2 -Iinclude -o build/scanner src/scanner.cpp

2. Run:
   ./build/scanner examples/example.c examples/example_tokens.txt

If no output file is specified, the scanner defaults to `tokens.txt` in the current directory.

Notes and next steps
- The scanner currently recognizes:
  - C identifiers and a list of common C keywords (listed in the code)
  - Preprocessor directives
  - integer and floating numeric literals (basic recognition)
  - single-line (`// ...`) and multi-line (`/* ... */`) comments (comments are classified as tokens with their contents certainly skipped)
  - operators (Arithmetic/ Logical /Bitwise) and delimiters(some call them as special characters as well) (common set; tweak as needed)
