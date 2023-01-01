#define  ll long long int
class Solution {
public:
    ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0; // Initialize result
    a = a % mod;
    while (b > 0)
    {
        // If b is odd, add 'a' to result
        if (b % 2 == 1)
            res = (res + a) % mod;
 
        // Multiply 'a' with 2
        a = (a * 2) % mod;
 
        // Divide b by 2
        b /= 2;
    }
 
    // Return result
    return res % mod;
}
    long long int calculte(int first,int second,string &op){
        
        ll mod = 100000000000;
        string arr[] = {"+","-","*","/"};
        ll ans ;
        if(op == arr[0]){
            ans = first + second;
        }else if(op == arr[1]){
            ans = first - second;
        }else if(op == arr[2]){
            // ans = mulmod(first,second,mod) ;
            ans = first * second;
        }else if(op == arr[3]){
            if(second == 0)
                ans = 0;
            else
                ans = first / second;
        }
        return ans;
    }
    
    bool isOp(string op){
        return op == "+" || op == "-" || op == "*" || op == "/";
    }
    int evalRPN(vector<string>& tokens) {
        
        
        stack<long long int>s;
        // int res = 0;
        for(auto t : tokens){
            
            if(isOp(t)){
                
                long long int second = s.top();
                s.pop();
                long long int first = s.top();
                s.pop();
                
                // long long int ans = calculte(first,second,t);
                if(t == "+") s.push(first + second);
                if(t == "-") s.push(first - second);
                if(t == "*") s.push(first * second);
                if(t == "/") s.push(first / second);
                // res += ans;
                // s.push(ans);
                 
            }else{
                long long int num = stoi(t);
                s.push(num);
            }
        }
        
        return s.top();

        
        /*
        string s = tokens.back(); tokens.pop_back();
        if(s != "+" && s != "-" && s != "*" && s != "/") return stoi(s);
        
        int r2 = evalRPN(tokens), r1 = evalRPN(tokens);
        
        if(s == "+") return r1 + r2;
        if(s == "-") return r1 - r2;
        if(s == "*") return r1 * r2;
        if(s == "/") return r1 / r2;
        
        return 0;
        */
        
        /*
         constexpr auto eval = [](char op) -> function<int(int, int)> {
        switch (op) {
            case '+': return plus<>();
            case '-': return minus<>();
            case '*': return multiplies<>();
            case '/': return divides<>();
            default: return nullptr;
        }
    };

    stack<int> stk;
    for (const auto& str : tokens) {
        if (str.length() == 1 && eval(str[0])) {
            const auto rhs = stk.top(); stk.pop();
            const auto lhs = stk.top(); stk.pop();
            stk.push(eval(str[0])(lhs, rhs));
        } else {
            stk.push(stoi(str));
        }
    }
    return stk.top();
    */
    }
};