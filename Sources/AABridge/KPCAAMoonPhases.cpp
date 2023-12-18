//
//  KPCAAMoonPhases.m
//  SwiftAA
//
//  Created by Cédric Foellmi on 09/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "KPCAAMoonPhases.h"
#include "AAMoonPhases.h"


double KPCAAMoonPhases_K(double Year)
{
    return CAAMoonPhases::K(Year);
}

double KPCAAMoonPhases_MeanPhase(double k)
{
    return CAAMoonPhases::MeanPhase(k);
}

double KPCAAMoonPhases_TruePhase(double k)
{
    return CAAMoonPhases::TruePhase(k);
}

