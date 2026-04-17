#include <stdio.h>
// Print menu
void printMenu() {
    printf("1. Insert Node\n");
    printf("2. In-Order Traversal\n");
    printf("3. Pre-Order Traversal\n");
    printf("4. Post-Order Traversal\n");
    printf("5. Delete Node\n");
    printf("6. Exit\n");
}

int main() {
    int choice, value;

    while (1) {
        printMenu();
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Data: ");
                scanf("%d", &value);
                root = insertNode(root, value);
                break;

            case 2:
                if (root == NULL)
                    printf("The tree is empty\n");
                else {
                    inorder(root);
                    printf("\n");
                }
                break;

            case 3:
                if (root == NULL)
                    printf("The tree is empty\n");
                else {
                    preorder(root);
                    printf("\n");
                }
                break;

            case 4:
                if (root == NULL)
                    printf("The tree is empty\n");
                else {
                    postorder(root);
                    printf("\n");
                }
                break;

            case 5: {
                printf("Delete: ");
                scanf("%d", &value);
                int found = 0;
                root = deleteNode(root, value, &found);
                if (!found)
                    printf("Value not found\n");
                break;
            }

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}