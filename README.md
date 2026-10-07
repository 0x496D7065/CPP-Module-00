*This project has been created as part of the 42 curriculum*

# CPP Module 00

## Description

The first module of the 42 C++ series. It introduces the basics of C++98: namespaces, classes and member functions, standard input/output streams, initialization lists, `static` and `const`, and the first notions of object-oriented programming.

All code is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Instructions

Each exercise has its own folder and its own `Makefile`:

```bash
cd ex00        # or ex01
make           # builds the executable
make clean     # removes object files
make fclean    # removes object files and the executable
make re        # rebuilds everything
```

### Requirements

- A C++ compiler (`c++`, `g++`, or `clang++`) with C++98 support
- `make`

## Exercises

### ex00: Megaphone

A tiny program that turns its arguments into **loud text**: every argument is printed in uppercase, joined together.

```bash
./megaphone "shhhhh... I think the students are asleep..."
# SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
# DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

./megaphone
# * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

**Focus:** basic C++ I/O with `std::cout` and handling `argv`.

### ex01: My Awesome PhoneBook

A small interactive phonebook that stores contacts in memory. It is made of two classes:

- **`Contact`** holds the contact's information (first name, last name, nickname, phone number, darkest secret).
- **`PhoneBook`** stores up to **8 contacts**. When it is full, a new contact replaces the oldest one.

The program accepts three commands:

| Command | Behavior |
|---|---|
| `ADD` | Prompts for each field of a new contact (no field may be empty) and saves it |
| `SEARCH` | Displays all saved contacts in a table, then asks for an index to show one contact in full |
| `EXIT` | Quits the program (the contacts are lost) |

The `SEARCH` table has four columns (index, first name, last name, nickname), each 10 characters wide and right-aligned. Longer text is truncated and ends with a `.`.

**Focus:** classes, encapsulation, member functions, and formatting streams.

## Project structure

```
.
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp
└── ex01/
    ├── Makefile
    ├── main.cpp
    ├── Contact.hpp / Contact.cpp
    └── PhoneBook.hpp / PhoneBook.cpp
```

## Resources

- [cppreference.com](https://en.cppreference.com/)
- [C++ standard streams](https://cplusplus.com/reference/iolibs/)
- The 42 CPP Module 00 subject PDF
