char* helper(int num) {
    char *numbers[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *result = malloc(100);
    result[0] = '\0';
    if (num >= 0 && num < 20) {
        strcat(result, numbers[num]);
    }
    if (num >= 20 && num < 100) {
        strcat(result, tens[num / 10]);
        if (num % 10 != 0) {
            strcat(result, " ");
            strcat(result, helper(num % 10));
        }
    }
    if (num >= 100 && num <= 999) {
        strcat(result, numbers[num / 100]);
        strcat(result, " Hundred");
        if (num % 100 != 0) {
            strcat(result, " ");
            strcat(result, helper(num % 100));
        }
    }
    return result;
}

char* numberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }
    char *result = malloc(200);
    result[0] = '\0';
    if(num / 1000000000 != 0) {
        char *temp = helper(num / 1000000000);
        strcat(result, temp);
        strcat(result, " Billion ");
        num = num % 1000000000;
    }
    if(num / 1000000 != 0) {
        char *temp = helper(num / 1000000);
        strcat(result, temp);
        strcat(result, " Million ");
        num = num % 1000000;
    }
    if(num / 1000 != 0) {
        char *temp = helper(num / 1000);
        strcat(result, temp);
        strcat(result, " Thousand ");
        num = num % 1000;
    }
    char *temp = helper(num);
    strcat(result, temp);
    if(result[strlen(result) - 1] == ' ') {
        result[strlen(result) - 1] = '\0';
    }
    return result;
}