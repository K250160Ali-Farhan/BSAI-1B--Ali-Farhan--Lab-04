#include <stdio.h>

int main()
{
    // === Q1: Flavour Selection ===
    /*
    Flavours Available:
    1. Vanilla
    2. Chocolate
    3. Strawberry
    */
    printf("Welcome to AF ice - cream parlour \n");
    printf("Select Your Flavour From:\n\"1: Vanilla, 2: Chocolate, 3: Strawberry\" \n");
    printf("Enter below the number of the flavour you want to choose:\n");

    int flavourNum = 0; // Variable to store user’s flavour choice
    scanf("%d", &flavourNum);

    // Validate input until a correct flavour is chosen
    while (flavourNum > 3 || flavourNum < 1)
    {
        printf("Invalid Flavour Chosen! \n");
        printf("Please Try Again! \n");
        scanf("%d", &flavourNum);
    }

    // Display confirmation of flavour choice
    switch (flavourNum)
    {
    case 1:
        printf("Excellent Choice! You selected \"Vanilla\" \n");
        break;
    case 2:
        printf("Excellent Choice! You selected \"Chocolate\" \n");
        break;
    case 3:
        printf("Excellent Choice! You selected \"Strawberry\" \n");
        break;
    }

    // === Q2: Scoops Selection ===
    /* The price for one scoop is $2.00.
       2 scoops cost $3.50, 3 scoops cost $4.50. */
    int noOfScoops = 0; // Number of scoops chosen
    float total = 0.0;  // Total bill amount
    printf("You can have 1, 2 or 3 scoops:\n");
    printf("How many scoops would you like to have?, Enter Below: \n");
    scanf("%d", &noOfScoops);

    // Validate input for scoops
    while (noOfScoops > 3 || noOfScoops < 1)
    {
        printf("Invalid Scoops \n");
        printf("Please Try Again\n");
        scanf("%d", &noOfScoops);
    }

    // Q3: Apply scoop pricing and offers
    if ((noOfScoops > 1) && (noOfScoops <= 3))
    {
        printf("Please see our multi-scoop offers\n");
        if (noOfScoops == 2)
        {
            total = 3.50;
            printf("Your Total is, %c %.2f\n", '$', total);
        }
        else if (noOfScoops == 3)
        {
            total = 4.50;
            printf("Your Total is, %c %.2f\n", '$', total);
        }
    }
    else if (noOfScoops == 1)
    {
        total = 2.0;
        printf("Your Total is, %c %.2f\n", '$', total);
    }

    // === Q4: Cone Selection ===
    /*
    Cone Options:
    1. Regular Cone: +$0.50
    2. Waffle Cone: +$1.00
    */
    printf("Select Your Type Of Cone From:\n\"1: Regular Cone or 2: Waffle Cone\" \n");
    printf("Enter below the number of the type of cone you chose: \n");

    int typeOfCone = 0; // Stores cone type
    scanf("%d", &typeOfCone);

    // Validate cone input
    while (typeOfCone > 2 || typeOfCone < 1)
    {
        printf("Invalid Input \n");
        printf("Please Try again \n");
        scanf("%d", &typeOfCone);
    }

    // Add cone cost to total
    switch (typeOfCone)
    {
    case 1:
        total += 0.50;
        printf("Your Total is, %c %.2f\n", '$', total);
        break;
    case 2:
        total += 1.00;
        printf("Your Total is, %c %.2f\n", '$', total);
        break;
    }

    // === Q5: Sprinkles Addition ===
    char sprinkles;
    printf("Do You Want Sprinkles ?\n");
    printf("If Yes enter \"Y\" and If No enter \"N\"\n");
    scanf(" %c", &sprinkles);

    if (sprinkles == 'Y')
    {
        total += 0.75;
        printf("Your Total is, %c %.2f\n", '$', total);
    }
    else
    {
        printf("Your Total is, %c %.2f\n", '$', total);
    }
 

    // === Q6: Weekend Discount ===
    /*
      On Saturday (6) or Sunday (7) → 10% discount
    */
    int weekDay = 0;
    printf("What day it is \n");
    printf("Enter below it's number like 1: Monday, 2: Tuesday ... 7: Sunday : \n");
    scanf("%d", &weekDay);

    // Validate weekday input
    while (weekDay > 7 || weekDay < 0)
    {
        printf("Invalid Input! Please Try again \n");
        scanf("%d", &weekDay);
    }

    // Apply weekend discount if applicable
    if (weekDay == 6 || weekDay == 7)
    {
        printf("Your Total before the discount is, %c %.2f\n", '$', total);
        total = 0.9 * total; // Apply 10% discount
        printf("Your Total after the discount is, %c %.2f\n", '$', total);
    }
    else
    {
        printf("Your Total is, %c %.2f\n", '$', total);
    }

    // ===  Q7: Age Discount ===
    /*
      Children under 12 get $1.00 discount
    */
    int age = 0;
    printf("Enter your age below: \n");
    scanf("%d", &age);

    if (age < 12)
    {
        total -= 1.0;
        printf("Your Total after the discount is, %c %.2f\n", '$', total);
    }
    else
    {
        printf("Your Total is, %c %.2f\n", '$', total);
    }


    // === Q8: Free topping ===
    if (noOfScoops == 3 && typeOfCone == 2){
        printf("Congratulations ! You get a free topping\n");
    }

    // === Q9: Payment Method ===
   /*
     1. Cash → no extra fee
     2. Card → +$0.50 processing fee
   */
   int paymentMethod = 0;
   printf("Enter Your Payment Method\n");
   printf("Enter \"1 : Cash or 2 : Card\"\n");
   scanf("%d", &paymentMethod);

   // Validate input
   while (paymentMethod>2 || paymentMethod < 0){
        printf("Invalid Input \n");
        printf("Please Try again \n");
        scanf("%d", &paymentMethod);
   }

   // Apply processing fee for card payments
   if (paymentMethod == 2)
   {
    printf("An extra Processing fee is added\n");
    total += 0.50;
    printf("Your Total is, %c %.2f\n", '$', total);
   }
   else{
     printf("Your Total is, %c %.2f\n", '$', total);
   }

    return 0;
};