string geoGroup(People Group[]) {
    string temp;
    vector<string> Cities;

    for (int i = 0; i < sizeof(Group); i++) {
        Cities.push_back(temp.assign(Group[i].Address.begin() + ((Group[i].Address).find(",")) + 2, (Group[i].Address).end()));
    }
//https://stackoverflow.com/questions/20634743/remove-duplicate-strings-in-string-vector?rq=1
    sort(Cities.begin(), Cities.end());
    auto it = unique(Cities.begin(), Cities.end());
    Cities.erase(it, Cities.end());

    vector<vector<string>> Pop;

    for (int i = 0; i < Cities.size(); i++){
        vector<string> Row;
        Row.push_back(Cities[i]);
        for (int j = 0; j < sizeof(Group); j++) {
            if ((Group[j].Address).find(temp.assign(Group[i].Address.begin() + ((Group[i].Address).find(",")) + 2, (Group[i].Address).end())) != -1) {
                Row.push_back(Group[j].name);
            }
        }
        Pop.push_back(Row);
    }

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
