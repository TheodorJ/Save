#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  execve("git add -A");
  char A[200] = "git commit -m ";
  for(int i = 1; i < argc; i++) {
    strcat(A, argv[i]);
    strcat(A, " ");
  }
  //strcat(A, "\"");
  execve(A);
  execve("git push -u origin master");
  return 0;
}
