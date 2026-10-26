class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int deckCapacity = n * n;
        int weightCapacity = maxWeight / w;

        return min(deckCapacity, weightCapacity);
    }
};