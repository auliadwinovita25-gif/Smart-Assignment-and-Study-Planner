
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

// ==========================================
// GLOBAL VARIABLES & STRUCT
// ==========================================

const int MAX_TASKS = 100;

struct Task {
    int id;
    string course;
    string name;
    int daysLeft;
    double hours;
    string priority;
};

Task tasks[MAX_TASKS];
int taskCount = 0;

// ==========================================
// FUNCTION DECLARATIONS
// ==========================================

// Member 2: Data & Core Logic
string determinePriority(int daysLeft);
void addTask();
void displayTasks();

// Member 3: Function & Recursion
void calculateSummary();
void countPriority();
double recursiveTotal(int n);
void displayRecursiveTotal();

// Member 4: Sorting & Searching
void sortTasks();
void searchTasks();

// Challenge: Study Planner
void studyPlanner();


// ==========================================
// MAIN PROGRAM - COORDINATOR
// ==========================================

int main() {
    int choice = -1;

    do {
        cout << "\n====================================\n";
        cout << " SMART ASSIGNMENT & STUDY PLANNER\n";
        cout << "====================================\n";
        cout << "1. Add Task\n";
        cout << "2. Display All Tasks\n";
        cout << "3. Study Time Statistics\n";
        cout << "4. Priority Statistics\n";
        cout << "5. Sort Tasks\n";
        cout << "6. Search Tasks\n";
        cout << "7. Recursive Total Study Time\n";
        cout << "8. Today's Study Planner\n";
        cout << "0. Exit\n";
        cout << "====================================\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number.\n";
            choice = -1;
            continue;
        }

        switch (choice) {
            case 1:
                addTask();
                break;

            case 2:
                displayTasks();
                break;

            case 3:
                calculateSummary();
                break;

            case 4:
                countPriority();
                break;

            case 5:
                sortTasks();
                break;

            case 6:
                searchTasks();
                break;

            case 7:
                displayRecursiveTotal();
                break;

            case 8:
                studyPlanner();
                break;

            case 0:
                cout << "Thank you for using the program!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}


// ==========================================
// MEMBER 2 - DATA & CORE LOGIC
// ==========================================

// Add function definitions here:
// determinePriority()
// addTask()
// displayTasks()


// ==========================================
// MEMBER 3 - FUNCTION & RECURSION
// ==========================================

// Add function definitions here:
// calculateSummary()
// countPriority()
// recursiveTotal()
// displayRecursiveTotal()


// ==========================================
// MEMBER 4 - SORTING & SEARCHING
// ==========================================

// Add function definitions here:
// sortTasks()
// searchTasks()


// ==========================================
// CHALLENGE - STUDY PLANNER
// ==========================================

// Add function definition here:
// studyPlanner()

