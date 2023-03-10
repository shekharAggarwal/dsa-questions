class Solution {
private:
    ListNode* h;
    
public:
    Solution(ListNode* head) {
        this->h = head;
        std::srand(std::time(0));
    }
    
    int getRandom() {
        int count = 0;
        int result = 0;
        ListNode* curr = h;
        
        while (curr) {
            count++;
            if (std::rand() % count == 0) {
                result = curr->val;
            }
            curr = curr->next;
        }
        
        return result;
    }
};