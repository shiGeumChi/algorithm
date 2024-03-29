class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>res;
        set<int>s;
        for(int i =0; i<edges.size();i++){
            s.insert(edges[i][1]);
        }
        for(int i =0; i<n;i++){
            if(s.find(i)==s.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};

