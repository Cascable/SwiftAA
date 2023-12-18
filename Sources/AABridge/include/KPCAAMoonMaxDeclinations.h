//
//  KPCAAMoonMaxDeclinations.h
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

double KPCAAMoonMaxDeclinations_K(double Year);
double KPCAAMoonMaxDeclinations_MeanGreatestDeclination(double k, bool northerly);
double KPCAAMoonMaxDeclinations_MeanGreatestDeclinationValue(double k);
double KPCAAMoonMaxDeclinations_TrueGreatestDeclination(double k, bool northerly);
double KPCAAMoonMaxDeclinations_TrueGreatestDeclinationValue(double k, bool northerly);

#if __cplusplus
}
#endif
