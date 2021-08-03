 struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node * ans = new Node(0);
        struct Node * fans = ans;
        bool check = false;
        bool rem = false;
        while(first != NULL && second != NULL)
        {
            int sum = 0;
            if(rem == true)
                sum++;
            sum += first->data + second-> data;
            if(sum > 9)
            {
                ans->data = sum%10;
                rem = true;
            }
            else
            {
                ans->data = sum;
                rem = false;
            }
            ans -> next = new Node(0);
            ans = ans -> next;
            first = first->next;
            second = second->next;
        }
        if(first != NULL)
        {
            while(first != NULL)
            {
                int sum = 0;
                if(rem == true)
                    sum++;
                sum += first->data;
                if(sum > 9)
                {
                    ans->data = sum%10;
                    rem = true;
                }
                else
                {
                    ans->data = sum;
                    rem = false;
                }
                first = first->next;
                if(first)
                {
                    ans -> next = new Node(0);
                    ans = ans -> next;
                    
                }
            }
        }
        else
        {
            while(second != NULL)
            {
                int sum = 0;
                if(rem == true)
                    sum++;
                sum += second->data;
                if(sum > 9)
                {
                    ans->data = sum%10;
                    rem = true;
                }
                else
                {
                    ans->data = sum;
                    rem = false;
                }
                second = second->next;
                if(second)
                {
                    ans -> next = new Node(0);
                    ans = ans -> next;
                    
                }
            }
            
        }
        if(rem == true)
            ans->data = 1;
        return fans;
    }