#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <limits>

using namespace std;

// Structure to store Patient information
struct Patient {
    string name;
    int age;
    string condition;
    int severity; // 1 = Critical, 10 = Minor
    
    // Constructor
    Patient(string n, int a, string c, int s)
        : name(n), age(a), condition(c), severity(s) {}
    
    Patient() {}
};

// Comparator for priority queue (lower severity number = higher priority)
struct Compare {
    bool operator()(Patient const& p1, Patient const& p2) {
        return p1.severity > p2.severity;
    }
};

// Global variables
vector<Patient> allPatients;                                    // List of all patients
priority_queue<Patient, vector<Patient>, Compare> pq;          // Emergency queue
const string FILE_NAME = "patients.txt";                       // File to store patient records

// ================= File Handling =================

// Save all patients to file
void saveToFile() {
    ofstream file(FILE_NAME);
    if (!file) {
        cout << "Error saving file!\n";
        return;
    }
    
    for (auto& p : allPatients) {
        file << p.name << "," << p.age << "," << p.condition << "," << p.severity << "\n";
    }
    
    file.close();
}

// Load all patients from file (called at program start)
void loadFromFile() {
    ifstream file(FILE_NAME);
    if (!file) return; // If file does not exist, skip
    
    allPatients.clear();
    while (!pq.empty()) pq.pop();
    
    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;
        
        // Split CSV line into fields
        size_t pos1 = line.find(',');
        size_t pos2 = line.find(',', pos1 + 1);
        size_t pos3 = line.find(',', pos2 + 1);
        
        string name = line.substr(0, pos1);
        int age = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        string condition = line.substr(pos2 + 1, pos3 - pos2 - 1);
        int severity = stoi(line.substr(pos3 + 1));
        
        Patient p(name, age, condition, severity);
        allPatients.push_back(p);
        pq.push(p);
    }
    
    file.close();
}

// ================= Core Functions =================

// Add a new patient
void addPatient() {
    string name, condition;
    int age, severity;
    
    cout << "Enter name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Enter condition: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, condition);
    
    cout << "Enter severity (1=Critical, 10=Minor): ";
    cin >> severity;
    
    Patient p(name, age, condition, severity);
    pq.push(p);
    allPatients.push_back(p);
    saveToFile(); // Save changes to file
    
    cout << "Patient added successfully.\n";
}

// Treat the most critical patient
void treatPatient() {
    if (pq.empty()) {
        cout << "No patients in queue.\n";
        return;
    }
    
    // Get highest priority patient
    Patient p = pq.top();
    pq.pop();
    
    // Remove patient from vector as well
    auto it = remove_if(allPatients.begin(), allPatients.end(),
        [&](Patient& pat) {
            return pat.name == p.name && pat.age == p.age;
        });
    allPatients.erase(it, allPatients.end());
    saveToFile();
    
    // Display treated patient info
    cout << "Treating Patient:\n";
    cout << "Name: " << p.name << ", Age: " << p.age
         << ", Condition: " << p.condition
         << ", Severity: " << p.severity << "\n";
}

// Show all waiting patients
void showWaitingList() {
    if (allPatients.empty()) {
        cout << "No patients waiting.\n";
        return;
    }
    
    cout << "Current Waiting List:\n";
    for (auto& p : allPatients) {
        cout << p.name << " | Age: " << p.age
             << " | Condition: " << p.condition
             << " | Severity: " << p.severity << "\n";
    }
}

// Search for a patient by name
void searchPatient() {
    string name;
    cout << "Enter patient name to search: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    
    bool found = false;
    for (auto& p : allPatients) {
        if (p.name == name) {
            cout << "Found:\n";
            cout << "Name: " << p.name << ", Age: " << p.age
                 << ", Condition: " << p.condition
                 << ", Severity: " << p.severity << "\n";
            found = true;
            break;
        }
    }
    
    if (!found) cout << "Patient not found.\n";
}

// Remove a patient by name
void removePatient() {
    string name;
    cout << "Enter patient name to remove: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    
    auto it = remove_if(allPatients.begin(), allPatients.end(),
        [&](Patient& p) {
            return p.name == name;
        });
    
    if (it == allPatients.end()) {
        cout << "Patient not found.\n";
        return;
    }
    
    allPatients.erase(it, allPatients.end());
    
    // Rebuild priority queue after removal
    priority_queue<Patient, vector<Patient>, Compare> newPQ;
    for (auto& p : allPatients) newPQ.push(p);
    pq = newPQ;
    
    saveToFile();
    cout << "Patient removed from queue.\n";
}

// ================= Main Program =================

int main() {
    loadFromFile(); // Load data at startup
    
    int choice;
    do {
        cout << "\n--- Hospital ER Management System ---\n";
        cout << "1. Add Patient\n";
        cout << "2. Treat Next Patient\n";
        cout << "3. Show Waiting List\n";
        cout << "4. Search Patient\n";
        cout << "5. Remove Patient\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addPatient(); break;
            case 2: treatPatient(); break;
            case 3: showWaitingList(); break;
            case 4: searchPatient(); break;
            case 5: removePatient(); break;
            case 6: cout << "Exiting system. Stay safe.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);
    
    return 0;
}