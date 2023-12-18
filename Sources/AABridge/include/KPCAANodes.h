//
//  KPCAANodes.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 09/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "PlatformHelpers.h"
#include "KPCAAElliptical.h"
#include "KPCAAParabolic.h"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct KPCAANodeObjectDetails {
    double t;
    double radius;
} KPCAANodeObjectDetails;

KPCAANodeObjectDetails KPCAANodes_PassageThroAscendingNodeForEllipticalElements(KPCAAEllipticalObjectElements *elements);
KPCAANodeObjectDetails KPCAANodes_PassageThroDescendingNodeForEllipticalElements(KPCAAEllipticalObjectElements *elements);

KPCAANodeObjectDetails KPCAANodes_PassageThroAscendingNodeForParabolicElements(KPCAAParabolicObjectElements *elements);
KPCAANodeObjectDetails KPCAANodes_PassageThroDescendingNodeForParabolicElements(KPCAAParabolicObjectElements *elements);

#if __cplusplus
}
#endif
