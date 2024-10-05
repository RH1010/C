#include <stdio.h>
struct Course {
    int credit_hours;
    float grade_points;
};

int main() {
    int num_subjects;
    printf("Enter the number of courses: ");
    scanf("%d", &num_subjects);

    struct Course courses[num_subjects];
    float total_credit_hours = 0.0;
    float total_grade_points = 0.0;

    for (int i = 0; i < num_subjects; i++) {
        printf("Enter credit hours for course %d: ", i + 1);
        scanf("%d", &courses[i].credit_hours);
        printf("Enter grade points for course %d (on a 4.0 scale): ", i + 1);
        scanf("%f", &courses[i].grade_points);

        total_credit_hours += courses[i].credit_hours;
        total_grade_points += courses[i].credit_hours * courses[i].grade_points;
    }

    float cgpa = total_grade_points / total_credit_hours;

    printf("CGPA: %.2f\n", cgpa);

    return 0;
}

