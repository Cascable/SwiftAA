//
//  KPCAAMoonMaxDeclinations.m
//  SwiftAA
//
//  Created by Cédric Foellmi on 09/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#include "KPCAAMoonMaxDeclinations.h"
#include "AAMoonMaxDeclinations.h"

double KPCAAMoonMaxDeclinations_K(double Year)
{
    return CAAMoonMaxDeclinations::K(Year);
}

double KPCAAMoonMaxDeclinations_MeanGreatestDeclination(double k, bool northerly)
{
    return CAAMoonMaxDeclinations::MeanGreatestDeclination(k, (bool)northerly);
}

double KPCAAMoonMaxDeclinations_MeanGreatestDeclinationValue(double k)
{
    return CAAMoonMaxDeclinations::MeanGreatestDeclinationValue(k);
}

double KPCAAMoonMaxDeclinations_TrueGreatestDeclination(double k, bool northerly)
{
    return CAAMoonMaxDeclinations::TrueGreatestDeclination(k, northerly);
}

double KPCAAMoonMaxDeclinations_TrueGreatestDeclinationValue(double k, bool northerly)
{
    return CAAMoonMaxDeclinations::TrueGreatestDeclinationValue(k, (bool)northerly);
}

