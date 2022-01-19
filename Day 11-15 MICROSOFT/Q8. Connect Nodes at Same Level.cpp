class Solution
{
    public:
    void connect(Node *root)
    {
        queue <Node*> q;
        q.push(root);

        Node* prev=NULL;
        Node* end = root, *nextend;
        
        
        while(!q.empty())
        {
            //storing the front element of queue in temp and popping it.
            Node* temp = q.front();
            q.pop();
            
            //storing all available nodes in queue and updating nextend.
            if(temp->left) 
            { 
                q.push(temp->left);
                nextend = temp->left;
            }
            if(temp->right)
            { 
                q.push(temp->right);
                nextend = temp->right;
            }
            
            //setting nextRight of previous node of that level.
            if(prev) 
            prev->nextRight = temp;
            
            if(temp == end)
            {
                temp->nextRight = NULL;
                prev = NULL;
                //we also set the value of end for next level.
                end = nextend;
            }
            //else we set prev to current node temp. 
            else 
            prev = temp;
        }
    }
    
};
