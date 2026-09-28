# 🎓 Student Management System

A simple Student Management System developed as a college mini project using **C and Python**.

The project demonstrates how a C frontend can interact with a Python backend to manage student records using a JSON file for data storage.

---

## 📌 Project Objective

The objective of this project is to create a simple system for managing student information such as:

- Student Name
- Registration Number
- Branch
- Marks

The system allows the user to add, view, search, and delete student records.

---

## 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C | Frontend / User Interface |
| Python | Backend processing |
| JSON | Data storage |
| GCC | C program compilation |
| MSYS2 UCRT64 | C development environment |
| VS Code | Code editing |
| Git | Version control |
| GitHub | Source code hosting |

---

## 💻 Programming Languages

- **C**
- **Python**

---

## ✨ Features

### 1. Add Student
Adds a new student with:
- Name
- Registration Number
- Branch
- Marks

### 2. View Students
Displays all students stored in the system.

### 3. Search Student
Searches for a student using the registration number.

### 4. Delete Student
Deletes a student using the registration number.

### 5. Validation
The system checks:
- Duplicate registration numbers
- Marks between 0 and 100

---

## 🏗️ System Architecture

```text
                USER
                  │
                  ▼
          ┌───────────────┐
          │  C FRONTEND   │
          │   main.c      │
          └───────┬───────┘
                  │
                  ▼
          ┌───────────────┐
          │ PYTHON BACKEND│
          │  backend.py   │
          └───────┬───────┘
                  │
                  ▼
          ┌───────────────┐
          │ JSON STORAGE  │
          │students.json  │
          └───────────────┘