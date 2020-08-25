void rightView(Node *root)
{
   if(root == NULL) return;
   
   queue<Node*> q;
   
   q.push(root);
   
   while(!q.empty())
   {
       int size = q.size();
       
       for(int i=0; i<size; i++)
       {
           Node *curr = q.front();
           q.pop();
           
           if(i == size - 1) cout << curr->data << " ";
           
           if(curr->left != NULL) q.push(curr->left);
           
           if(curr->right != NULL) q.push(curr->right);
       }
       
   }
   
}