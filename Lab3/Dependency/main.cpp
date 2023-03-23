#include "ClassB.h"
int main(){
    ClassA classA;
    ClassB *classB;
    classB->funB(&classA);
    return 0;
}