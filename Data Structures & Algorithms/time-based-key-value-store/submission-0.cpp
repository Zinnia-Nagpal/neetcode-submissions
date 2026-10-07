class TimeMap{
 private : 
    unordered_map <string, vector<pair<int, string>>> keyStore;   
     
    public: 
      TimeMap(){}
    
      void set(string key, string value, int timestamp) {
       if(keyStore.find(key) == keyStore.end()){
         keyStore[key]  = std::vector<pair<int, string>>();// if the key doesnt exist
       }
       keyStore[key].push_back({timestamp,value});
      }
    
    string get(string key, int timestamp) {
       // binary search

        if(keyStore.find(key) == keyStore.end()){
         return "";
        }
      
      vector <pair<int,string>>& timeStampedValues = keyStore[key];

      int left = 0, right = timeStampedValues.size()-1;
      int matchIndex = -1;

      while (left <= right){
         int mid = left + (right - left) / 2;
         int curTimestamp = timeStampedValues[mid].first;
   

      if(curTimestamp <= timestamp){
         matchIndex = mid;
         left = mid + 1;
      } else{
         right = mid - 1;
      }
   }
      if (matchIndex != -1){
         return timeStampedValues[matchIndex].second;
      }

      return "";
   
   
}
};
