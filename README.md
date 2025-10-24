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

Repository layout 
- src/                 — C++ source code for the scanner
  - scanner.cpp
- target_level.c       — specifying the C-code-level we're targetting
-  examples/
   - example.c
   - example_tokens.txt
   - other code examples (only .c files) 
- README.md
- LICENSE


Notes and next steps

- The scanner currently recognizes:
      
   - C identifiers and this list of common C keywords  :
      
      {"auto", "break", "case", "char", "const",
        "continue", "default", "do", "double", "else",
        "enum", "extern", "float", "for", "goto", "if", 
        "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
        "void", "volatile","while" }

   - Preprocessor directives
      
   - integer and floating numeric literals (basic recognition)
      
   - single-line (`// ...`) and multi-line (`/* ... */`) comments (comments are classified as tokens with their contents certainly skipped)
      
   - operators (Arithmetic/ Logical /Bitwise) listed as follows :

      '{
      
      '+', '-', '*', '/', '=', '<', '>','%','^',
      
      '|' , '&','~', '!',
      
      "++", "--","<<",">>",  "==", "&&", "||",  
      
      "+=", "-=", "*=", "/=", "%=", 
      
      "&=", "|=", "^=", "<<=", ">>=", "!=", 
      
      ">=", "<=","pow" 
      
      }'
      
   - delimiters(some call them as special characters as well) (common set; tweak as needed) listed also as follows : 

      '{ '( ', ')' , '{' ,  '}' ,  ';' ,  ',' ,  '#',  '.', '[' , ']' }'

- Finally, If no output file is specified, the scanner defaults to `tokens.txt` in the current directory.
- The scanner should not output the `tokens.txt` (for now) in only the following 2 cases: 
      
   A- if an error of an unexpected character occurs.
      
   B- if an error of a numeric constant with multiple / more than one decimal  point occurs.  
   Anyway, It should tell the user through the terminal if any of these 2 cases exists and specify which case has existed. 
   One last note: if both cases do exist in your C-code, Our scanner detects the earlier one according to their positions in the code (  the earlier to show up in the code ), reports it, and then it's done there.   