#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalGradePoints = 0;
    float totalCredits = 0;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade Point: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
