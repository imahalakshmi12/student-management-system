#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define PYTHON_CMD "python"
#else
#define PYTHON_CMD "python3"
#endif

int main() {
    int choice;
    char command[500];

    while (1) {
        printf("\n================================\n");
        printf("     STUDENT MANAGEMENT SYSTEM\n");
        printf("================================\n");

        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            char name[100];
            char reg_no[20];
            char branch[50];
            int marks;

            printf("\nEnter Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Registration Number: ");
            scanf("%s", reg_no);

            printf("Enter Branch: ");
            scanf("%s", branch);

            do {
                printf("Enter Marks (0-100): ");
                scanf("%d", &marks);

                if (marks < 0 || marks > 100) {
                    printf("Invalid marks! Please enter between 0 and 100.\n");
                }

            } while (marks < 0 || marks > 100);

            snprintf(
                command,
                sizeof(command),
                PYTHON_CMD " backend/backend.py add \"%s\" \"%s\" \"%s\" %d",
                name,
                reg_no,
                branch,
                marks
            );

            system(command);
        }

        else if (choice == 2) {
            snprintf(command, sizeof(command), PYTHON_CMD " backend/backend.py view");
            system(command);
        }

        else if (choice == 3) {

            char reg_no[20];

            printf("\nEnter Registration Number: ");
            scanf("%s", reg_no);

            snprintf(
                command,
                sizeof(command),
                PYTHON_CMD " backend/backend.py search \"%s\"",
                reg_no
            );

            system(command);
        }

        else if (choice == 4) {

            char reg_no[20];

            printf("\nEnter Registration Number to delete: ");
            scanf("%s", reg_no);

            snprintf(
                command,
                sizeof(command),
                PYTHON_CMD " backend/backend.py delete \"%s\"",
                reg_no
            );

            system(command);
        }

        else if (choice == 5) {

            printf("\nThank you for using Student Management System!\n");
            break;
        }

        else {
            printf("\nInvalid choice. Please select 1-5.\n");
        }
    }

    return 0;
}
