class OrderedStream {
public:
    vector<string> res;
    int ptr=1;
    OrderedStream(int n) {
        res.resize(n);
        ptr=1;
    }
    
    vector<string> insert(int idKey, string value) {
        res[idKey-1]= value;
        vector<string> ans;
        if(ptr==idKey){
            int i=ptr-1;
            for(;i<res.size();i++){
                if(res[i]==""){
                break;
                }
                ans.push_back(res[i]);
            }
            ptr=i+1;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */