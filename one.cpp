 int maxProfit(vector<int>& prices) 
    {
        int minimal=INT_MAX;
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
        minimal=min(minimal,prices[i]);
            res=max(res,prices[i]-minimal);
        }
        return res;
    }