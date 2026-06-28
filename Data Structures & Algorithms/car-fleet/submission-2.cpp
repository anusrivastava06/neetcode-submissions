class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,double>> cars;

        // Store position and time required to reach target
        for(int i = 0; i < position.size(); i++) {

            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Sort according to position
        sort(cars.begin(), cars.end());

        int fleets = 0;
        double lastFleetTime = 0;

        // Traverse from the car nearest to target
        for(int i = cars.size() - 1; i >= 0; i--) {

            if(cars[i].second > lastFleetTime) {

                fleets++;
                lastFleetTime = cars[i].second;
            }
        }

        return fleets;
    }
};