#include <stdio.h>
#include <string.h>

// Define the struct
typedef struct {
    char name[51];          // 50 chars + 1 for null terminator
    char id[13];            // 12 chars + 1 for null terminator
    char address[66];       // 65 chars + 1 for null terminator
    char phoneNumber[12];   // 11 chars + 1 for null terminator
    char bankCode[4];       // 3 chars + 1 for null terminator
    char agency[6];         // 5 chars + 1 for null terminator
    char account[9];        // 8 chars + 1 for null terminator
    float value;
} UserData;

int main() {
    // Your raw data as a string
    const char* raw_data[] = {
        "PAULO EUSTAQUIO DUARTE PINTO                       201210320811 Rua do Catete 231 apto 1002, Catete, CEP 20123-100                01129257869 001 01246 032123-7 120.00",
        "GUILHERME LUCIO ABELHA MOTA                        201210049811 Rua Men de Sa 123 Sobrado, Centro, CEP 20001-104                  45896523688 033 12456 035698-7 102.45",
        "ALEXANDRE ROJAS                                    201210321711 Rua do Riachuelo 12 apto 307                                      45789614789 027 12458 032578-9 89.95",
        "MARIA ALICE SILVERIO DE BRITO                      201210047011 Rua do Russel 123 apto 209, Gloria, CEP 20112-192                 45678912364 011 12378 011457-8 115.77",
        "ROSA MARIA ESTEVES DA COSTA                        201210321311 Rua Sao Francisco Xavier 255, Maracana, CEP 20456-712             12345858778 001 23456 078459-8 89.85",
        "LEANDRO AUGUSTO JUSTEN MARZULO                     201210322411 Rua Nossa Senhora de Copacabana 123, Apto 1005, CEP 20145-987     47896461234 024 45758 124598-8 107.85",
        "ALEXANDRE SZTAJNBERG                               201210046711 Av Vieira Souto 109, 401, Ipanema, CEP 20445-777                  45567897464 004 67861 214587-4 175.98",
        "MARIA CLICIA STELLING DE CASTRO                    201210046511 Rua Conde de Bonfin 1033, 203 Tijuca, CEP 20102-001               78721425451 033 14898 125878-9 95.57",
        "ALEXANDRE DA COSTA SENA                            201210049911 Rua Machado de Assis 134, 201, Largo do Machado, CEP 20989-120    45678912364 007 52627 471239-9 97.54",
        "VERA MARIA BENJAMIM WERNECK                        201210047711 Rua das Laranjeiras 189, 709, Laranjeiras, CEP 23644-478          65432198734 456 14583 189456-8 134.89"
    };

    int num_records = sizeof(raw_data) / sizeof(raw_data[0]);
    UserData users[num_records];

    int current_offset;
    char buffer[100]; // Temporary buffer for parsing string segments

    for (int i = 0; i < num_records; i++) {
        current_offset = 0;

        // Parse Name (50 characters)
        strncpy(users[i].name, raw_data[i] + current_offset, 50);
        users[i].name[50] = '\0'; // Null-terminate
        current_offset += 50;

        // Parse ID (12 characters)
        strncpy(users[i].id, raw_data[i] + current_offset, 12);
        users[i].id[12] = '\0';
        current_offset += 12;

        // Parse Address (65 characters)
        strncpy(users[i].address, raw_data[i] + current_offset, 65);
        users[i].address[65] = '\0';
        current_offset += 65;

        // Parse Phone Number (11 characters)
        strncpy(users[i].phoneNumber, raw_data[i] + current_offset, 11);
        users[i].phoneNumber[11] = '\0';
        current_offset += 11;

        // Parse Bank Code (3 characters)
        strncpy(users[i].bankCode, raw_data[i] + current_offset, 3);
        users[i].bankCode[3] = '\0';
        current_offset += 3;

        // Parse Agency (5 characters)
        strncpy(users[i].agency, raw_data[i] + current_offset, 5);
        users[i].agency[5] = '\0';
        current_offset += 5;

        // Parse Account (8 characters)
        strncpy(users[i].account, raw_data[i] + current_offset, 8);
        users[i].account[8] = '\0';
        current_offset += 8;

    }

    // Example of accessing and printing parsed data
    printf("--- Parsed Data ---\n");
    for (int i = 0; i < num_records; i++) {
        printf("Record %d:\n", i + 1);
        printf("  Name: %s\n", users[i].name);
        printf("  ID: %s\n", users[i].id);
        printf("  Address: %s\n", users[i].address);
        printf("  Phone: %s\n", users[i].phoneNumber);
        printf("  Bank Code: %s\n", users[i].bankCode);
        printf("  Agency: %s\n", users[i].agency);
        printf("  Account: %s\n", users[i].account);
        printf("  Value: %.2f\n", users[i].value);
        printf("---\n");
    }

    return 0;
}