# Vehicle-Registry-System-# Vehicle Registry System

## Project Description

Vehicle Registry System is a C++ Object-Oriented Programming (OOP) based application that manages different types of vehicles. The system allows users to add, display, search, and count vehicles using concepts such as Inheritance, Multilevel Inheritance, Multiple Inheritance, Polymorphism, Static Members, and Dynamic Memory Allocation.

---

## Features

* Add different types of vehicles:

  * Car
  * Electric Car
  * Sports Car
  * Flying Car
  * Sedan
  * SUV

* Display all registered vehicles.

* Search vehicles by Vehicle ID.

* Count total vehicles using a static member.

* Demonstrates runtime polymorphism using virtual functions.

* Uses inheritance hierarchy for code reusability.

---

## OOP Concepts Used

### 1. Encapsulation

Vehicle details are stored inside classes using data members and member functions.

### 2. Inheritance

* Car inherits from Vehicle.
* ElectricCar inherits from Car.
* SportsCar inherits from ElectricCar.
* Sedan and SUV inherit from Car.

### 3. Multiple Inheritance

FlyingCar inherits from both:

* Car
* Aircraft

### 4. Polymorphism

Virtual display() function is overridden in derived classes.

### 5. Static Data Member

totalVehicles keeps track of the total number of vehicles created.

### 6. Dynamic Memory Allocation

Objects are created using the new operator and stored in the registry.

---

## Class Structure

### Vehicle

Base class containing:

* Vehicle ID
* Manufacturer
* Model
* Year

### Car

Derived from Vehicle and adds:

* Fuel Type

### ElectricCar

Derived from Car and adds:

* Battery Capacity

### SportsCar

Derived from ElectricCar and adds:

* Top Speed

### Aircraft

Contains:

* Flight Range

### FlyingCar

Derived from Car and Aircraft.

### Sedan

Derived from Car.

### SUV

Derived from Car.

### VehicleRegistry

Manages all vehicle records using an array of Vehicle pointers.

---

## Menu Options

1. Add Car
2. Add Electric Car
3. Add Sports Car
4. Add Flying Car
5. Add Sedan
6. Add SUV
7. View All Vehicles
8. Search Vehicle By ID
9. Total Vehicles
10. Exit

---

## Sample Output

===== VEHICLE REGISTRY SYSTEM =====

1. Add Car

2. Add Electric Car

3. Add Sports Car

4. Add Flying Car

5. Add Sedan

6. Add SUV

7. View All Vehicles

8. Search Vehicle By ID

9. Total Vehicles

10. Exit

Enter Choice : 1

ID : 101

Manufacturer : Toyota

Model : Corolla

Year : 2024

Fuel Type : Petrol

---

## Requirements

* C++ Compiler (GCC, MinGW, Turbo C++, Visual Studio, CodeBlocks, etc.)
* C++11 or higher

---

## Compilation

Using g++ compiler:

g++ VehicleRegistry.cpp -o VehicleRegistry

Run:

./VehicleRegistry

---

## Author

Name: ___________________

Enrollment No: ___________________

Course: Object Oriented Programming (C++)

Project Title: Vehicle Registry System

---

## Conclusion

This project successfully demonstrates various OOP concepts such as inheritance, polymorphism, multiple inheritance, encapsulation, static members, and dynamic memory allocation. It provides an efficient way to manage different types of vehicles through a menu-driven application.
