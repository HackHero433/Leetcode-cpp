class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char, int> f;

        for (char ch : s)
            f[ch]++;

        priority_queue<pair<int, char>> pq;

        for (auto it : f) {
            char element = it.first;
            int frequency = it.second;
            pq.push({frequency, element});
        }

        string res = "";

        while (pq.size() > 1) {

            auto p = pq.top();
            pq.pop();

            auto p2 = pq.top();
            pq.pop();

            res.push_back(p.second);
            res.push_back(p2.second);

            p.first--;
            p2.first--;

            if (p.first > 0)
                pq.push(p);

            if (p2.first > 0)
                pq.push(p2);
        }

        if (!pq.empty()) {
            auto p = pq.top();
            pq.pop();

            if (p.first > 1)
                return "";

            res.push_back(p.second);
        }

        return res;
    }
};