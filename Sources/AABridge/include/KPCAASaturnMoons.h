//
//  KPCAASaturnMoons.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 10/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "PlatformHelpers.h"
#include "KPCAA3DCoordinate.h"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct KPCAASaturnMoonDetails {
    KPCAA3DCoordinateComponents TrueRectangularCoordinateComponents;
    KPCAA3DCoordinateComponents ApparentRectangularCoordinateComponents;
    bool inTransit;
    bool inOccultation;
    bool inEclipse;
    bool inShadowTransit;
} KPCAASaturnMoonDetails;


typedef struct KPCAASaturnMoonsDetails {
    KPCAASaturnMoonDetails Satellite1;
    KPCAASaturnMoonDetails Satellite2;
    KPCAASaturnMoonDetails Satellite3;
    KPCAASaturnMoonDetails Satellite4;
    KPCAASaturnMoonDetails Satellite5;
    KPCAASaturnMoonDetails Satellite6;
    KPCAASaturnMoonDetails Satellite7;
    KPCAASaturnMoonDetails Satellite8;
} KPCAASaturnMoonsDetails;

KPCAASaturnMoonsDetails KPCAASaturnMoonsDetails_Calculate(double JD, bool highPrecision);

#if __cplusplus
}
#endif
