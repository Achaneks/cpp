# C++ Modules 00–09

A progressive C++ project series from the **42 Network** focused on object-oriented programming, memory management, polymorphism, templates, exceptions, and the Standard Template Library (STL).

The modules progressively introduce core C++ concepts while following the constraints and coding standards of the 42 curriculum.

---

## 📚 Modules

| Module     | Main Topics                                                                 |
| ---------- | --------------------------------------------------------------------------- |
| **CPP 00** | Classes, member functions, namespaces, initialization lists, static members |
| **CPP 01** | Memory allocation, references, pointers, file streams, switch statements    |
| **CPP 02** | Orthodox Canonical Form, operator overloading, fixed-point numbers          |
| **CPP 03** | Inheritance                                                                 |
| **CPP 04** | Polymorphism, abstract classes, interfaces                                  |
| **CPP 05** | Exceptions, try/catch, custom exception classes                             |
| **CPP 06** | C++ casts: `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`  |
| **CPP 07** | Function and class templates                                                |
| **CPP 08** | Templated containers, iterators, algorithms                                 |
| **CPP 09** | STL containers and algorithms                                               |

---

## 🧩 Module 00 — C++ Fundamentals

Introduction to the fundamentals of C++ and object-oriented programming.

### Concepts

* Classes and objects
* Constructors and destructors
* Member functions
* Access specifiers
* Namespaces
* Static members
* Initialization lists
* `std::string`
* Basic I/O with `std::cout` and `std::cin`

---

## 🧠 Module 01 — Memory & References

Focus on memory management and references.

### Concepts

* Stack vs heap allocation
* `new` / `delete`
* References
* Pointers
* File streams
* Dynamic object creation
* Pointer-to-member concepts
* Switch statements

---

## ⚙️ Module 02 — Operator Overloading

Introduction to operator overloading and the Orthodox Canonical Form.

### Concepts

* Orthodox Canonical Form
* Copy constructors
* Copy assignment operators
* Operator overloading
* Comparison operators
* Arithmetic operators
* Increment/decrement operators
* Fixed-point number representation

---

## 🧬 Module 03 — Inheritance

Introduction to inheritance and class hierarchies.

### Concepts

* Base and derived classes
* Public/private/protected inheritance
* Constructor/destructor behavior
* Method overriding
* Multiple inheritance
* Diamond inheritance problem

---

## 🔄 Module 04 — Polymorphism

Focus on subtype polymorphism and abstract interfaces.

### Concepts

* Virtual functions
* Dynamic dispatch
* Virtual destructors
* Abstract classes
* Pure virtual functions
* Interfaces
* Polymorphic object management

---

## 🚨 Module 05 — Exceptions

Introduction to C++ exception handling.

### Concepts

* `try` / `catch`
* `throw`
* Standard exceptions
* Custom exception classes
* Exception propagation
* Exception-safe resource management

---

## 🎯 Module 06 — C++ Casts

Understanding the different casting mechanisms available in C++.

### Concepts

* `static_cast`
* `dynamic_cast`
* `reinterpret_cast`
* `const_cast`
* Type identification
* Runtime polymorphism

---

## 🧩 Module 07 — Templates

Introduction to generic programming.

### Concepts

* Function templates
* Class templates
* Template instantiation
* Generic algorithms
* Template type parameters

---

## 📦 Module 08 — STL Containers & Iterators

Introduction to the C++ Standard Template Library.

### Concepts

* STL containers
* Iterators
* Generic algorithms
* Container traversal
* Template-based design
* Iterator ranges

---

## 🏗️ Module 09 — STL & Algorithms

Advanced practice with STL containers and algorithms.

### Concepts

* `std::vector`
* `std::deque`
* `std::list`
* `std::stack`
* `std::queue`
* `std::map`
* `std::set`
* Iterators
* STL algorithms
* Container selection
* Algorithmic problem solving

---

## 🛠️ Compilation

The projects are designed around the C++98 standard.

Typical compilation:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Each exercise contains its own `Makefile` when required by the project.

Example:

```bash
cd module00/ex00
make
./megaphone
```

---

## 📁 Repository Structure

```text
CPP/
│
├── module00/
│   ├── ex00/
│   ├── ex01/
│   └── ...
│
├── module01/
│   ├── ex00/
│   ├── ex01/
│   └── ...
│
├── module02/
│   └── ...
│
├── module03/
│   └── ...
│
├── module04/
│   └── ...
│
├── module05/
│   └── ...
│
├── module06/
│   └── ...
│
├── module07/
│   └── ...
│
├── module08/
│   └── ...
│
└── module09/
    └── ...
```

---

## 🎯 Skills Developed

Through the complete module series, I developed practical experience with:

* Object-oriented programming
* C++ memory management
* Resource ownership
* Copy semantics
* Operator overloading
* Inheritance
* Polymorphism
* Abstract interfaces
* Exception handling
* Templates
* Generic programming
* STL containers
* Iterators and algorithms
* Debugging and problem solving
* Writing maintainable C++ code

---

## 🎓 Context

These projects were completed as part of the **42 Network / 1337 project-based curriculum**, where projects are developed independently and evaluated through peer review.

The modules progressively build the foundations required for larger C++ systems and software engineering projects.
