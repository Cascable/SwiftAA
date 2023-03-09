//
//  KPCAADate.h
//  SwiftAA
//
//  Created by Cédric Foellmi on 04/07/15.
//  Licensed under the MIT License (see LICENSE file)
//

#import "PlatformHelpers.h"

typedef struct KPCAACalendarDate {
    long Year;
    long Month;
    long Day;
} KPCAACalendarDate;


typedef NS_ENUM(NSUInteger, DAY_OF_WEEK) {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

#ifdef __cplusplus
extern "C" {
#endif

double KPCAADate_DateToJulianDay(long year, long month, long day, BOOL useGregorianCalendar);
BOOL KPCAADate_IsLeapForYear(long year, BOOL useGregorianCalendar);
void KPCAADate_DayOfYearToDayAndMonth(long dayOfYear, BOOL leapYear, long * dayOfMonth, long * month);
KPCAACalendarDate KPCAADate_JulianToGregorian(long year, long month, long day);
KPCAACalendarDate KPCAADate_GregorianToJulian(long year, long month, long day);

typedef void * KPCAADateHandle;

KPCAADateHandle KPCAADate_CreateWithDate(long year, long month, double day, BOOL useGregorianCalendar);
KPCAADateHandle KPCAADate_CreateWithDateTime(long year, long month, double day, double hour, double minute, double second, BOOL useGregorianCalendar);
KPCAADateHandle KPCAADate_CreateWithJulianDay(double julianDay, BOOL useGregorianCalendar);
void KPCAADate_Destroy(KPCAADateHandle date);

double KPCAADate_GetJulian(KPCAADateHandle date);
long KPCAADate_GetDay(KPCAADateHandle date);
long KPCAADate_GetMonth(KPCAADateHandle date);
long KPCAADate_GetYear(KPCAADateHandle date);
long KPCAADate_GetHour(KPCAADateHandle date);
long KPCAADate_GetMinute(KPCAADateHandle date);
double KPCAADate_GetSecond(KPCAADateHandle date);

void KPCAADate_SetDateTime(KPCAADateHandle date, long year, long month, double day, double hour, double minute, double second, BOOL useGregorianCalendar);
void KPCAADate_SetJulianDay(KPCAADateHandle date, double julianDay, BOOL useGregorianCalendar);
void KPCAADate_SetIsInGregorianCalendar(KPCAADateHandle date, BOOL useGregorianCalendar);
void KPCAADate_GetDateTime(KPCAADateHandle date, long * year, long * month, long * day, long * hour, long * minute, double * second);

DAY_OF_WEEK KPCAADate_GetDayOfWeek(KPCAADateHandle date);
double KPCAADate_GetDayOfYear(KPCAADateHandle date);
long KPCAADate_GetDaysInMonth(KPCAADateHandle date);
long KPCAADate_GetDaysInYear(KPCAADateHandle date);
BOOL KPCAADate_GetLeap(KPCAADateHandle date);
BOOL KPCAADate_GetIsInGregorianCalendar(KPCAADateHandle date);
double KPCAADate_GetFractionalYear(KPCAADateHandle date);

#if __cplusplus
}
#endif
