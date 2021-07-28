/*1. Number of days(JavaScript only)
Given the number of the month, your task is to calculate the number of days present in the particular
month. 
    Note: - Consider non - leap year */

function daysInMonth(month) {
    let answer = "";
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        console.log("Number of days is 31");
        return;
    }
    else if (month == 2) {
        console.log("Number of days is 28");
        return;

    }
    else
        console.log("Number of days is 30");
    return;

}
let month = 4;
answer = function daysInMonth(month)
