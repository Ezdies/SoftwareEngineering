#include "TSchool.h"

int main(){
    TSchool *school = new TSchool("UMCS");
    school->setData("Maks Dudziak", 24);
    school->printData();

    delete school;
    return 0;
}