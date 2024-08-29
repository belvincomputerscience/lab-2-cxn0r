#include <iostream>

using namespace std;

// This code will calculate the average of 4 grades given to it.

int main()
{
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    float avg_grade;  // Float will make this a decimal, I found this out by watching a YouTube video.
    
    cout << "What's your first grade?" << endl; // Repeating this 4 times will give you all 4 grades to calculate the average.
    cin >> grade1;
    
    cout << "What's your second grade?" << endl;
    cin >> grade2;
    
    cout << "What's your third grade?" << endl;
    cin >> grade3;
    
    cout << "What's your fourth grade?" << endl;
    cin >> grade4;
    
    avg_grade = (grade1 + grade2 + grade3 + grade4) / 4.0; // Using 4.0 to get a decimal.
    cout << "Your average grade is: " << avg_grade << endl; //

    return 0;
}