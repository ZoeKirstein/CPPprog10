#include <iostream>
#include <string>

using namespace std;




/*void modifyEmployee(Employee employees[], int numEmployees, const string& name, const string& field, const string& value) {
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].name == name) {
            if (field == "pay") {
                employees[i].pay = stoi(value);
            } else if (field == "role") {
                employees[i].role = value;
            }
            return;  
        }
    }
}
*/
int main() {
    int n;
    cin>>n;
   
    string employees[100][3];

    for (int i = 0; i < n; ++i) {
        cin >> employees[i][0] >> employees[i][1] >> employees[i][2];
    }

    

    /*for (int i = 0; i < m; ++i) {
        string name, field, value;
        cin >> name >> field >> value;
        employees.at(i)=;
    }
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].name == name) {
            if (field == "pay") {
                employees[i].pay = stoi(value);
            } else if (field == "role") {
                employees[i].role = value;
            }
            return;  
        }
    }*/
    int m;
    string nameIn;
    string field;
    string change;
    cin>> m; 

    for (int i = 0; i < m; ++i) {
        cin>> nameIn >> field >> change;
        for (int i=0; i < n; i++){
            if (employees[i][0]==nameIn){
                if (field=="pay"){
                    employees[i][1]=change;
                }
                if (field=="role"){
                    employees[i][2]=change;
                }
            }
        }

    }
    for (int i = 0; i < n; ++i) {
        cout << employees[i][0] << ", " << employees[i][1] << ", " << employees[i][2] << endl;
    }

    return 0;
}