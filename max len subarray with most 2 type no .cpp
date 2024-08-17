int l=0,r=0;
    int maxlen=0;
    map<int,int>m;
    while(r<n){
        m[v[r]]++;
        while(m.size()>k){
            m[v[l]]--;
                if(m[v[l]]==0)m.erase(v[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
    }
