/*Write a menu-driven C program using structures to implement the following operations on a 
singly linked list: 
➢ Insert an element before another specified element in the list 
(Example: Insert 10 before 25) 
➢ Insert an element after another specified element in the list 
(Example: Insert 40 after 25) 
➢ Delete a specified element from the list 
(Example: Delete node containing 15) 
➢ Traverse the list and display all elements 
➢ Reverse the linked list 
(Modify the links such that the list is reversed) 
➢ Sort the list in ascending order 
(Using Bubble Sort or any appropriate algorithm on linked list) 
➢ Delete every alternate node in the list 
(Starting from the second node) 
➢ Insert an element into a sorted linked list while maintaining the sorted order 
(Example: Insert 28 into a list that is already sorted) 
Requirements 
Use dynamic memory allocation (malloc/free) for node creation and deletion.*/



int main() { 
    int choice, data, key;
    // we need "data" and "key" to do any sort of operation
    // data - value , key - index
    do {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert an element before another element\n");
        printf("2. Insert an element after another element\n");
        printf("3. Delete a specified element\n");
        printf("4. Traverse the list\n");
        printf("5. Reverse the list\n");
        printf("6. Sort the list\n");
        printf("7. Delete alternate nodes\n");
        printf("8. Insert into a sorted list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &data);
                printf("Insert before: ");
                scanf("%d", &key);
                insertBefore(data, key);
                break;

            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &data);
                printf("Insert after: ");
                scanf("%d", &key);
                insertAfter(data, key);
                break;

            case 3:
                printf("Enter element to delete: ");
                scanf("%d", &key);
                deleteNode(key);
                break;

            case 4:
                traverse();
                break;

            case 5:
                reverseList();
                printf("List reversed.\n");
                break;

            case 6:
                sortList();
                printf("List sorted.\n");
                break;

            case 7:
                deleteAlternate();
                printf("Alternate nodes deleted.\n");
                break;

            case 8:
                printf("Enter element to insert (sorted order): ");
                scanf("%d", &data);
                insertSorted(data);
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 9);

    return 0;
}

