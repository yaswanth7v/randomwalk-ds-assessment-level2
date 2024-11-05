vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> spiral(m, vector<int> (n));

        struct ListNode *ptr = head;
        
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        while((top<=bottom)&&(left<=right))
        {
            for(int i=left;i<=right;i++)
            {
                if(ptr!=NULL)
                {
                     spiral[top][i] = ptr->val;
                    ptr = ptr->next;
                }
               else
               {
                    spiral[top][i] = -1;
               }
            }
            top = top+1;

            for(int i=top;i<=bottom;i++)
            {
                if(ptr!=NULL)
                {
                    spiral[i][right] = ptr->val;
                    ptr = ptr->next;
                }
               else
               {
                    spiral[i][right] = -1;
               }
            }

            right = right-1;

            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    if(ptr!=NULL)
                    {
                        spiral[bottom][i] = ptr->val;
                        ptr = ptr->next;
                    }
                else
                {
                        spiral[bottom][i] = -1;
                }
                }
                bottom = bottom - 1;

            }

            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    if(ptr!=NULL)
                    {
                        spiral[i][left] = ptr->val;
                        ptr = ptr->next;
                    }
                else
                {
                        spiral[i][left] = -1;
                }
                }
                left+=1;

            }
        }
        return spiral;
    }
