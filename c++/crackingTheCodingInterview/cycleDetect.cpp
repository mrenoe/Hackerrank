/*
This is one of the few that isn't a standalone program but as it shows understanding of a linked list i'm including it

Input Format

Our hidden code checker passes the appropriate argument to your function. You are not responsible for reading any input from stdin.

Constraints
0<=list size <= 100

Output Format

If the list contains a cycle, your function must return true. If the list does not contain a cycle, it must return false. The binary integer corresponding to the boolean value returned by your function is printed to stdout by our hidden code checker.

Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if (!head || !head->next)
        return false;

    Node* second = head->next;
    while (second){
        if (head == second)
            return true;
        else {
            head = head->next;
            if (second->next)
                second = second->next->next;
            else
                return false;
        }
    }
    return false;
}

