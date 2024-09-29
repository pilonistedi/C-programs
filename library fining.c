//fine for overdue library books
#include<stdio.h>
int main(){
    int bookID,dday,dmonth,rday,rmonth,mdue,ddue,due,rate,fine;

    printf("Enter the bookID: ");
    scanf("%d", &bookID);
    printf("Enter the book`s due month: ");
    scanf("%d", &dmonth);
    printf("Enter the book`s due day: ");
    scanf("%d", &dday);
    printf("Enter the book`s return month: ");
    scanf("%d", &rmonth);
    printf("Enter the book`s return day: ");
    scanf("%d", &rday);

    if (rmonth > dmonth){
        mdue = rmonth - dmonth;
    }else if (dmonth >= rmonth){
        mdue = 0;
    }
    if (rday > dday){
        ddue = rday - dday;
    }else if (dday >= rday){
        ddue = 0;
    }

    due = (mdue * 30) + ddue;

    if (due >= 15){
        rate = 100;
    }else if(due > 7){
        rate = 50;
    }else if (due > 0){
        rate = 20;
    }else{
        rate = 0;
    }

    fine = due * rate;

    printf("\nbookID: %d", bookID);
    printf("\ndue date: %d - %d", dday,dmonth);
    printf("\nreturn date: %d - %d", rday,rmonth);
    printf("\ndays overdue: %d", due);
    printf("\nfine rate: %dKsh. per day.", rate);
    printf("\nfine amount: %.2dKsh.", fine);


    return 0;
}
