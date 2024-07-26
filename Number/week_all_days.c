#include <stdio.h>
#include <string.h>

void dayName(char name[]);

int main() {
    char day[100];
    printf("Enter day name: ");
    scanf("%s", day);

    dayName(day);

    return 0;
}

void dayName(char name[]) {
    if (strcmp(name, "Monday") == 0) {
        printf("Monday\nIt's a working day.\nThank you.");
    } else if (strcmp(name, "Tuesday") == 0) {
        printf("Tuesday\nIt's a working day.\nThank you.");
    } else if (strcmp(name, "Wednesday") == 0) {
        printf("Wednesday\nIt's a working day.\nThank you.");
    } else if (strcmp(name, "Thursday") == 0) {
        printf("Thursday\nIt's a working day.\nThank you.");
    } else if (strcmp(name, "Friday") == 0) {
        printf("Friday\nIt's an off day.\nThank you.");
    } else if (strcmp(name, "Saturday") == 0) {
        printf("Saturday\nIt's a working day.\nThank you.");
    } else if (strcmp(name, "Sunday") == 0) {
        printf("Sunday\nIt's a working day.\nThank you.");
    } else {
        printf("Enter a valid information.\nThank you so much.");
    }
}