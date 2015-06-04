#include "profilo.h"

Profilo::Profilo(){
}

Profilo::Profilo(const DatiAnagrafici & d, const TitoliStudio & s, const CompetenzeLavorative & c)
    :datiPersonali(d),studi(s),curriculum(c){}

DatiAnagrafici Profilo::getDati() const {
    return datiPersonali;
}

TitoliStudio Profilo::getStudi() const{
    return studi;
}

CompetenzeLavorative Profilo::getLavori() const{
    return curriculum;
}

