void printSpiral(Node *root)
{
    //Your code here
   if(root == NULL) return;
   
   stack<Node*> se;
   stack<Node*> so;
   
   se.push(root);
   
   while(!se.empty() || !so.empty())
   {
       
       while(!se.empty())
       {

           Node *curr = se.top();
           se.pop();
           
           cout << curr->data << " ";
           
           if(curr->right != NULL) so.push(curr->right);
           
           if(curr->left != NULL) so.push(curr->left);
           
       }
       
       while(!so.empty())
       {
           Node *curr = so.top();
           so.pop();
           
           cout << curr->data << " ";
           
           if(curr->left != NULL) se.push(curr->left);
           
           if(curr->right != NULL) se.push(curr->right);
           
       }
       
   }
}