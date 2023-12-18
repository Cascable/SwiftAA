//
//  KPCAAEquationOfTime.m
//  SwiftAA
//
//  Created by Cédric Foellmi on 06/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "KPCAAEquationOfTime.h"
#include "AAEquationOfTime.h"

double KPCAAEquationOfTime_Calculate(double JD, bool highPrecision)
{
    return CAAEquationOfTime::Calculate(JD, highPrecision);
}
