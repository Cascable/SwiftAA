//
//  KPCAAAberration.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 04/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "PlatformHelpers.h"
#include "KPCAA2DCoordinate.h"
#include "KPCAA3DCoordinate.h"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// 3D
KPCAA3DCoordinateComponents KPCAAAberration_EarthVelocity(double JD, bool highPrecision);

// 2D
KPCAA2DCoordinateComponents KPCAAAberration_EquatorialAberration(double Alpha, double Delta, double JD, bool highPrecision);
KPCAA2DCoordinateComponents KPCAAAberration_EclipticAberration(double Lambda, double Beta, double JD, bool highPrecision);

#if __cplusplus
}
#endif
