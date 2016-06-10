// All enum constants must be unique in their scope.
enum state  {working, failed};
enum result {failed, passed};
 
int main()  { return 0; }
// unique.c:2:14: error: redeclaration of enumerator ‘failed’
// unique.c:1:23: note: previous definition of ‘failed’ was here

