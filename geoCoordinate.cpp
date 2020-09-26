string geoCoordinate(People Person, People Group[]){
    double Lat1 = Person.Location[0];
    double Lon1 = Person.Location[1];
    const double PI = 3.14159265358979323846;
    const double radius = 6371; // Radius of the Earth
    double closest = 6371;
    string closestPerson;

    for (int i = 0; i < sizeof(Group); i++) {
        double dlat = (((Group[i].Location)[0] - Lat1) * PI) / 180;
        double dlon = (((Group[i].Location)[1] - Lon1) * PI) / 180;

        double a = sin(dlat / 2) * sin(dlat / 2) + cos((Lat1 * PI) / 180) * cos((((Group[i].Location)[0]) * PI)/ 180)
            * sin(dlon / 2) * sin(dlon / 2);
        double c = 2 * atan2(sqrt(a), sqrt(1 - a));
        
        double d = radius * c;

        if (d < closest) {
            closest = d;
            closestPerson = Group[i].name;
        }
    }
    cout << closest << endl;
    return closestPerson;
}
