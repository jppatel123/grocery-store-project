#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *productName[] = {"sugar", "milk", "vegetable masala", "washing powder", "salt", "poha", "oil", "tooth paste", "hair conditionar", "soft drink", "red chilli", "maida", "coffee", "tea", "butter", "milk powder", "turmeric powder", "hair oil", "ghee", "face powder"};
int product_price[] = {50, 50, 50, 100, 20, 50, 200, 40, 120, 50, 40, 45, 200, 100, 100, 150, 200, 60, 300, 70};

char product_name[20][20];
int product_quantity[20];
int count1 =0, total_bill =0, total_bill1 =0,discount;

void generate_bill() {
    FILE *fp;
    char filename[50];

    printf("\nEnter filename to save bill (without extension): ");
    scanf("%s",filename);
    strcat(filename,".txt");

    fp = fopen(filename,"w");
    if (fp ==NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp,"\t*****  GROCERY STORE BILL *****\n\n");
    fprintf(fp,"|--------------------------------------------------------\n");
    fprintf(fp,"|  Product\t\tQuantity\t\tPrice   |\n");
    fprintf(fp,"|--------------------------------------------------------\n");

    for (int i=0;i<count1;i++) {
        fprintf(fp, "~%s\t\t\t%d\t\t\t%d\n",product_name[i],product_quantity[i],product_price[i] * product_quantity[i]);
    }

     fprintf(fp, "|--------------------------------------------------------\n");
    fprintf(fp, "| Total product %d \t\tTotal amount    %d\n",count1,total_bill1);
     fprintf(fp, "|--------------------------------------------------------\n");
    fprintf(fp, "|                  \t\tDiscount        %d\n",discount);
    fprintf(fp, "|-------------------------------------------------------\n");
    fprintf(fp, "|                  \t\tPayable ammount %d\n",total_bill);
    fprintf(fp, "|--------------------------------------------------------\n");

    fclose(fp);
    printf("\nBill generated and saved in '%s'.\n",filename);
}

void remove_product() {
    int index;
    char choice;
    char temp_str[20];

    printf("Enter the name of the product you want to remove: ");
    scanf("%s",temp_str);

    for (index =0;index<count1;index++) {
        if (strcmp(temp_str,product_name[index]) == 0)
            break;
    }

    if (index==count1) {
        printf("Product not found in the cart.\n");
        return;
    }

    printf("Are you sure you want to remove %s from the cart? (Y/N): ", temp_str);
    scanf(" %c",&choice);

    if (choice =='Y'||choice =='y') {
        for (int i=index;i<count1 - 1;i++) {
            strcpy(product_name[i],product_name[i + 1]);
            product_quantity[i] =product_quantity[i + 1];
        }
        count1--;
        printf("%s removed from the cart.\n",temp_str);
    }
}

void calculate_bill() {
    total_bill = 0;
    for (int i = 0;i<count1;i++) {
        total_bill+=product_price[i] * product_quantity[i];
    }

    total_bill1 = total_bill;

    if (total_bill >= 15000) {
        discount = (15 * total_bill) / 100;
    } else if (total_bill >= 10000) {
        discount = (10 * total_bill) / 100;
    } else if (total_bill >= 5000) {
        discount = (5 * total_bill) / 100;
    }
   total_bill -= discount;
 printf("\nIf you want to generate your bill then press 'Y' otherwise 'N': ");
    char choose;
    scanf("%c",&choose);
    if (choose == 'Y' || choose == 'y' ) {
        generate_bill();
    } else if (choose == 'N'||choose == 'n' ) {
        
    } else {
        printf("Invalid choice. Exiting...\n");
    }
}
void add_product() {
    char temp_str[20];
    printf("Enter product name : ");
    scanf("%s", temp_str);

    int found = 0;
    for (int i = 0; i < 20; i++) {
        if (strcmp(temp_str, productName[i]) == 0) {
            found = 1;
            strcpy(product_name[count1],temp_str);
            break;
        }
    }

    if (!found) {
        printf("Invalid product name. Please try again.\n");
        return;
    }

    printf("Enter quantity : ");
    scanf("%d",&product_quantity[count1]);
    if (product_quantity[count1] < 1) {
        printf("\nInvalid quantity. Please try again.\n\n");
        return;
    }

    count1++;
    printf("\nProduct added successfully!!.......\n\n");
}
  void show_allproduct()
  {
     printf(" \n<---------now,20 product are available in store--------->\n ");
     printf("\nproduct\t\t\tprice\n");
     printf("\nsugar\t\t\t50");
     printf("\nmilk\t\t\t50");
     printf("\nvegetable powder \t\t50");
     printf("\nwashing powder \t\t\t100");
     printf("\nsalt\t\t\t20");
     printf("\npoha\t\t\t200");
     printf("\noil\t\t\t40");
     printf("\ntooth paste\t\t\t120");
     printf("\nsoft drink\t\t\t50");
     printf("\nred chilli\t\t\t40");
     printf("\nmaida\t\t\t45");
     printf("\ncoffee\t\t\t200");
     printf("\ntea\t\t\t100");
     printf("\nbutter\t\t\t100");
     printf("\nmilk powder\t\t\t150");
     printf("\nturmric powder\t\t\t200");
     printf("\nhaor oil\t\t\t60");
     printf("\nghee\t\t\t300");
     printf("\nface powder\t\t\t70\n");
     printf("\n<----------------------------------->");
     
     
  }

int main() {
    char ch;
    printf("\n```````````````````````````````````````````\n");
    printf("                              \n");
    printf(" WELCOME TO ONLINE GROCERY STORE        \n");
    printf("                              \n");
    printf("```````````````````````````````````````````\n");
     printf("\n\nHere are our store discount rates\n\n");
    printf("                                        \n");
    printf(" <----less than 5000 buy 0%% discount---->\n");
    printf("\n");
    printf(" <----greater than 5000 buy 5%% discount---->  \n");
    printf("\n");
    printf(" <----greater than 10000 buy 10%% discount----> \n");
    printf("\n");
    printf(" <----greater than 15000 buy 15%% discount----> \n");

    do {
    printf("\n1. show all product \n");
    printf("2. Add Product\n");
    printf("3. Remove Product\n");
    printf("4. Generate Bill\n");
    printf("5. Exit\n");
    printf("\nEnter your choice:\n ");
        
        scanf(" %c", &ch);

        switch (ch) {
            case '1':
                  show_allproduct();
                  break;
            case '2':
                 add_product();
                break;
            case '3':
                remove_product();
                break;
            case '4':
                 calculate_bill();
                break;
             case '5':
               printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (ch != '5');

    return 0;
}