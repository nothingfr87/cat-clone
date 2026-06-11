#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *buffer = malloc(8192);
  FILE *file_ptr = fopen(argv[1], "r");
  if (file_ptr == NULL) {
    perror("Error Occured When Trying to open a file.\n");
    return 1;
  }
  while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
    printf("%s", buffer);
  }
  free(buffer);
  fclose(file_ptr);
  return 0;
}
