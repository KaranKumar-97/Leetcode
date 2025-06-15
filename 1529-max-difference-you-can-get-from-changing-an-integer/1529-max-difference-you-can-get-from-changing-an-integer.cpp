class Solution {
public:
    int maxDiff(int num) {
        int x1 = stoi(to_string(num).substr(0,1));
        int x2 = stoi(to_string(num).substr(0,1));
        int y1 = 1, y2 = 9;

        if(x1==1) {
            string numstr = to_string(num);
            for(char ch : numstr){
                if(ch-'0' > x1){ 
                    x1= ch-'0';
                    y1=0;
                    break;
                };
            }
        }
        if(x2==9) {
            string numstr = to_string(num);
            for(char ch : numstr){
                if(ch-'0' < x2){ 
                    x2= ch-'0';
                    break;
                };
            }
        }

        string n1 = to_string(num);
        string n2 = to_string(num);

        for(int i=0;i<n1.size();i++){
            if(n1[i] == x1 + '0'){
                n1[i] = y1 + '0';
            }
        }
        for(int i=0;i<n2.size();i++){
            if(n2[i] == x2 + '0'){
                n2[i] = y2 +'0';
            }
        }

        int num1 = stoi(n1);
        int num2 = stoi(n2);

        return abs(num2-num1);
    }
};