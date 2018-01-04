// It could not find `iostream.h` it was standarised to `iostream`.
// You could use `locate` to search for liblaries in system. ex: `locate iostream`.
#include <iostream>
#include <unistd.h>

using namespace std;

main()
{
    cout << "Czesc Ania!" << endl;
    cout.flush();
    pause();

    return 0;
}

//to build the project press Ctrl + Shift + B and select build task.
//to build and run press f5.
