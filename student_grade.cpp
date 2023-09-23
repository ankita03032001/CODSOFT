#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;
    string name;
    double grade;
    char moreStudents;

    cout << "STUDENT GRADING SYSTEM" << endl;

    do {
        cout << "Enter student name: ";
        getline(cin,name);
        studentNames.push_back(name);

        cout << "Enter student grade: ";
        cin >> grade;
        studentGrades.push_back(grade);

        cout << "Do you want to enter more students? (Y/N): ";
        cin >> moreStudents;
        cin.ignore();
    } while (moreStudents == 'Y' || moreStudents == 'y');

    
    double sum = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (double g : studentGrades) {
        sum += g;
        if (g > highestGrade) {
            highestGrade = g;
        }
        if (g < lowestGrade) {
            lowestGrade = g;
        }
    }

    double averageGrade = sum / studentGrades.size();

   
    cout << "\nStudent Grades Summary:" << endl;
    cout << "-------------------------------------" << endl;

    for (size_t i = 0; i < studentNames.size(); ++i) {
        cout << "Student: " << studentNames[i] << ", Grade: " << studentGrades[i] << endl;
    }
    cout << "-------------------------------------" << endl;

    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
