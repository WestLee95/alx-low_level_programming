#include "main.h"

/**
* convert_day - converts day of month to day of year, accounting
* for leap year
* @month: month in number format
* @day: day of month
* @year: year
* Return: day of year
*/

int convert_day(int month, int day, int year)
{
	int leap = 0;


	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		leap = 1;
	}


    switch (month)
    {
        case 2:
            day = 31 + leap + day;
            break;
        case 3:
            day = 59 + leap + day;
            break;
        case 4:
            day = 90 + leap + day;
            break;
        case 5:
            day = 120 + leap + day;
            break;
        case 6:
            day = 151 + leap + day;
            break;
        case 7:
            day = 181 + leap + day;
            break;
        case 8:
            day = 212 + leap + day;
            break;
        case 9:
            day = 243 + leap + day;
            break;
        case 10:
            day = 273 + leap + day;
            break;
        case 11:
            day = 304 + leap + day;
            break;
        case 12:
            day = 334 + leap + day;
            break;
        default:
            break;
    }
    return (day);
}
