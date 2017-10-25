# printf

## Contributors

Jacob Hartman, Shannon Anderson-Cockern
Test cases contributed by Brian Sylvester, Steven Garcia as well.
Additional information was provided by Holberton School.

## Purpose

The purpose of the printf function is to be able to print variables of various data types, as well as to return a count of the characters printed.

## Files
* .gitignore will preclude temporary files from being committed
* _printf.c contains the primary function and skeleton of the project. It also contains 4 other functions: print_string, print_char, null_case, and print_number.
* func_pick.c contains a helper function that allows us to choose the aformentioned functions listed in the bullet above.
* holberton.h is our header file. It includes any libraries required, declares a struct type, and lists our function prototypes
* man_3_printf is a man page for our version of printf()

## Functionality

This is not an equivalent to the C Standard printf(). Conversion specifiers that can be handled are c, s, %, d, and i. There is no buffer handling. There are no flag characters or length modifiers. Field width and precision are ignored. In other words, simple chars, ints, and strings can be passed.

## Steven's test files

(https://github.com/stvngrcia/batch--4-printf-test-file)

## Github Collaboration Order of Commands

#### Written by Kiren, revised by Jacob

1. On github, create an "alpha" branch that is a copy of master

2. :~/ur_dir$ git pull origin alpha

3. :~/ur_dir$ git checkout -b feauture

4. Program! and make changes to your local feature

5. :~/ur_dir$ git add file1 file2 ...

6. :~/ur_dir$ git commit -m "message"

7. :~/ur_dir$ git push origin feature

8. On github, create a pull request with "alpha" as "base" and "feautre" as "compare"

9. Have other person review and merge "feature" to alpha

10. :~/ur_dir$ git checkout alpha

REPEAT STEPS 2-10 throughout the project

11. :~/ur_dir$ On github, create a pull request with "master" as "base" and "alpha" as "compare"

12. Finally, merge to master on github.

#### Other git commands

:~/ur_dir$ git branch   *this will tell you which branch you're on*
