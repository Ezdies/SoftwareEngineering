#include "TSchool.h"

int main(){
    TSchool* school = new TSchool("Moja szkola");
    TPupil* pupil1 = new TPupil;
    TPupil* pupil2 = new TPupil;
    TPupil* pupil3 = new TPupil;

    school->attach(pupil1);
    school->attach(pupil2);
    school->attach(pupil3);

    school->setData(0, "Wojtek", 18);
    school->setData(1, "Monika", 15);
    school->setData(2, "Kamil", 17);

    school->printData(1);

    school->detach();

    school->detachAll();

    delete school;

    return 0;
}