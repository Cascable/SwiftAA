//
//  KPCAAGalileanMoons.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 08/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#import "PlatformHelpers.h"
#import "KPCAA3DCoordinate.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct KPCAAGalileanMoonDetails {
    double MeanLongitude;
    double TrueLongitude;
    double TropicalLongitude;
    double EquatorialLatitude;
    double r;
    KPCAA3DCoordinateComponents TrueRectangularCoordinateComponents;
    KPCAA3DCoordinateComponents ApparentRectangularCoordinateComponents;
    bool inTransit;
    bool inOccultation;
    bool inEclipse;
    bool inShadowTransit;
} KPCAAGalileanMoonDetails;

typedef struct KPCAAGalileanMoonsDetails {
    KPCAAGalileanMoonDetails Satellite1;
    KPCAAGalileanMoonDetails Satellite2;
    KPCAAGalileanMoonDetails Satellite3;
    KPCAAGalileanMoonDetails Satellite4;
} KPCAAGalileanMoonsDetails;

KPCAAGalileanMoonsDetails KPCAAGalileanMoons_CalculateDetails(double JD, bool highPrecision);

#if __cplusplus
}
#endif
