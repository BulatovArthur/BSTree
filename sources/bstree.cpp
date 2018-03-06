#include <iostream>
#include "bstree.hpp"

using namespace std;
using namespace BSTree;

int main(int argc, char *argv[]) {
  int *array = new int[argc-1];
  for (int i = 1; i < argc; i++) array[i] = atoi(argv[i]);
  Tree *tr = new Tree;
  for (int i = 1; i < argc; i++) tr->Func(array[i]);
  delete[] array;
  delete tr;
  return 0;
}
