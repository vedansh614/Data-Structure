#include <stdio.h>
#include <stdlib.h>
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Search node
int search(Node* root, int key) {
    if (root == NULL)
        return 0;

    if (key == root->data)
        return 1;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Main function
int main() {
    int n;
    scanf("%d", &n);

    Node* root = NULL;
    int op, val;

    char output[100][20];
    int outIndex = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &op, &val);

        if (op == 1) {
            root = insert(root, val);
        } 
        else if (op == 2) {
            root = deleteNode(root, val);
        } 
        else if (op == 3) {
            if (search(root, val))
                sprintf(output[outIndex++], "found");
            else
                sprintf(output[outIndex++], "not found");
        }
    }

    // Print all outputs at end
    for (int i = 0; i < outIndex; i++) {
        printf("%s\n", output[i]);
    }

    return 0;
}