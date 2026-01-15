#include <stdio.h>

#define BUFFER_SIZE 5

// --- Global Variables to manage the buffer state ---

int buffer[BUFFER_SIZE];
int head = 0;  // The index where we will write the NEXT value
int count = 0; // How many items are currently valid in the buffer
int is_full = 0; // Flag to track if we have filled the buffer at least once

// --- Function Prototypes ---
void insert_sample(int value);
void print_log();

int main() {
    int input;

    printf("=== Circular Data Logger (Size: %d) ===\n", BUFFER_SIZE);
    printf("Enter simulated sensor values.\n");
    printf("Enter -1 to stop logging and see the final log.\n\n");

    while(1) {
        printf("Enter sensor value: ");
        scanf("%d", &input);

        if(input == -1) {
            break; // Exit the loop
        }

        insert_sample(input);
    }

    printf("\n--- Final Data Log (Oldest -> Newest) ---\n");
    print_log();

    return 0;
}

// Function to insert a new value
void insert_sample(int value) {
    // 1. Write the value at the current head position
    buffer[head] = value;

    // 2. Move head forward
    // The '%' (Modulo) operator makes it "Circular".
    // If head becomes 5, (5 % 5) becomes 0. It wraps back to the start!
    head = (head + 1) % BUFFER_SIZE;

    // 3. Track if buffer is full
    if(count < BUFFER_SIZE) {
        count++;
    } else {
        is_full = 1; // We are now overwriting old data
    }
}

// Function to print from Oldest to Newest
void print_log() {
    int i, current_index;

    printf("Log content: [ ");

    // Strategy:
    // If not full, we just print from 0 to count.
    // If full, the "Oldest" data is actually at the 'head' (because head just overwrote the previous oldest).

    int start_index;

    if (is_full == 0) {
        start_index = 0;
    } else {
        start_index = head;
    }

    for (i = 0; i < count; i++) {
        // Calculate the actual index using modulo
        // This effectively "unrolls" the circle into a line
        current_index = (start_index + i) % BUFFER_SIZE;
        printf("%d ", buffer[current_index]);
    }

    printf("]\n");
}
