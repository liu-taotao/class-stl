
/**
 * @brief 采用的大概意思就是最小堆模拟
 * 
 */
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        /**
         * @brief 优先队列（Priority Queue），名为res，用于存储long long类型的元素。优先队列是一种数据结构，
         * 它可以自动维护队列中的元素按照一定的优先级进行排序。
         * 该优先队列的特点是使用greater<>作为比较函数，即元素按照从小到大的顺序进行排序。这意味着队列中的最小元素始终位于队首。
         * 在这段代码中，priority_queue<long long, vector<long long>, greater<>>的三个参数分别是：
         * long long：指定队列中元素的类型为long long，即64位整数类型。
         * vector<long long>：指定底层容器使用的数据结构是vector，即动态数组。
         * greater<>：指定比较函数为greater<>，即元素按照从小到大的顺序进行排序。
         * 
         */
        priority_queue<long long, vector<long long>, greater<>> res;
        /**
         * @brief Construct a new for objectint x：声明一个新的整数变量x，用于接收容器中的每个元素的值。
         * 这里的int表示x的数据类型。
         * :：冒号表示“在容器中的每个元素上”。
         * nums：表示要遍历的容器，可以是数组、向量、列表等。
         * 
         * @param nums 
         */
        for (int x : nums) {
            res.push((long long) x);
        }
        while (res.top() < k) {
            long long x = res.top();
            res.pop();
            long long y = res.top();
            res.pop();
            res.push(x * 2 + y);
            ans++;
        }
        return ans++;
    }
};  