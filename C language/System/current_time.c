#include <stdio.h>
#include <time.h>

void main() {
    // Declare a variable of type time_t
    time_t current_time;

    // Get the current time from the system
    current_time = time(NULL);

    // Check if the time is valid
    if (current_time == -1) {
        printf("Failed to get the current time.\n");
    }

    // Convert the time to a string using ctime function
    char *time_string = ctime(&current_time);

    // Check if the conversion is successful
    if (time_string == NULL) {
        printf("Failed to convert the time to a string.\n");       
    }

    // Print the date and time string
    printf("The current date and time is: %s\n", time_string);
}
