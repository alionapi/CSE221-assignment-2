# CSE221-assignment-2
CSE221: Data Structures | Fall 2024 | Smart Device Management System

A C++ object-oriented device management system for managing multiple types of smart devices. The system demonstrates inheritance, polymorphism, virtual functions, operator overloading, exception handling, and dynamic memory management.

Devices are managed through a common base class and stored in a manager capable of adding, deleting, searching, comparing, and printing devices.

## Features

* Abstract base class with pure virtual functions
* Inheritance and polymorphism
* Operator overloading
* Dynamic memory management
* Exception handling for duplicate devices
* Device insertion, deletion, and search
* Support for multiple device types
* Device comparison based on attributes
* Ordered printing of all devices

## Repository Structure

```text
.
├── Makefile                    # Build configuration
├── PA2 description_v1.0.pdf    # Assignment specification
├── README.md                   # Repository documentation
├── device.cpp                  # Device class implementations
└── manager.cpp                 # Device manager implementation
```

## Class Hierarchy

```text
Device (abstract)
├── Phone
├── Watch
├── Ring
└── Earbud
```

## Implemented Classes

### Device

Base abstract class containing:

* `device_id`
* `device_type`
* `brand`

Provides:

* Pure virtual `print_device()`
* Equality operator `==`
* Comparison operators `<`, `>`, `<=`, `>=`

### Phone

Additional attribute:

* Data usage

Overrides:

* `print_device()`
* Comparison operators based on data usage

### Watch

Additional attribute:

* Step count

Overrides:

* `print_device()`
* Comparison operators based on step count

### Ring

Additional attribute:

* Sleep tracking status

Overrides:

* `print_device()`

### Earbud

Additional attribute:

* Noise cancellation status

Overrides:

* `print_device()`

### Manager

Maintains an array of up to 100 devices and provides:

* `add_device()`
* `compare_device()`
* `find_device()`
* `delete_device()`
* `print_all_devices()`

### DuplicateDevice

Custom exception class used when attempting to add an already existing device.

## Implemented Functionality

### Device Management

* Add devices
* Delete devices
* Search for devices
* Compare devices
* Print all devices

### Operator Overloading

* Equality operator `==`
* Relational operators `<`, `>`, `<=`, `>=`

### Memory Management

* Constructors and destructors
* Dynamic allocation and deallocation
* Proper cleanup of device objects

### Exception Handling

* Duplicate device detection
* Exception throwing using `DuplicateDevice`

## Building

Compile the project using:

```bash
make
```

This generates:

```text
main
```

## Main Source Files

### device.cpp

Implements:

* Device class hierarchy
* Constructors and destructors
* Virtual functions
* Operator overloading

### manager.cpp

Implements:

* Device storage
* Search operations
* Device comparison
* Device deletion
* Exception handling
* Printing functionality
