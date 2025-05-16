class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        vector<int> products(n1+n2,0);

        for (int i = n1-1;i >= 0;i--) {
            for (int j = n2-1;j >= 0;j--) {
                int d1 = num1[i]-'0';
                int d2 = num2[j]-'0';
                products[i+j+1]+=d1*d2;
            }
        }
        for (int i = n1+n2-1; i>0; i--) {
            int carry = products[i]/10;
            products[i] %= 10;
            products[i-1] += carry;
        }
        string ans = "";
        int i = 0;
        while (i < products.size() && products[i] == 0) i++;
        while (i < products.size()) {
            ans += (products[i++] + '0');
        }

        return ans.empty() ? "0" : ans;
    }
};