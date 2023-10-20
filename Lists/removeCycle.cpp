class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // use a map to store the node address that has been visited
        unordered_map<Node*, int>mp; // node address, freq
        Node* temp = head;
        mp[temp]++;
        while(temp != NULL){
            // check if its already present in the map or not
            if(mp[temp->next] > 0){
                // means current node is the looping node
                temp->next = NULL;
                return;
            }
            else{
                mp[temp->next]++;
                temp = temp->next;
            }

        }
    }
};