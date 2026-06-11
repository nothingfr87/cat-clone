#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char output[100];
  FILE *file_ptr = fopen(argv[1], "r");
  if (file_ptr == NULL) {
    printf(
        "Error Occured When Trying to open a file, Maybe file doesn't exist");
    return 1;
  }
  if (fgets(output, 100, file_ptr) != NULL) {
    puts(output);
  }
  fclose(file_ptr);
  return 0;
}
