#include <iostream>
#include <ctime>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Age {
    int years;
    int months;
    int days;
};

bool isLeapYear(int year) {
    
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int daysInMonth(int month, int year) {
    
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && isLeapYear(year)) {
        return 29;
    } else {
        return daysInMonth[month];
    }
}

Age calculateAge(const Date& birthDate) {
    
    time_t now = time(0);
    tm * localTime = localtime(&now);
    int currentYear = localTime->tm_year + 1900;
    int currentMonth = localTime->tm_mon + 1;  
    int currentDay = localTime->tm_mday;
    
    Age age;
    age.years = currentYear - birthDate.year;
    age.months = currentMonth - birthDate.month;
    age.days = currentDay - birthDate.day;
   
    if (age.months < 0 || (age.months == 0 && age.days < 0)) {
        age.years--;
        age.months += 12;
    }

    if (age.days < 0) {
        
        int daysInPreviousMonth = daysInMonth(currentMonth - 1, currentYear);
        age.days += daysInPreviousMonth;
        age.months--;
    }

    return age;
}

int main() {
    Date birthDate;

    cout << "Enter your birth date (day month year): ";
    cin >> birthDate.day >> birthDate.month >> birthDate.year;

    if (birthDate.year > 1900 && birthDate.month >= 1 && birthDate.month <= 12 && birthDate.day >= 1 && birthDate.day <= daysInMonth(birthDate.month, birthDate.year)) {
        
        Age age = calculateAge(birthDate);

        cout << "Your age is: " << age.years << " years, " << age.months << " months, and " << age.days << " days." << endl;
    } else {
        cout << "Invalid input. Please enter a valid birth date." << endl;
    }

    return 0;
}
