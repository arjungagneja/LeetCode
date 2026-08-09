class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0, right = people.size() - 1, boat = 0;
        sort(people.begin(), people.end());
        while (left <= right) {
            if (people[right] + people[left] <= limit) {
                boat++;
                left++;
                right--;
            }
            else if (people[right] + people[left] > limit && people[right] <= limit) {
                boat++;
                right--;
            }
        }
        return boat;
    }
};