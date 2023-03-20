#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    
node* fast;
node* slow;

fast=head;
slow=head;

while (fast!=NULL && fast->next!=NULL)
{
   slow=slow->next;       // advance by one node
   fast=fast->next->next;     // advance by 2 nodes

    if(slow==fast)
    {
        return 1;
    }

}

return 0;
}
