//
//  KPCAASun.h
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

double KPCAASun_GeometricEclipticLongitude(double JD, bool highPrecision);
double KPCAASun_GeometricEclipticLatitude(double JD, bool highPrecision);
double KPCAASun_GeometricEclipticLongitudeJ2000(double JD, bool highPrecision);
double KPCAASun_GeometricEclipticLatitudeJ2000(double JD, bool highPrecision);
double KPCAASun_GeometricFK5EclipticLongitude(double JD, bool highPrecision);
double KPCAASun_GeometricFK5EclipticLatitude(double JD, bool highPrecision);
double KPCAASun_ApparentEclipticLongitude(double JD, bool highPrecision);
double KPCAASun_ApparentEclipticLatitude(double JD, bool highPrecision);

KPCAA3DCoordinateComponents KPCAASun_EquatorialRectangularCoordinatesMeanEquinox(double JD, bool highPrecision);
KPCAA3DCoordinateComponents KPCAASun_EclipticRectangularCoordinatesJ2000(double JD, bool highPrecision);
KPCAA3DCoordinateComponents KPCAASun_EquatorialRectangularCoordinatesJ2000(double JD, bool highPrecision);
KPCAA3DCoordinateComponents KPCAASun_EquatorialRectangularCoordinatesB1950(double JD, bool highPrecision);
KPCAA3DCoordinateComponents KPCAASun_EquatorialRectangularCoordinatesAnyEquinox(double JD, double JDEquinox, bool highPrecision);

#if __cplusplus
}
#endif
