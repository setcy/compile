#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct TreeNode
{
    char *name;
    int lineno;
    int intValue;
    char *stringValue;
    struct ChildNode *children;
} TreeNode;

typedef struct ChildNode
{
    TreeNode *child;
    struct ChildNode *next;
} ChildNode;

TreeNode *createTreeNode(char* name)
{
    if(name == NULL)
        return NULL;
    TreeNode *newNode = malloc(sizeof(TreeNode));
    newNode->name = name;
    newNode->children = NULL;
    return newNode;
}

TreeNode *createTreeNodeLine(char *name, TreeNode *child)
{
    if (name == NULL)
        return NULL;
    TreeNode *newNode = malloc(sizeof(TreeNode));
    newNode->name = name;
    //newNode->lineno = child->lineno;
    newNode->children = NULL;
    return newNode;
}

TreeNode *createTreeNodeInt(char *name, int line, int value)
{
    if (name == NULL)
        return NULL;
    TreeNode *newNode = malloc(sizeof(TreeNode));
    newNode->name = name;
    newNode->lineno = line;
    newNode->intValue = value;
    newNode->children = NULL;
    return newNode;
}

TreeNode *createTreeNodeString(char *name, int line, char *value)
{
    printf("----%s: %s----\n", name, value);
    if (name == NULL)
        return NULL;
    TreeNode *newNode = malloc(sizeof(TreeNode));
    newNode->name = name;
    newNode->lineno = line;
    newNode->stringValue = value;
    newNode->children = NULL;
    return newNode;
}

void addChild(TreeNode *parent, TreeNode *child)
{
    ChildNode *newChildNode = malloc(sizeof(ChildNode));
    newChildNode->child = child;
    newChildNode->next = NULL;

    if (parent->children == NULL)
    {
        parent->children = newChildNode;
    }
    else
    {
        ChildNode *current = parent->children;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newChildNode;
    }
}

void traverseTree(TreeNode *root, int depth)
{
    if (root == NULL)
        return;

    for (int i = 0; i < depth; i++) {
        printf("  ");
    }

    if (root->stringValue != NULL)
        printf("%s: %s\n", root->name, root->stringValue);
    else if (root->intValue != 0)
        printf("%s: %d\n", root->name, root->intValue);
    else if (root->lineno != 0)
        printf("%s (%d)\n", root->name, root->lineno);
    else
        printf("%s\n", root->name);

    ChildNode *current = root->children;
    while (current != NULL)
    {
        traverseTree(current->child, depth + 1);
        current = current->next;
    }
}
