
#include <stdio.h>
//enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};

int main()
{
    enum day d = thursday;
    printf("The day number stored in d is %d\n", d);
    printf("%d %d %d %d %d %d %d\n", sunday, monday, tuesday,
                wednesday, thursday, friday, saturday);
    return 0;
}

// output:
// The day number stored in d is 10
// 1 2 5 6 10 11 12

