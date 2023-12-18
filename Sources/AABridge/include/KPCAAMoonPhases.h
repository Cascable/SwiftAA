//
//  KPCAAMoonPhases.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 09/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "PlatformHelpers.h"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

double KPCAAMoonPhases_K(double Year);
double KPCAAMoonPhases_MeanPhase(double k);
double KPCAAMoonPhases_TruePhase(double k);

#if __cplusplus
}
#endif
