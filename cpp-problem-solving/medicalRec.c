#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEDICAL_RECORDS 100

struct MedicalRecord {
    char date[50];
    char type[50];
    char result[50];
};

struct Patient {
    int id;
    char name[50];
    struct MedicalRecord *records;
    int num_records;
};

int main() {
    int num_patients;
    scanf("%d", &num_patients);

    // Create an array of Patient structs
    struct Patient patients[num_patients];

    // Get information for each patient from the user
    for (int i = 0; i < num_patients; i++) {
        
        scanf("%d", &patients[i].id);
        scanf("%s", patients[i].name);

        // Get medical record information for the patient
        int num_records;
        scanf("%d", &num_records);
        patients[i].num_records = num_records;

        // Dynamically allocate memory for the medical records array
        patients[i].records = (struct MedicalRecord*)malloc(num_records * sizeof(struct MedicalRecord));

        for (int j = 0; j < num_records; j++) {
            //printf("\nMedical record %d for patient %d:\n", j+1, i+1);
            //printf("Enter record date: ");
            scanf("%s", patients[i].records[j].date);
            //printf("Enter record type: ");
            scanf("%s", patients[i].records[j].type);
            //printf("Enter record result: ");
            scanf("%s", patients[i].records[j].result);
        }
    }

    // Print out information for each patient
    for (int i = 0; i < num_patients; i++) {
        printf("Patient %d:\n", i+1);
        printf("ID: %d\n", patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Medical records:\n");
        for (int j = 0; j < patients[i].num_records; j++) {
            printf("\tRecord %d: %s, %s, %s\n", j+1, patients[i].records[j].date,
                   patients[i].records[j].type, patients[i].records[j].result);
        }
    }

    // Free dynamically allocated memory
    for (int i = 0; i < num_patients; i++) {
        free(patients[i].records);
    }

    return 0;
}

