# CPP00 
(Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic
stuff)
## Grade: 80/100
![cpp00](https://github.com/user-attachments/assets/ed7e753d-d7a1-4a65-ab88-276568671fe3)

## ex00 (Megaphone)

### Overview
Megaphone is a simple C++ program designed to wake everyone up by converting any given command-line arguments to uppercase. If no arguments are provided, the program outputs a loud, feedback-like message.

### Features
- **Command-Line Processing:** Accepts multiple arguments, concatenates them, and outputs the result in uppercase.
- **Default Behavior:** When no arguments are passed, displays:  
  `* LOUD AND UNBEARABLE FEEDBACK NOISE *`

### Files Structure
- **Makefile:** Automates the build process.
- **megaphone.cpp:** Contains the main function and implementation that handles argument parsing and string conversion.

### What I Learned
- **Command-Line Arguments:** How to handle and process `argc`/`argv` in C++.
- **String Manipulation:** Converting strings to uppercase without using forbidden functions.
- **Basic I/O:** Using standard output streams for formatted display.
- **C++ Fundamentals:** Reinforced understanding of C++ syntax and best practices.

---

## ex01 (My Awesome PhoneBook)

### Overview
My Awesome PhoneBook is a C++ application that simulates a retro phonebook. The program stores contacts in a fixed-size array (up to 8 contacts) and supports three main commands: ADD, SEARCH, and EXIT. If the user attempts to add a 9th contact, the oldest one is replaced.

### Features
- **ADD:**  
  Prompts the user to input new contact details (first name, last name, nickname, phone number, and darkest secret). Empty fields are not allowed.
- **SEARCH:**  
  Displays a formatted list of contacts (with right-aligned columns of width 10). If a field is too long, it is truncated with a dot at the end. The user can then input an index to view full details of the chosen contact.
- **EXIT:**  
  Quits the program and clears all stored contacts.
- **Design:**  
  Implements two classes:
  - `PhoneBook`: Manages an array of contacts.
  - `Contact`: Represents an individual contact.
  
  *Dynamic memory allocation is forbidden; all contacts are stored in a fixed-size array.*

### Files Structure
- **Makefile:** Automates the build process.
- **Main.cpp:** Contains the main loop for user commands.
- **PhoneBook.cpp / PhoneBook.hpp:** Implement the `PhoneBook` class.
- **Contact.cpp / Contact.hpp:** Implement the `Contact` class.

### What I Learned
- **Object-Oriented Programming:** Designing classes, using encapsulation, and managing class data.
- **Fixed-Size Data Structures:** Storing and replacing contacts within a static array.
- **Input/Output Formatting:** Creating formatted tables for user-friendly display.
- **C++ Best Practices:** Writing clean, maintainable code while following strict coding standards.

---

## Conclusion
The CPP00 projects have provided a solid foundation in C++ programming. From basic command-line processing in Megaphone to designing robust classes for My Awesome PhoneBook, these projects have strengthened my skills in string manipulation, object-oriented design, and adherence to coding norms. They have been both challenging and rewarding, significantly boosting my confidence in C++ development.
