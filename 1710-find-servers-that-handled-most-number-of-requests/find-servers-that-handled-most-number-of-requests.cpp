class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        
        if(k >= arrival.size()){
            vector<int>res(arrival.size());
            iota(res.begin(),res.end(),0);
            return res;
        }
  priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;

    vector<int>server(k,1);
    set<int>avail;
    for(int i=0;i<k;i++){

        pq.push({arrival[i] + load[i],i});
     }

     for(int i=k;i<arrival.size();i++){
         
          while(!pq.empty() && pq.top().first <= arrival[i]){
               avail.insert(pq.top().second);
               pq.pop();
          }
          if(pq.size() != k){
          auto it = avail.lower_bound(i%k);
          if(it == avail.end()) it = avail.begin();
          
          pq.push({arrival[i]+load[i],*it});
        cout<<*it<<"-";
          server[*it]++;
          avail.erase(*it);
          }

      }

   int maxi = *max_element(server.begin(),server.end());
    
    vector<int>res;
    for(int i=0;i<k;i++){
        if(maxi == server[i]) res.push_back(i);
    }
      
    return res;
    }
};