//parenthesis checking
#define max 10000
typedef struct
{
    char *data;
    int top;
} stack;
stack brac;
int push(stack *st, char ch)
{
    if (st->top == max - 1)
    {
        //printf("Stack overflow\n");
        return 0;
    }
    st->top++;
    st->data[st->top] = ch;
    return 1;
}
int pop(stack *st, char *ch)
{
    if (st->top == -1)
    {
        //printf("Stack empty\n");
        return 0;
    }
    *ch = st->data[st->top];
    st->data[st->top] = '\0';
    st->top--;
    return 1;
}
int isValidExpr(char *exp)
{
    char ch, ch2;
    int i = 0;
    while (ch = exp[i])
    {
        if (ch == '(' || ch == '{' || ch == '[')
            push(&brac, ch);
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (pop(&brac, &ch2) == 1)
            {
                if (ch == ')' && ch2 != '(' || ch == '}' && ch2 != '{' || ch == ']' && ch2 != '[')
                    return 0;
            }
            else
                return 0;
        }
        i++;
    }
    if (brac.top != -1)
        return 0;
    return 1;
}
int main()
{
    brac.data = (char *)malloc(max * sizeof(char));
    //brac.data[0] = '\0';
    brac.top = -1;
    char exp[max];
    printf("Enter an expression: ");
    scanf("%s", exp);
    if (isValidExpr(exp))
        printf("Valid");
    else
        printf("Invalid");
}