int min(int a, int b) {
    return (a < b) ? a : b;
}

int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
    int n = distanceSize;

    // total distance
    int total_dis = 0;
    for (int i = 0; i < n; i++) {
        total_dis += distance[i];
    }

    // clockwise distance from start to destination
    int DC = 0;
    int i = start;

    while (i != destination) {
        DC += distance[i];
        i = (i + 1) % n;
    }

    int anti_dis = total_dis - DC;

    return min(DC, anti_dis);
}