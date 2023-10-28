class Checkout {
public:

    int q[20000];
    int begin;
    int end;
    
    Checkout() {

    }
    
    int get_max() {
        int ans = -1;
        for (int i = begin; i != end; i++) {
            ans = max(ans, q[i]);
        }
        return ans;
    }
    
    void add(int value) {
        q[end++] = value;
    }
    
    int remove() {
        if (begin == end) {
            return -1;
        }
        return q[begin++];
    }
};
