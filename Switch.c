#include<stdio.h>
int main()
{
    int MenuCode;
    printf("Enter The Menu code - ");
    scanf("%d",&MenuCode);
    switch(MenuCode)
{
    case 1: printf("Food Item - Ghee Roast.\nPrice - Rs 180.");
    break;
    case 2: printf("Food Item - Idli.\nPrice - Rs 110.");
    break;
    case 3: printf("Food Item - Poori.\nPrice - Rs 120.");
    break;
    case 4: printf("Food Item - Chappathi.\nPrice - Rs 95.");
    break;
    case 5: printf("Food Item - Meals.\nPrice - Rs 150.");
    break;
    default: printf("error");
}
return 0;
}
    
