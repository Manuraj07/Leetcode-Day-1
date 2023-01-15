
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1==s2) return true;
        vector<int> places;

        for (int i=0; i<s1.length(); ++i) {
            if (s1[i] != s2[i]) places.push_back(i);
        }

        if (places.size() == 2) {
            char s = s1[places[0]];
            s1[places[0]] = s1[places[1]];
            s1[places[1]] = s;
        }

        if (s1==s2) return true;

        return false;
    }
};