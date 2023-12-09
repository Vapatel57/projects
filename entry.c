#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent items in the stock
struct StockItem {
    char name[50];
    int quantity;
    float price;
    float value;
};

// Function to add items to the stock
void addItem(struct StockItem stock[], int *count) {
    if (*count < 100) {
        printf("Enter item name: ");
        scanf("%s", stock[*count].name);

        printf("Enter item quantity: ");
        scanf("%d", &stock[*count].quantity);

        printf("Enter item price: ");
        scanf("%f", &stock[*count].price);

        stock[*count].value = stock[*count].quantity * stock[*count].price;
        printf("Total price : %d",stock[*count].value);
printf("\n");
        (*count)++;
        printf("Item added to the stock.\n");
    } else {
        printf("Stock is full. Cannot add more items.\n");
    }
}

// Function to update the quantity of an item in the stock
void updateQuantity(struct StockItem stock[], int count) {
    char itemName[50];
    int newQuantity;

    printf("Enter the name of the item to update quantity: ");
    scanf("%s", itemName);

    for (int i = 0; i < count; i++) {
        if (strcmp(itemName, stock[i].name) == 0) {
            printf("Current quantity: %d\n", stock[i].quantity);
            printf("Enter the new quantity: ");
            scanf("%d", &newQuantity);
            stock[i].quantity = newQuantity;
            printf("Quantity updated.\n");
            return;
        }
    }

    printf("Item not found in the stock.\n");
}

// Function to display the current stock
void displayStock(struct StockItem stock[], int count) {
    if (count == 0) {
        printf("Stock is empty.\n");
        return;
    }

    printf("Current Stock:\n");
    for (int i = 0; i < count; i++) {
        printf("Item Name: %s\n", stock[i].name);
        printf("Quantity: %d\n", stock[i].quantity);
        printf("Price: RS %.2f\n", stock[i].price);
        printf("\n");
    }
}

int main() {
    struct StockItem stock[100];
    int itemCount = 0;
    int choice;
   
    while (1) {
        printf("Stock Management Menu:\n");
        printf("1. Add Item\n");
        printf("2. Update Quantity\n");
        printf("3. Display Stock\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(stock, &itemCount);
                break;
            case 2:
                updateQuantity(stock, itemCount);
                break;
            case 3:
                displayStock(stock, itemCount);
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
