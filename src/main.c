#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char buffer[256];
  FILE *file_ptr = fopen(argv[1], "r");
  if (file_ptr == NULL) {
    printf(
        "Error Occured When Trying to open a file, Maybe file doesn't exist");
    return 1;
  }
  while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
    printf(" %s", buffer);
  }
  fclose(file_ptr);
  return 0;
}
