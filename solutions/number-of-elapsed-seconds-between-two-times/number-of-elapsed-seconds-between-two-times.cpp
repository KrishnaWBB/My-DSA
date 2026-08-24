class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        
        string h1 =s.substr(0,2);
        int hs = stoi(h1);

        string h2 = e.substr(0,2);
        int he = stoi(h2);

        string m1 = s.substr(3,2);
        int ms = stoi(m1);

        string m2 =e.substr(3,2);
        int me = stoi(m2);

        string s1 =s.substr(6,2);
        int ss = stoi(s1);

        string s2 =e.substr(6,2);
        int se = stoi(s2);
        
        

        return ((he - hs)*3600 + (me - ms)*60 + (se - ss));
        
    }
};