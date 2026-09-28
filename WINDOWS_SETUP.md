# Student Management System - Windows Setup (Beginner Guide)

## Requirements

Install these on Windows:

1. Python 3
2. MSYS2 (for GCC)
3. 7-Zip (only if Windows cannot extract the ZIP)

## 1. Extract the project

Extract `StudentManagement.zip` using Windows' built-in ZIP extractor or 7-Zip.

You should get a folder named:

`StudentManagement`

Inside it you should see:

- `frontend`
- `backend`
- `data`
- `README.md`
- `WINDOWS_SETUP.md`

## 2. Check Python

Open Command Prompt and run:

`python --version`

If a Python 3.x version appears, Python is ready.

## 3. Install GCC with MSYS2

Download MSYS2 from:

https://www.msys2.org/

Install it using the default folder (`C:\msys64`).

Open **MSYS2 UCRT64** from the Windows Start menu.

Inside MSYS2 UCRT64, run:

`pacman -S mingw-w64-ucrt-x86_64-gcc`

Press `Y` if asked to continue.

Wait until the installation finishes.

Then verify:

`gcc --version`

## 4. Compile the C frontend

Open the `StudentManagement` folder in File Explorer.

Click the File Explorer address bar, type:

`cmd`

and press Enter.

A Command Prompt should open in the project folder.

If MSYS2 was installed in the default location, compile with:

`C:\msys64\ucrt64\bin\gcc.exe frontend\main.c -o student_app.exe`

If the command finishes without an error, the file `student_app.exe` will appear in the project folder.

## 5. Run the project

In the same Command Prompt, run:

`student_app.exe`

## 6. Use the menu

1. Add Student
2. View Students
3. Search Student
4. Delete Student
5. Exit

Student information includes:

- Name
- Registration Number
- Branch
- Marks

Marks must be between 0 and 100.

Registration numbers must be unique.

## Important

Do not try to run a Mac executable on Windows. Windows creates its own `student_app.exe` by compiling `frontend\main.c`.

The Windows version of the C frontend uses the Windows `python` command automatically.

## Project Architecture

User
  ↓
C Frontend
  ↓
Python Backend
  ↓
students.json

## If something goes wrong

### `'python' is not recognized`

Python is not available from Command Prompt. Install Python from:

https://www.python.org/downloads/windows/

Then close Command Prompt, open a new Command Prompt, and run:

`python --version`

### `'gcc.exe' is not recognized`

Make sure MSYS2 GCC installation completed. The compile command in this guide uses the full GCC path:

`C:\msys64\ucrt64\bin\gcc.exe`

If MSYS2 was installed somewhere else, replace `C:\msys64` with its actual installation folder.

### `student_app.exe` does not start

Make sure Command Prompt is open inside the `StudentManagement` folder.

### Do not randomly delete project files

If an error appears, take a screenshot and send it to the project owner before deleting or changing files.
