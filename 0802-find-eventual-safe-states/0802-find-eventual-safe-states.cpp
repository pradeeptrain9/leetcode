class Solution {
public:
    void son(int source, vector<bool>&safe,vector<vector<int>>&graph,vector<bool>&vis)
    {
        int cnt=0;
        if(vis[source]) return;
        if(safe[source]) return;
        vis[source]=true;
        for(int i=0;i<graph[source].size();i++)
        {
            if(!safe[graph[source][i]])
            {
                son(graph[source][i],safe,graph,vis);
                if(!safe[graph[source][i]]) return;
            }
        }
        safe[source]=true;
        return;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>safe(n,false),vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(safe[i])continue;
            son(i,safe,graph,vis);
            vis=vector<bool>(n,false);
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(safe[i])ans.push_back(i);
        }
        
        return ans;     
    }
};