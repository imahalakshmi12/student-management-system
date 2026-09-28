import sys
import json

DATA_FILE = "data/students.json"


def load_students():
    with open(DATA_FILE, "r") as file:
        return json.load(file)


def save_students(students):
    with open(DATA_FILE, "w") as file:
        json.dump(students, file, indent=4)


def add_student(name, reg_no, branch, marks):
    students = load_students()

    for student in students:
        if student["reg_no"] == reg_no:
            print("Error: Registration number already exists!")
            return

    student = {
        "name": name,
        "reg_no": reg_no,
        "branch": branch,
        "marks": marks
    }

    students.append(student)
    save_students(students)

    print("Student added successfully!")


def view_students():
    students = load_students()

    if not students:
        print("No students found.")
        return

    print("\n------ Student List ------")

    for student in students:
        print(
            f"Reg No: {student['reg_no']} | "
            f"Name: {student['name']} | "
            f"Branch: {student['branch']} | "
            f"Marks: {student['marks']}"
        )


def search_student(reg_no):
    students = load_students()

    for student in students:
        if student["reg_no"] == reg_no:
            print(
                f"Found: {student['name']} | "
                f"{student['reg_no']} | "
                f"{student['branch']} | "
                f"{student['marks']}"
            )
            return

    print("Student not found.")


def delete_student(reg_no):
    students = load_students()

    for student in students:
        if student["reg_no"] == reg_no:
            students.remove(student)
            save_students(students)
            print("Student deleted successfully!")
            return

    print("Student not found.")


if len(sys.argv) > 1:

    command = sys.argv[1]

    if command == "add":
        add_student(
            sys.argv[2],
            sys.argv[3],
            sys.argv[4],
            int(sys.argv[5])
        )

    elif command == "view":
        view_students()

    elif command == "search":
        search_student(sys.argv[2])

    elif command == "delete":
        delete_student(sys.argv[2])

else:
    print("Python backend ready.")
