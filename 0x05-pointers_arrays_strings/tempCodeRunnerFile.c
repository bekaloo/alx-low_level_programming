int sign_counter(int sc, char *s)
{
int l, neg = 0;
for (l = sc; l >= 0; l--)
{
if (s[l] == '-')
{
neg++;
}
}
return neg;
}