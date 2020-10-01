#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
// Class that was created to test the geoGroup function
class People {
    public:
    string Birthday;
    string name;
    double Location[2];
    string Address;
};

string geoGroup(People Group[]) {
    string temp;
    vector<string> Cities;
    // Goes through the address of each person in Group[] and grabs only the city and state. Stores into the Cities Vector 
    for (int i = 0; i < sizeof(Group); i++) {
        Cities.push_back(temp.assign(Group[i].Address.begin() + ((Group[i].Address).find(",")) + 2, (Group[i].Address).end()));
    }
    
//https://stackoverflow.com/questions/20634743/remove-duplicate-strings-in-string-vector?rq=1
    // Using a sorting algorithm as well as the unique algorithm to remove any repeats of cities in order to make organizing managable
    sort(Cities.begin(), Cities.end());
    auto it = unique(Cities.begin(), Cities.end());
    Cities.erase(it, Cities.end());

    // Create a 2D vector in order to store people based on cities
    vector<vector<string>> Pop;

    for (int i = 0; i < Cities.size(); i++){
        vector<string> Row;
        Row.push_back(Cities[i]);
        for (int j = 0; j < sizeof(Group); j++) {
            // Goes through the Group[] array and compares which city each person is by using the Cities vector in order to compare
            if ((Group[j].Address).find(temp.assign(Group[i].Address.begin() + ((Group[i].Address).find(",")) + 2, (Group[i].Address).end())) != -1) {
                Row.push_back(Group[j].name);
            }
        }
        Pop.push_back(Row);
    }

    // For loop prints list of each group by city
    for (int i = 0; i < Pop.size(); i++) {
        for (int j = 0; j < Pop[i].size(); j++) {
            cout << Pop[i][j] << endl;
            if (j == 0) {
                cout << "==============" << endl;
            }
        }
        cout << endl;
    }
    return "";
}
