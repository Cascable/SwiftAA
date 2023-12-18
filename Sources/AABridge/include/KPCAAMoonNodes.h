//
//  KPCAAMoonNodes.h
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

double KPCAAMoonNodes_K(double Year);
double KPCAAMoonNodes_PassageThroNode(double k);

#if __cplusplus
}
#endif
