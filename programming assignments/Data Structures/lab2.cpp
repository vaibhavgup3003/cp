// // 1
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//     int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int idate, imonth, iyear;
//     cout << "Enter the initial year in DD MM YYYY format \n";
//     cin >> idate >> imonth >> iyear;
//     int fdate, fmonth, fyear;
//     cout << "Enter the final date in DD MM YYYY format \n";
//     cin >> fdate >> fmonth >> fyear;
//     int year,month,days;
//     if((fyear>=iyear)&&(fmonth>=imonth)&&(fdate>=idate)){
//         year =fyear - iyear;
//         month = fmonth - imonth;
//         days = fdate - idate; 
//     }
//     else if((fyear>iyear)&&(fmonth>imonth)&&(fdate<idate)){
//         year =fyear - iyear;
//         month = fmonth - imonth - 1;
//         days = months[fmonth - 1] + fdate - idate; 
//     }
//     else if((fyear>iyear)&&(fmonth<imonth)&&(fdate<idate)){
//         year =fyear - iyear-1;
//         month = 12 + fmonth - imonth - 1;
//         days = months[fmonth - 1] + fdate - idate; 
//     }
//     else if((fyear>iyear)&&(fmonth<imonth)&&(fdate>idate)){
//         year =fyear - iyear-1;
//         month = 12 + fmonth - imonth;
//         days = fdate - idate; 
//     }
//     cout <<"Difference between the two dates is: "<< year << " Years, " << month << " Months, " << days << " Days \n";
//     } 
// }

// //2
// #include <bits/stdc++.h>
// using namespace std;
// int dayofweek(int d, int m, int y)
// {
//     static int t[] = { 0, 3, 2, 5, 0, 3,
//                        5, 1, 4, 6, 2, 4 };
//     y -= m < 3;
//     return ( y + y / 4 - y / 100 +
//              y / 400 + t[m - 1] + d) % 7;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//     int d, m, y;
//     cout << "Enter the date in DD MM YYYY format:\n";
//     cin >> d >> m >>y;
//     int day = dayofweek(d, m, y);
//     switch(day)
//     {
//         case 1:
//         cout << "Monday\n";
//         break;
//         case 2:
//         cout << "Tuesday\n";
//         break;
//         case 3:
//         cout << "Wednesday\n";
//         break;
//         case 4:
//         cout << "Thrusday\n";
//         break;
//         case 5:
//         cout << "Friday\n";
//         break;
//         case 6:
//         cout << "Saturday\n";
//         break;
//         case 7:
//         cout << "Sunday\n";
//         break;
//     }
//     }
//     return 0;
// }

// //3
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//      long long int sec;
//      cin >> sec;
//      int days, hours, min;
//      min = sec/60;
//      hours = min/60;
//      days = hours/24;
//      cout << "There are " << min << " minutes in " << sec<< " seconds \n";
//      cout << "There are " << hours << " hours in " << sec<< " seconds \n";
//      cout << "There are " << days << " days in " << sec << " seconds \n";
//     }
// }

// //4
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//      long long int days;
//      cin >> days;
//      int years, month;
//      month = days/30;
//      years = month/12;
//      cout << "There are " << month << " months in " << days << " days  \n";
//      cout << "There are " << years << " years in " << days << " days \n";
//     }
// }

// // 5
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//     int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//     int bdate, bmonth, byear;
//     cout << "Enter your DOB in DD MM YYYY format \n";
//     cin >> bdate >> bmonth >> byear;
//     int cdate, cmonth, cyear;
//     cout << "Enter the current date in DD MM YYYY format \n";
//     cin >> cdate >> cmonth >> cyear;
//     int year,month,days;
//     if((cyear>=byear)&&(cmonth>=bmonth)&&(cdate>=bdate)){
//         year =cyear - byear;
//         month = cmonth - bmonth;
//         days = cdate - bdate; 
//     }
//     else if((cyear>byear)&&(cmonth>bmonth)&&(cdate<bdate)){
//         year =cyear - byear;
//         month = cmonth - bmonth - 1;
//         days = months[cmonth - 1] + cdate - bdate; 
//     }
//     else if((cyear>byear)&&(cmonth<bmonth)&&(cdate<bdate)){
//         year =cyear - byear-1;
//         month = 12 + cmonth - bmonth - 1;
//         days = months[cmonth - 1] + cdate - bdate; 
//     }
//     else if((cyear>byear)&&(cmonth<bmonth)&&(cdate>bdate)){
//         year =cyear - byear-1;
//         month = 12 + cmonth - bmonth;
//         days = cdate - bdate; 
//     }
//     cout << year << " years " << month << " month " << days << " days \n";
//     }
    
// }

//6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Enter the year in YYYY format \n";
        int year;
        cin >> year;
        if(year%100 == 0 && year%400!=0)
        {
            cout << "Entered year is not a leap year \n";
        }
        else if(year%4==0)
        {
            cout << "Entered year is a leap year \n";
        }

    }
    
}