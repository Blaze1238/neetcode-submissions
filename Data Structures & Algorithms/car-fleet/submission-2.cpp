class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,int> posSpeedMap;
        stack<float> st; 
        int n = position.size();
        vector<float> vec(n,0);
        for(int i = 0; i<n; i++){
            posSpeedMap[position[i]] = speed[i];
        }
        sort(position.begin(),position.end(),std::greater<int>());
        for(int i=0; i<n; i++){
            vec[i] = (float)((target-position[i]))/posSpeedMap[position[i]];
            cout<<vec[i]<<endl;
        }
        for(int i=0; i<n; i++){
            if(i==0) st.push(vec[i]);
            else{
                if(vec[i] > st.top()) st.push(vec[i]);
            }
        }
        return st.size();
    }
};
