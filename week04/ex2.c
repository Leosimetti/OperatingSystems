#include <stdlib.h>
#include <unistd.h> 


int main(){
    
    
    for ( int i = 0; i < 5; i++ ){
        fork();
        sleep(5);
    }

    
    return 0;
}

\*


├─kded5─┬─konsole─┬─fish───sh───a.out─┬─a.out─┬─a.out─┬─a.out─┬─a.out───a.out
        │          │       │         │                   │       │       │       └─a.out
        │          │       │         │                   │       │       ├─a.out───a.out
        │          │       │         │                   │       │       └─a.out
        │          │       │         │                   │       ├─a.out─┬─a.out───a.out
        │          │       │         │                   │       │       └─a.out
        │          │       │         │                   │       ├─a.out───a.out
        │          │       │         │                   │       └─a.out
        │          │       │         │                   ├─a.out─┬─a.out─┬─a.out───a.out
        │          │       │         │                   │       │       └─a.out
        │          │       │         │                   │       ├─a.out───a.out
        │          │       │         │                   │       └─a.out
        │          │       │         │                   ├─a.out─┬─a.out───a.out
        │          │       │         │                   │       └─a.out
        │          │       │         │                   ├─a.out───a.out
        │          │       │         │                   └─a.out


*/
