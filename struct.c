#include<stdio.h>
#include<string.h>
struct book{
    int no;
    char author[50];
    float price;
};

int main(){
    struct book avangers;
    avangers.no=7;
    strcpy(avangers.author,"marvelstudio");
    avangers.price=354.70;
    printf("%d \n", avangers.no);
    printf("%s \n", avangers.author);
    printf("%f \n", avangers.price);
}